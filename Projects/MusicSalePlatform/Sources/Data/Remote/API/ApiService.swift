//
//  ApiService.swift
//  MusicSalePlatform
//
//  Created by hyewon on 2/16/26.
//

import Combine
import Alamofire

final class ApiService: BaseApiServiceProtocol {
    
    var baseURL: String {
        return "http://localhost:8080/api/v1"
    }
    
    public init() {}
    
    func request<T: Decodable>(
        endpoint: BaseEndpoint,
        headers: HTTPHeaders? = nil
    ) async throws -> T {
        
        let dataRequest = AF.request(
            baseURL + endpoint.path,
            method: endpoint.method,
            parameters: endpoint.parameters,
            encoding: endpoint.method == .get ? URLEncoding.default : JSONEncoding.default,
            headers: headers
        )
        
        let response = await dataRequest.serializingDecodable(T.self).response
        
        switch response.result {
        case .success(let value):
            return value
        case .failure(let error):
            if let statusCode = response.response?.statusCode {
                throw NetworkError.serverError(statusCode)
            }
            throw error
        }
    }
    
    // T가 아닌 BaseResponse<T>를 원천적으로 핸들링하는 Publisher 반환
    func request<T: Decodable>(_ endpoint: BaseEndpoint) -> AnyPublisher<T, NetworkError> {
        let url = baseURL + endpoint.path
        
        return AF.request(
            url,
            method: endpoint.method,
            parameters: endpoint.parameters,
            encoding: endpoint.method == .get ? URLEncoding.default : JSONEncoding.default
        )
        .publishDecodable(type: BaseResponse<T>.self)
        .tryMap { response in
            // 1. HTTP 상태 코드 확인
            if let statusCode = response.response?.statusCode, !(200...299).contains(statusCode) {
                throw NetworkError.serverError(statusCode)
            }
            
            // 2. 파싱된 데이터 확인
            guard let baseResponse = response.value else {
                throw NetworkError.decodingError
            }
            
            // 3. 서버 비즈니스 로직 성공 여부 확인
            if baseResponse.success, let data = baseResponse.data {
                return data // 성공 시 데이터 반환
            } else {
                // 서버가 success: false를 줬을 때 (상태코드는 200이어도 에러인 경우)
                throw NetworkError.invalidResponse
            }
        }
        // tryMap에서 던진 any Error를 NetworkError로 변환
        .mapError { error in
            if let networkError = error as? NetworkError {
                return networkError
            }
            // 정의되지 않은 에러가 발생했을 때 기본값 처리
            return .invalidResponse
        }
        .eraseToAnyPublisher()
    }
}

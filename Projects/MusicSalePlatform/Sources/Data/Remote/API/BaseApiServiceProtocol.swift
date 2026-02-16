//
//  BaseApiServiceProtocol.swift
//  MusicSalePlatform
//
//  Created by hyewon on 2/16/26.
//

import Combine
import Alamofire

protocol BaseApiServiceProtocol {
    var baseURL: String { get }
    
    func request<T: Decodable>(endpoint: BaseEndpoint, headers: HTTPHeaders?) async throws -> T
    
    func request<T: Decodable>(_ endpoint: BaseEndpoint) -> AnyPublisher<T, NetworkError>
}

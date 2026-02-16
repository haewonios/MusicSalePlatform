//
//  KakaoLoginRepository.swift
//  MusicSalePlatform
//
//  Created by hyewon on 12/8/25.
//

import KakaoSDKUser
import Combine

final class KakaoLoginRepository: KakaoLoginRepositoryProtocol {
    
    private let apiService: BaseApiServiceProtocol
    
    public init(apiService: BaseApiServiceProtocol) {
        self.apiService = apiService
    }
    
    /// 카카오 로그인
    func kakaoLogin() -> AnyPublisher<OAuthToken, KakaoLoginError> {
        UserApi.isKakaoTalkLoginAvailable() ? kakaoLoginWithApp() : kakaoLoginWithAccount()
    }
    
    /// 카카오톡 로그인
    func kakaoLoginWithApp() -> AnyPublisher<OAuthToken, KakaoLoginError> {
        Future { promise in
            UserApi.shared.loginWithKakaoTalk { oauthToken, error in
                if let error {
                    AppLogger.debug(error.localizedDescription)
                    return promise(.failure(.sdkError(message: "\(error)")))
                }
                
                guard let oauthToken else {
                    return promise(.failure(.tokenFail))
                }
                
                promise(.success(
                    OAuthToken(
                        accessToken: oauthToken.accessToken,
                        refreshToken: oauthToken.refreshToken
                    )
                ))
            }
        }
        .eraseToAnyPublisher()
    }
    
    /// 카카오 계정으로 로그인
    func kakaoLoginWithAccount() -> AnyPublisher<OAuthToken, KakaoLoginError> {
        Future { promise in
            UserApi.shared.loginWithKakaoAccount { oauthToken, error in
                if let error {
                    AppLogger.debug(error.localizedDescription)
                    return promise(.failure(.sdkError(message: "\(error)")))
                }
                
                guard let oauthToken else {
                    return promise(.failure(.tokenFail))
                }
                
                promise(.success(
                    OAuthToken(
                        accessToken: oauthToken.accessToken,
                        refreshToken: oauthToken.refreshToken
                    )
                ))
            }
        }
        .eraseToAnyPublisher()
    }
    
    func requestKakaoOauthLogin(accessToken: String) -> AnyPublisher<UserAuth, KakaoLoginError> {
        apiService.request(UserAPI.loginWithKakao(accessToken: accessToken))
            .map { (dto: UserResponseDTO) in dto.toUserAuthEntity() }
            .mapError { _ in .invalidToken }
            .eraseToAnyPublisher()
    }
}

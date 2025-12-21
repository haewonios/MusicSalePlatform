//
//  KakaoLoginRepository.swift
//  MusicSalePlatform
//
//  Created by hyewon on 12/8/25.
//

import KakaoSDKUser
import Combine

class KakaoLoginRepository: KakaoLoginRepositoryProtocol {
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
}

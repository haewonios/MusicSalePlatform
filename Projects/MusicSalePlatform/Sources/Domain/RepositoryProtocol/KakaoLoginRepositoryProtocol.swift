//
//  KakaoLoginRepositoryProtocol.swift
//  MusicSalePlatform
//
//  Created by hyewon on 12/8/25.
//

import Combine

protocol KakaoLoginRepositoryProtocol {
    func kakaoLogin() -> AnyPublisher<OAuthToken, KakaoLoginError>
    func kakaoLoginWithApp() -> AnyPublisher<OAuthToken, KakaoLoginError>
    func kakaoLoginWithAccount() -> AnyPublisher<OAuthToken, KakaoLoginError>
}

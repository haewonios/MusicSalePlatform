//
//  KakaoLoginUseCase.swift
//  MusicSalePlatform
//
//  Created by hyewon on 12/8/25.
//

import Combine

protocol KakaoLoginUseCaseProtocol {
    func execute() -> AnyPublisher<Void, KakaoLoginDomainError>
}

final class KakaoLoginUseCase: KakaoLoginUseCaseProtocol {
    private let repository: KakaoLoginRepositoryProtocol
    
    public init(repository: KakaoLoginRepositoryProtocol) {
        self.repository = repository
    }
    
    func execute() -> AnyPublisher<Void, KakaoLoginDomainError> {
        return repository.kakaoLogin()
            .flatMap { oAuthToken -> AnyPublisher<UserAuth, KakaoLoginError> in
                return self.repository.requestKakaoOauthLogin(accessToken: oAuthToken.accessToken ?? "")
            }
            .map { _ in }
//            .map { $0.accessToken }
            .mapError { error in
                ErrorMapper.toDomainError(error)
            }
            .eraseToAnyPublisher()
    }
}

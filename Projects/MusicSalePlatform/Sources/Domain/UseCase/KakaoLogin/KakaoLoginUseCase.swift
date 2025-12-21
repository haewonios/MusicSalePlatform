//
//  KakaoLoginUseCase.swift
//  MusicSalePlatform
//
//  Created by hyewon on 12/8/25.
//

import Combine

protocol KakaoLoginUseCaseProtocol {
    func execute() -> AnyPublisher<String?, KakaoLoginDomainError>
}

final class KakaoLoginUseCase: KakaoLoginUseCaseProtocol {
    private let repository: KakaoLoginRepositoryProtocol
    
    public init(repository: KakaoLoginRepositoryProtocol) {
        self.repository = repository
    }
    
    func execute() -> AnyPublisher<String?, KakaoLoginDomainError> {
        return repository.kakaoLogin()
            .map { $0.accessToken }
            .mapError { error in
                DomainErrorMapper.toDomainError(error)
            }
            .eraseToAnyPublisher()
    }
}

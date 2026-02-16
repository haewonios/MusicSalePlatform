//
//  KakaoLoginDependency.swift
//  MusicSalePlatform
//
//  Created by hyewon on 12/21/25.
//

import ComposableArchitecture

private enum KakaoLoginUseCaseKey: DependencyKey {
    static let liveValue: KakaoLoginUseCaseProtocol = KakaoLoginUseCase(
        repository: KakaoLoginRepository(apiService: ApiService())
    )
}

extension DependencyValues {
    var kakaoLoginUseCase: KakaoLoginUseCaseProtocol {
        get { self[KakaoLoginUseCaseKey.self] }
        set { self[KakaoLoginUseCaseKey.self] = newValue }
    }
}

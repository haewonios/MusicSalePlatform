//
//  LoginFeature.swift
//  MusicSalePlatform
//
//  Created by hyewon on 12/21/25.
//

import ComposableArchitecture
import KakaoSDKUser

@Reducer
struct LoginFeature {
    @ObservableState
    struct State: Equatable {
        init() {}
    }
    
    enum Action {
        case kakaoLoginTapped
    }
    
    @Dependency(\.kakaoLoginUseCase) var kakaoLoginUseCase
    
    public init() {}
    
    var body: some ReducerOf<Self> {
        Reduce { state, action in
            switch action {
            case .kakaoLoginTapped:
                AppLogger.debug("kakaoLoginTapped")
                kakaoLoginUseCase.execute()
                
                // 기본 설정으로 통합 로그인 UI 호출
                UserApi.shared.loginWithKakao(BridgeConfiguration(), loginProperties: LoginConfiguration()) { token, error in
                    if let error = error {
                        print(error)
                        // 에러 처리
                        return
                    }
                    
                    AppLogger.debug("loginWithKakao() success.")
                    // 성공 시 동작 구현
                    let accessToken = token?.accessToken
                    
                    AppLogger.debug("accessToken: \(accessToken ?? "nil")")
                }
                
                
                return .none
            }
        }
    }
}

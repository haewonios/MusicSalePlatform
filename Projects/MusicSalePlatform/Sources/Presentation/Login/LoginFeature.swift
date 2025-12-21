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
        var accessToken: String?
        var alert: AlertState<Action>?
//        init() {}
    }
    
    enum Action: Equatable {
        case kakaoLoginTapped
        case showAlert(_ message: String)
        
    }
    
    @Dependency(\.kakaoLoginUseCase) var kakaoLoginUseCase
    
    public init() {}
    
    var body: some ReducerOf<Self> {
        Reduce { state, action in
            switch action {
            case .kakaoLoginTapped:
                AppLogger.debug("kakaoLoginTapped")

                return .run { send in
                    do {
                        // FIXME: - Main Thread 오류 발생 (SdK 호출 내부에서)
                        let accessToken = try await kakaoLoginUseCase.execute().async()
                        AppLogger.debug(accessToken ?? "accessToken is nil")
                    } catch {
                        AppLogger.debug(error.localizedDescription)
                        await send(.showAlert(error.localizedDescription))
                    }
                }
                
            case .showAlert(let message):
                AppLogger.debug(message)
                
                return .none
            }
        }
    }
}

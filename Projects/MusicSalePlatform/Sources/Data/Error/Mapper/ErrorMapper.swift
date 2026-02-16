//
//  ErrorMapper.swift
//  MusicSalePlatform
//
//  Created by hyewon on 2/17/26.
//

import Foundation

struct ErrorMapper {
    static func toDomainError(_ error: KakaoLoginError) -> KakaoLoginDomainError {
        switch error {
        case .sdkError(let message):
            AppLogger.debug(message)
            return .loginFail
        case .tokenFail:
            return .loginFail
        case .invalidToken:
            return .loginFail
        }
    }
}

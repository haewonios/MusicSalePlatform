//
//  DomainErrorMapper.swift
//  MusicSalePlatform
//
//  Created by hyewon on 12/22/25.
//

import Foundation

struct DomainErrorMapper {
    static func toDomainError(_ error: KakaoLoginError) -> KakaoLoginDomainError {
        switch error {
        case .sdkError(let message):
            AppLogger.debug(message)
            return .loginFail
        case .tokenFail:
            return .loginFail
        }
    }
}

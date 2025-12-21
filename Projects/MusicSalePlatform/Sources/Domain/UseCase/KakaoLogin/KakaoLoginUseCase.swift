//
//  KakaoLoginUseCase.swift
//  MusicSalePlatform
//
//  Created by hyewon on 12/8/25.
//

import Foundation

public protocol KakaoLoginUseCaseProtocol {
    func execute()
}

final class KakaoLoginUseCase: KakaoLoginUseCaseProtocol {
    func execute() {
        AppLogger.debug("usecase called")
    }
}

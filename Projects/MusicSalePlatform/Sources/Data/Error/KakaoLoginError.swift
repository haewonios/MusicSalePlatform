//
//  KakaoLoginError.swift
//  MusicSalePlatform
//
//  Created by hyewon on 12/22/25.
//

import Foundation

enum KakaoLoginError: Error {
    case sdkError(message: String)
    case tokenFail
    case invalidToken
}

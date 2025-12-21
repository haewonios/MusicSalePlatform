//
//  OAuthToken.swift
//  MusicSalePlatform
//
//  Created by hyewon on 12/8/25.
//

import Foundation

/// 카카오 로그인 OAuthToken
public struct OAuthToken {
    public let accessToken: String?
    public let refreshToken: String?
}

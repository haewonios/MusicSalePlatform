//
//  UserAuth.swift
//  MusicSalePlatform
//
//  Created by hyewon on 2/17/26.
//

import Foundation

public struct UserAuth {
    public let accessToken: String
//    public let refreshToken: String
    public let expiresIn: Int
    
    public init(accessToken: String, expiresIn: Int) {
        self.accessToken = accessToken
        self.expiresIn = expiresIn
    }
}

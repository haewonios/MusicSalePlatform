//
//  UserResponseDTO.swift
//  MusicSalePlatform
//
//  Created by hyewon on 2/16/26.
//

import Foundation

public struct UserResponseDTO: Decodable {
    public let accessToken: String
    public let refreshToken: String
    public let expiresIn: Int
}

extension UserResponseDTO {
    func toUserAuthEntity() -> UserAuth {
        return UserAuth(
            accessToken: accessToken,
            expiresIn: expiresIn
        )
    }
}

//
//  UserAPI.swift
//  MusicSalePlatform
//
//  Created by hyewon on 2/16/26.
//

import Foundation
import Alamofire

public enum UserAPI: BaseEndpoint {
    case loginWithKakao(accessToken: String)
}

extension UserAPI {
    public var path: String {
        switch self {
        case .loginWithKakao:
            return "/auth/kakao"
        }
    }
    
    public var method: HTTPMethod {
        switch self {
        case .loginWithKakao:
            return .post
        }
    }
    
    public var parameters: Parameters? {
        switch self {
        case .loginWithKakao(let accessToken):
            return ["accessToken": accessToken]
        }
    }
}

//
//  AppConfig.swift
//  MusicSalePlatform
//
//  Created by hyewon on 12/21/25.
//

import Foundation

public struct AppConfig {
    /// 카카오 SDK App Key
    public static let kakaoAppKey: String = {
        guard let result = Bundle.main.object(forInfoDictionaryKey: "KAKAO_APP_KEY") as? String else {
            fatalError("KAKAO_APP_KEY is missing!")
        }
        return result
    }()
}

extension AppConfig {
}

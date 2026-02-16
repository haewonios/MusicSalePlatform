//
//  BaseResponse.swift
//  MusicSalePlatform
//
//  Created by hyewon on 2/16/26.
//

import Foundation

struct BaseResponse<T: Decodable>: Decodable {
    let success: Bool
    let data: T?
    let message: String?
}

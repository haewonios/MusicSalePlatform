//
//  NetworkError.swift
//  MusicSalePlatform
//
//  Created by hyewon on 2/16/26.
//

import Foundation

enum NetworkError: Error {
    case invalidResponse
    case decodingError
    case serverError(Int)
}

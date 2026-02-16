//
//  BaseEndpoint.swift
//  MusicSalePlatform
//
//  Created by hyewon on 2/16/26.
//

import Foundation
import Alamofire

public protocol BaseEndpoint {
    var path: String { get }
    var method: HTTPMethod { get }
    var parameters: Parameters? { get }
}

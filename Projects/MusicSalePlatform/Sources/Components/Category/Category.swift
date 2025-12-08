//
//  Category.swift
//  MusicSalePlatform
//
//  Created by hyewon on 11/10/25.
//

import Foundation

enum Category: CaseIterable, Identifiable {
    case guitar
    case drum
    case keyboard
    case recording
    case equipment
    case others
    
    var id: Self { self }
    
    var title: String {
        switch self {
        case .guitar: 
            return "기타"
        case .drum: 
            return "드럼"
        case .keyboard:
            return "건반"
        case .recording: 
            return "레코딩"
        case .equipment:
            return "음향장비"
        case .others:
            return "관현악기"
        }
    }
}

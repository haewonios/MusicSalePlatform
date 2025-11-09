//
//  Tab.swift
//  MusicSalePlatform
//
//  Created by hyewon on 11/9/25.
//

import SwiftUI

enum Tab: CaseIterable, Identifiable {
    case community
    case map
    case home
    case chat
    case profile
    
    var id: Self { self }
    
    var image: Image {
        switch self {
        case .community:
            return Image("icon_community")
        case .map:
            return Image("icon_map")
        case .home:
            return Image("icon_home")
        case .chat:
            return Image("icon_chat")
        case .profile:
            return Image("icon_profile")
        }
    }
}

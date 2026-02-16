//
//  MusicSalePlatformApp.swift
//  MusicSalePlatform
//
//  Created by hyewon on 10/27/25.
//

import SwiftUI
import ComposableArchitecture

@main
struct MusicSalePlatformApp: App {
    @UIApplicationDelegateAdaptor(AppDelegate.self) var appDelegate
    
    private let store = Store(
        initialState: AppRootFeature.State()
    ) {
        AppRootFeature()
    }
    
    var body: some Scene {
        WindowGroup {
            switch store.destination {
            case .login:
                if let loginStore = store.scope(state: \.destination.login, action: \.login) {
                    LoginView(store: loginStore)
                }
            case .mainTab:
                MainTabView()
            }
        }
    }
}

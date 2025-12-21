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
        initialState: LoginFeature.State()
    ) {
        LoginFeature()
    }
    
    var body: some Scene {
        WindowGroup {
            LoginView(store: store)
//            MainTabView()
//                .onAppear {
//                    print("🟢 MainTabView onAppear")
//                }
        }
    }
}

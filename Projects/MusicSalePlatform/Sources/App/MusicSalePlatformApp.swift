//
//  MusicSalePlatformApp.swift
//  MusicSalePlatform
//
//  Created by hyewon on 10/27/25.
//

import SwiftUI

@main
struct MusicSalePlatformApp: App {
    @UIApplicationDelegateAdaptor(AppDelegate.self) var appDelegate
    
    var body: some Scene {
        WindowGroup {
            LoginView()
//            MainTabView()
//                .onAppear {
//                    print("🟢 MainTabView onAppear")
//                }
        }
    }
}

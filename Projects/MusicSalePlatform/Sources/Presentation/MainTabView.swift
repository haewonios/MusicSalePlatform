//
//  MainTabView.swift
//  MusicSalePlatform
//
//  Created by hyewon on 10/27/25.
//

import SwiftUI
import SharedResource

struct MainTabView: View {
    
    @State var selectedTab: Tab = .home
    
    // 각 탭별 NavigationStack 상태
    
    @State private var communityPath: [CommunityRoute] = []
    @State private var mapPath: [MapRoute] = []
    @State private var homePath: [HomeRoute] = []
    @State private var chatPath: [ChatRoute] = []
    @State private var profilePath: [ProfileRoute] = []
    
    var body: some View {
        VStack {
            Group {
                switch selectedTab {
                case .community:
                    NavigationStack(path: $communityPath) {
                        CommunityView()
                            .navigationDestination(for: CommunityRoute.self) { route in
                                switch route {
                                case .community:
                                    EmptyView()
                                }
                            }
                    }
                case .map:
                    NavigationStack(path: $mapPath) {
                        MapView()
                            .navigationDestination(for: MapRoute.self) { route in
                                switch route {
                                case .map:
                                    EmptyView()
                                }
                            }
                    }
                case .home:
                    NavigationStack(path: $homePath) {
                        HomeView()
                            .navigationDestination(for: HomeRoute.self) { route in
                                switch route {
                                case .home:
                                    EmptyView()
                                }
                            }
                    }
                case .chat:
                    NavigationStack(path: $chatPath) {
                        ChatView()
                            .navigationDestination(for: ChatRoute.self) { route in
                                switch route {
                                case .chat:
                                    EmptyView()
                                }
                            }
                    }
                case .profile:
                    NavigationStack(path: $profilePath) {
                        ProfileView()
                            .navigationDestination(for: ProfileRoute.self) { route in
                                switch route {
                                case .profile:
                                    EmptyView()
                                }
                            }
                    }
                }
            }
            TabView(selectedTab: $selectedTab)
        }
    }
}

#Preview {
    MainTabView()
}

// MARK: 임시 뷰

public struct CommunityView: View {
    public var body: some View {
        Text("CommunityView")
    }
}

public struct MapView: View {
    public var body: some View {
        HStack {
            Image(uiImage: SharedResource.images().users.toUIImage()!)
            Image(uiImage: SharedResource.images().location.toUIImage()!)
                .background(Color(SharedResource.colors().info.getUIColor()))
            Image(uiImage: SharedResource.images().home.toUIImage()!)
                .background(Color(SharedResource.colors().main_brand.getUIColor()))
            Image(uiImage: SharedResource.images().chat.toUIImage()!)
                .background(Color(SharedResource.colors().error.getUIColor()))
            Image(uiImage: SharedResource.images().profile.toUIImage()!)
        }
        Text("MapView_resource check")
    }
}

public struct ChatView: View {
    public var body: some View {
        Text("ChatView")
    }
}

public struct ProfileView: View {
    public var body: some View {
        Text("ProfileView")
    }
}

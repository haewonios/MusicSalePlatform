//
//  LoginView.swift
//  MusicSalePlatform
//
//  Created by hyewon on 12/16/25.
//

import SwiftUI
import ComposableArchitecture

public struct LoginView: View {
    let store: StoreOf<LoginFeature>
    
    public var body: some View {
        VStack {
            Button {
                store.send(.kakaoLoginTapped)
            } label: {
                MusicSalePlatformAsset.Images.kakaoLogin.swiftUIImage
            }
            .padding(.horizontal, 10)
        }
    }
}

#Preview {
    LoginView(
        store: Store(
            initialState: LoginFeature.State()
        ) {
            LoginFeature()
        }
    )
}

//
//  LoginView.swift
//  MusicSalePlatform
//
//  Created by hyewon on 12/16/25.
//

import SwiftUI
import ComposableArchitecture

struct LoginView: View {
    let store: StoreOf<LoginFeature>
    
    var body: some View {
        VStack {
            Button {
                store.send(.kakaoLoginTapped)
            } label: {
                // TODO: - 버튼 이미지 수정 필요
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

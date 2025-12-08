//
//  NavigationView.swift
//  MusicSalePlatform
//
//  Created by hyewon on 11/10/25.
//

import SwiftUI

struct NavigationView: View {
    
    let title: String?
    let onBack: () -> Void
    
    public init(title: String? = nil, onBack: @escaping () -> Void) {
        self.title = title
        self.onBack = onBack
    }
    
    var body: some View {
        HStack {
            Button(
                action: {
                    onBack()
                },
                label: {
                    Image("icon_back")
                        .foregroundStyle(.black)
                }
            )
            .frame(width: 28, height: 28)
            Spacer()
            if let title {
                Text(title)
                    .lineLimit(1)
            }
            Spacer()
            Button(
                action: {
                    print("share with id")
                },
                label: {
                    Image("icon_share")
                    .foregroundStyle(.black)
                }
            )
            .frame(
                width: 28,
                height: 28
            )
        }
        .padding(.horizontal, 20)
    }
}

#Preview {
    NavigationView(title: "목록") {
        print("back button tapped")
    }
}

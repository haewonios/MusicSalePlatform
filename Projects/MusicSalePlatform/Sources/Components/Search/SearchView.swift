//
//  SearchView.swift
//  MusicSalePlatform
//
//  Created by hyewon on 11/10/25.
//

import SwiftUI

struct SearchView: View {
    @Binding var text: String
    
    var body: some View {
        HStack {
            Image("icon_search")
            Spacer()
                .frame(width: 0)
            TextField("검색어를 입력하세요.", text: $text)
                .padding(10)
        }
        .padding(.horizontal, 10)
        .background {
            RoundedRectangle(cornerRadius: 10)
                .fill(Color.white)
                .shadow(color: .black.opacity(0.1), radius: 4, x: 0, y: 2)
        }
    }
}

#Preview {
    SearchView(text: .constant("검색어"))
        .padding(.horizontal, 20)
}

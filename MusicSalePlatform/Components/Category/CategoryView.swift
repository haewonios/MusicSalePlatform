//
//  CategoryView.swift
//  MusicSalePlatform
//
//  Created by hyewon on 11/10/25.
//

import SwiftUI

struct CategoryView: View {
    var body: some View {
        ScrollView(.horizontal) {
            HStack(spacing: 20) {
                ForEach(Category.allCases) { category in
                    Text(category.title)
                }
            }
        }
        .scrollIndicators(.hidden)
    }
}

#Preview {
    CategoryView()
}

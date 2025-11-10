//
//  HomeView.swift
//  MusicSalePlatform
//
//  Created by hyewon on 11/2/25.
//

import SwiftUI

struct HomeView: View {
    @State var searchText: String = ""
    
    var body: some View {
        VStack(alignment: .leading, spacing: 20) {
            HStack {
                Image("logo")
                Spacer()
                Image("icon_bell")
            }
            SearchView(text: $searchText)
            CategoryView()
            
        }
        .padding(.horizontal, 20)
    }
}

#Preview {
    HomeView()
}

//
//  TabView.swift
//  MusicSalePlatform
//
//  Created by hyewon on 11/3/25.
//

import SwiftUI

struct TabView: View {
    @Binding var selectedTab: Tab
    
    var body: some View {
        VStack {
            Divider()
            HStack {
                ForEach(Tab.allCases) { tab in
                    tabButton(tab: tab)
                        .frame(maxWidth: .infinity)
                }
            }
            .frame(height: 60)
        }
    }
    
    private func tabButton(tab: Tab) -> some View {
        let isSelected: Bool = selectedTab == tab
        print(tab, isSelected)
        
        return Button {
            // action
            selectedTab = tab
        } label: {
            tab.image
                .foregroundColor(isSelected ? .red : .black)
        }
    }
}

struct Preview_view: View {
    @State var selectedTab: Tab = .home
    
    var body: some View {
         TabView(selectedTab: $selectedTab)
    }
}

#Preview {
    Preview_view()
}

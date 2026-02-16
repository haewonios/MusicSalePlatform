// swift-tools-version: 6.0
@preconcurrency
import ProjectDescription

let bundleId = "$(BUNDLE_ID)"
let infoPlist: [String: Plist.Value] = [
    "UILaunchStoryboardName": "Launch Screen",
    "LSApplicationQueriesSchemes": ["kakaokompassauth"], // 카카오톡으로 로그인]
    "KAKAO_APP_KEY": "$(KAKAO_APP_KEY)",
    "CFBundleURLTypes": [
        "CFBundleTypeRole": "Editor",
        "CFBundleURLSchemes": ["kakao$(KAKAO_APP_KEY)"]
    ],
    "UIApplicationSceneManifest": [
        "UIApplicationSupportsMultipleScenes": false,
        "UISceneConfigurations": [
            "UIWindowSceneSessionRoleApplication": [
                [
                    "UISceneConfigurationName": "Default Configuration",
                    "UISceneDelegateClassName": "$(PRODUCT_MODULE_NAME).SceneDelegate"
                ]
            ]
        ]
    ],
    "NSAppTransportSecurity": [
        "NSAllowsLocalNetworking": true,
        "NSAllowsArbitraryLoads": true
    ],
]

@MainActor
let project = Project(
    name: "MusicSalePlatform",
    packages: [
        .package(url: "https://github.com/pointfreeco/swift-composable-architecture.git", from: "1.20.0"),
        .package(url: "https://github.com/kakao/kakao-ios-sdk", from: "2.25.0"),
    ],
    settings: .settings(
        base: [:],
        configurations: [
            .debug(name: "Debug", xcconfig: "Configurations/Common.xcconfig"),
            .release(name: "Release", xcconfig: "Configurations/Common.xcconfig")
        ]
    ),
    targets: [
        .target(
            name: "MusicSalePlatform",
            destinations: [.iPhone],
            product: .app,
            bundleId: bundleId,
            deploymentTargets: .iOS("16.0"),
            infoPlist: .extendingDefault(with: infoPlist),
            sources: ["Sources/**"],
            resources: ["Resources/**"],
            dependencies: [
                .package(product: "ComposableArchitecture"),
                .package(product: "KakaoSDK")
            ]
        )
    ]
)

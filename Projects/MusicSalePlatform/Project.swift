// swift-tools-version: 6.0
@preconcurrency
import ProjectDescription

let bundleId = "$(BUNDLE_ID)"
let infoPlist: [String: Plist.Value] = [:]

@MainActor
let project = Project(
    name: "MusicSalePlatform",
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
//                .external(name: "ComposableArchitecture")
            ]
        )
    ]
)

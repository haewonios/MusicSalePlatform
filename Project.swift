// swift-tools-version: 6.0
@preconcurrency
import ProjectDescription

let bundleId = "$(BUNDLE_ID)"
let infoPlist: [String: Plist.Value] = [:]

@MainActor
let project = Project(
    name: "MusicSalePlatform",
    targets: [
        .target(
            name: "MusicSalePlatform",
            destinations: [.iPhone],
            product: .app,
            bundleId: bundleId,
            deploymentTargets: .iOS("16.0"),
            infoPlist: .extendingDefault(with: infoPlist),
            sources: ["MusicSalePlatform/Sources/**"],
            resources: ["MusicSalePlatform/Resources/**"],
            dependencies: [
                
            ]
        )
    ]
)

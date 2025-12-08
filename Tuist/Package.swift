// swift-tools-version: 6.0
@preconcurrency
import PackageDescription

#if TUIST
    @preconcurrency
    import ProjectDescription

    let packageSettings = PackageSettings(
        // Customize the product types for specific package product
        // Default is .staticFramework
         productTypes: ["ComposableArchitecture": .framework,],
    )
#endif

let package = Package(
    name: "MusicSalePlatform",
    dependencies: [
        .package(url: "https://github.com/pointfreeco/swift-composable-architecture.git", from: "1.20.0")
    ]
)

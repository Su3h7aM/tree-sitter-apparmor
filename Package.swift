// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "TreeSitterApparmor",
    products: [
        .library(name: "TreeSitterApparmor", targets: ["TreeSitterApparmor"]),
    ],
    dependencies: [
        .package(url: "https://github.com/ChimeHQ/SwiftTreeSitter", from: "0.8.0"),
    ],
    targets: [
        .target(
            name: "TreeSitterApparmor",
            dependencies: [],
            path: ".",
            sources: [
                "src/parser.c",
                // NOTE: if your language has an external scanner, add it here.
            ],
            resources: [
                .copy("queries")
            ],
            publicHeadersPath: "bindings/swift",
            cSettings: [.headerSearchPath("src")]
        ),
        .testTarget(
            name: "TreeSitterApparmorTests",
            dependencies: [
                "SwiftTreeSitter",
                "TreeSitterApparmor",
            ],
            path: "bindings/swift/TreeSitterApparmorTests"
        )
    ],
    cLanguageStandard: .c11
)

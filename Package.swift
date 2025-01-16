// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "TreeSitterBnf",
    products: [
        .library(name: "TreeSitterBnf", targets: ["TreeSitterBnf"]),
    ],
    dependencies: [
        .package(url: "https://github.com/ChimeHQ/SwiftTreeSitter", from: "0.8.0"),
    ],
    targets: [
        .target(
            name: "TreeSitterBnf",
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
            name: "TreeSitterBnfTests",
            dependencies: [
                "SwiftTreeSitter",
                "TreeSitterBnf",
            ],
            path: "bindings/swift/TreeSitterBnfTests"
        )
    ],
    cLanguageStandard: .c11
)

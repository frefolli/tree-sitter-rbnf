import XCTest
import SwiftTreeSitter
import TreeSitterRbnf

final class TreeSitterRbnfTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_rbnf())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Rbnf grammar")
    }
}

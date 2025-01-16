import XCTest
import SwiftTreeSitter
import TreeSitterBnf

final class TreeSitterBnfTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_bnf())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Bnf grammar")
    }
}

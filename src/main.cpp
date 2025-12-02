#include <iostream>
#include "analyzer/stats.hpp"
#include <string>

int main(int argc, char* argv[]) {
	if (argc < 2) {
		std::cerr << "Usage: " << argv[0] << " <filename>" << std::endl;
		return 1;
	}

	const std::string filename = argv[1];

	analyzer::TextStats stats = analyzer::analyze_file(filename);

	std::cout << "Analysis for file: " << filename << std::endl;
	std::cout << "  - Lines: " << stats.line_count << std::endl;
	std::cout << "  - Words: " << stats.word_count << std::endl;
	std::cout << "  - Characters: " << stats.char_count << std::endl;

	return 0;
}

#include "analyzer/stats.hpp"
#include <fstream>
#include <sstream>
#include <iostream>

namespace analyzer {

TextStats analyze_file(const std::string& filename) {
	std::ifstream file(filename);
	if (!file.is_open()) {
		std::cerr << "Error: Could not open file " << filename << std::endl;
		exit(1);
	}

	TextStats result = {0, 0, 0}; // line_count, word_count, char_count

    // --- Single Pass Algorithm ---
	std::string line;
	while (std::getline(file, line)) {
		result.line_count++;
        // Add line length + 1 to account for the discarded newline character.
		result.char_count += line.length() + 1;

		std::stringstream ss(line);
		std::string word;
		while (ss >> word) {
			result.word_count++;
		}
	}
	return result;
}

}

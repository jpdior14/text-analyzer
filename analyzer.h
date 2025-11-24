#ifndef ANALYZER_H
#define ANALYZER_H

#include <string>

// A struct to hold the results of the analysis.
struct TextStats {
	size_t line_count;
	size_t word_count;
	size_t char_count;
};

// Function declaration for the analyzer.
TextStats analyze_file(const std::string& filename);

#endif // ANALYZER_H

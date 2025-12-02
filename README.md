# Text Analyzer

A simple command-line utility written in C++ to analyze a text file and report the number of lines, words, and characters.

This project is a practical exercise in refactoring, debugging, and professionalizing a C++ codebase.

## Features

-   Counts the total number of lines.
-   Counts the total number of words (whitespace-separated).
-   Counts the total number of characters (including the newline character for each line).
-   Handles file-not-found errors gracefully.

## Building

To build the project, you need `g++` and `make`.

```bash
# Clone the repository (if you haven't already)
# git clone https://github.com/your-username/text-analyzer.git
# cd text-analyzer

# Build the executable
make

./analyzer <filename>

# First, create a sample file
echo "Hello brutal world" > test.txt
echo "Line two." >> test.txt

# Run the analyzer on the sample file
./analyzer test.txt

Analysis for file: test.txt
  - Lines: 2
  - Words: 5
  - Characters: 29


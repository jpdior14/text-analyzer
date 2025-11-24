# Compiler and Flags
CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++17

# Project Files
TARGET = analyzer
SRCS = main.cpp analyzer.cpp
OBJS = $(SRCS:.cpp=.o)

# Default Rule: Build the final target
all: $(TARGET)

# Linking Rule: Combine object files into the final executable
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

# Compilation Rule: Compile a .cpp file into a .o file
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean Rule: Remove all generated artifacts
clean:
	rm -f $(OBJS) $(TARGET)

# Compiler
CXX = g++

# Compiler flags
CXXFLAGS = -Wall -Wextra -std=c++17

# Target executable
TARGET = benchmark

# Source files
SRC = benchmark.cpp alg.cpp

# Header files
HEADERS = alg.h

# Object files
OBJ = $(SRC:.cpp=.o)

# Default target
all: $(TARGET)

# Linking the object files to create the executable
$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJ)

# Compile .cpp files into .o files
%.o: %.cpp $(HEADERS)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Run the project after compiling
run: $(TARGET)
	./$(TARGET)

# Clean up the compiled files
clean:
	rm -f $(OBJ) $(TARGET)

# Phony targets (do not treat them as file names)
.PHONY: all clean run

#Compiler
CXX = g++

#Compiler flags
CXXFLAGS = -Iinclude -Wall -Wextra

#Source files and object files
SRC = src/*.cpp
OBJ = $(SRC:.cpp=.o)

#Executable name
TARGET = output

#Default target
all: $(TARGET)

#Link the object files to create the executable
$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -c $< -o $@

#Clean up generated files
clean:
	rm -f $(OBJ) $(TARGET)

#Phony targets
.PHONY: all clean

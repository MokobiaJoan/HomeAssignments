# Project name
PROJECT = robots

# Compiler
CXX = g++

# Source files
SRC = Transformers.cpp dinobot.cpp autobot.cpp predacon.cpp  test_transformers.cpp

# Object files
OBJ = $(SRC:.cpp=.o)

# Google Test flags
GTEST_LIBS = -lgtest -lgtest_main -pthread

# Executable target
$(PROJECT): $(OBJ)
	$(CXX) -o $(PROJECT) $(OBJ) $(GTEST_LIBS)

# Compile object files
%.o: %.cpp
	$(CXX) -c $< -o $@

# Clean target
clean:
	rm -f $(OBJ) $(PROJECT)
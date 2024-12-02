CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++17 
TARGET = main

SRC = main.cpp comp.cpp
OBJ = $(SRC:.cpp=.o)

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^

%.o: %.cpp comp.hpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Limpeza
clean:
	rm -f $(OBJ) $(TARGET)

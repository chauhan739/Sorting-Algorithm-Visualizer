# Compiler
CXX = g++

# Compiler Flags
CXXFLAGS = -Wall -g

# Linking Flags
LDFLAGS = -lsfml-graphics -lsfml-audio -lsfml-window -lsfml-system

# Executables
BIN = main

# Header File
HDR = Visualizer/header.hpp

# Object Files
OBJ = ./*.o Algorithms/*.o Visualizer/*.o

$(BIN): $(OBJ)
	$(CXX) $(CXXFLAGS) $^ $(LDFLAGS) -o $@

main.o: main.cpp $(HEDR_FILE)
	$(CXX) -c $<

Algorithms/%.o: Algorithms/%.cpp $(HDR)
	$(CXX) -c $<

Visualizer/%.o: Visualizer/%.cpp $(HDR)
	$(CXX) -c $<

.PHONY: clean

clean:
	$(RM) $(OBJ) *~ Visualizer/*~ Algorithms/*~ $(BIN)

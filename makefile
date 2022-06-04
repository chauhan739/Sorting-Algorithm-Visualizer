# Compiler
CXX = g++

# Compiler Flags
CXXFLAGS = -Wall -g

# Linking Flags
LDFLAGS = -lsfml-graphics -lsfml-audio -lsfml-window -lsfml-system

# Executables
BIN = main

# Object Files
OBJ = main.o Visualizer/Constructor.o Visualizer/RunApplication.o Visualizer/TextManager.o Visualizer/RandomArrayGenerator.o Visualizer/Bars.o Visualizer/EventHandler.o Visualizer/WindowHandler.o Algorithms/BubbleSort.o Algorithms/SelectionSort.o Algorithms/InsertionSort.o

$(BIN): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) $(LDFLAGS) -o $(BIN)

main.o: main.cpp Visualizer/header.hpp
	$(CXX) -c main.cpp

Constructor.o: Visualizer/Constructor.cpp Visualizer/header.hpp
	$(CXX) -c Constructor.cpp

RunApplication.o: Visualizer/RunApplication.cpp Visualizer/header.hpp
	$(CXX) -c RunApplication.cpp

TextManager.o: Visualizer/TextManager.cpp Visualizer/header.hpp
	$(CXX) -c TextManager.cpp

RandomArrayGenerator.o: Visualizer/RandomArrayGenerator.cpp Visualizer/header.hpp
	$(CXX) -c RandomArrayGenerator.cpp

Bars.o: Visualizer/Bars.cpp Visualizer/header.hpp
	$(CXX) -c Bars.cpp

EventHandler.o: Visualizer/EventHandler.cpp Visualizer/header.hpp
	$(CXX) -c EventHandler.cpp

WindowHandler.o: Visualizer/WindowHandler.cpp Visualizer/header.hpp
	$(CXX) -c WindowHandler.cpp

BubbleSort.o: Algorithms/BubbleSort.cpp Visualizer/header.hpp
	$(CXX) -c BubbleSort.cpp

SelectionSort.o: Algorithms/SelectionSort.cpp Visualizer/header.hpp
	$(CXX) -c SelectionSort.cpp

InsertionSort.o: Algorithms/InsertionSort.cpp Visualizer/header.hpp
	$(CXX) -c InsertionSort.cpp

clean:
	$(RM) $(OBJ) *~ Visualizer/*~ Algorithms/*~ $(BIN)

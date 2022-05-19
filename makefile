CXX = g++
CXXFLAGS = -std=c++14 -Wall -pedantic
LDLIBS = -lsfml-graphics -lsfml-audio -lsfml-window -lsfml-system
BIN = main 
OBJ = main.o Visualizer/Constructor.o Visualizer/RunApplication.o Visualizer/TextManager.o Visualizer/RandomArrayGenerator.o Visualizer/Bars.o Algorithms/AlgoSelecter.o Algorithms/BubbleSort.o Algorithms/SelectionSort.o

$(BIN): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) $(LDLIBS) -o $(BIN)

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

AlgoSelecter.o: Algorithms/AlgoSelecter.cpp Visualizer/header.hpp
	$(CXX) -c AlgoSelecter.cpp

BubbleSort.o: Algorithms/BubbleSort.cpp Visualizer/header.hpp
	$(CXX) -c BubbleSort.cpp

SelectionSort.o: Algorithms/SelectionSort.cpp Visualizer/header.hpp
	$(CXX) -c SelectionSort.cpp

clean:
	$(RM) $(OBJ) *~ Visualizer/*~ Algorithms/*~ $(BIN)

CXX = g++
CXXFLAGS = -Wall -std=c++14
LDLIBS = -lsfml-graphics -lsfml-audio -lsfml-window -lsfml-system
BIN = main 
OBJ = main.o Visualizer/Constructor.o Visualizer/RunApplication.o Visualizer/RandomArrayGenerator.o Visualizer/Bars.o Algorithms/BubbleSort.o Algorithms/SelectionSort.o

$(BIN): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) $(LDLIBS) -o main

main.o: main.cpp Visualizer/header.hpp
	$(CXX) -c main.cpp

Constructor.o: Visualizer/Constructor.cpp Visualizer/header.hpp
	$(CXX) -c Constructor.cpp

RunApplication.o: Visualizer/RunApplication.cpp Visualizer/header.hpp
	$(CXX) -c RunApplication.cpp

RandomArrayGenerator.o: Visualizer/RandomArrayGenerator.cpp Visualizer/header.hpp
	$(CXX) -c RandomArrayGenerator.cpp

Bars.o: Visualizer/Bars.cpp Visualizer/header.hpp
	$(CXX) -c Bars.cpp

BubbleSort.o: Algorithms/BubbleSort.cpp Visualizer/header.hpp
	$(CXX) -c BubbleSort.cpp

SelectionSort.o: Algorithms/SelectionSort.cpp Visualizer/header.hpp
	$(CXX) -c SelectionSort.cpp

clean:
	$(RM) *.o Visualizer/*.o Algorithms/*.o *~ $(BIN)

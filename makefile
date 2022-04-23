CXX = g++
CXXFLAGS = -Wall -std=c++14
LDLIBS = -lsfml-graphics -lsfml-audio -lsfml-window -lsfml-system
BIN = main 
OBJ = main.o Constructor.o RunApplication.o RandomArrayGenerator.o Bars.o BubbleSort.o SelectionSort.o

main: $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) $(LDLIBS) -o main

main.o: main.cpp header.hpp
	$(CXX) -c main.cpp

Constructor.o: Constructor.cpp header.hpp
	$(CXX) -c Constructor.cpp

RunApplication.o: RunApplication.cpp header.hpp
	$(CXX) -c RunApplication.cpp

RandomArrayGenerator.o: RandomArrayGenerator.cpp header.hpp
	$(CXX) -c RandomArrayGenerator.cpp

Bars.o: Bars.cpp header.hpp
	$(CXX) -c Bars.cpp

BubbleSort.o: BubbleSort.cpp header.hpp
	$(CXX) -c BubbleSort.cpp

SelectionSort.o: SelectionSort.cpp header.hpp
	$(CXX) -c SelectionSort.cpp

clean:
	$(RM) *.o *~ $(BIN)

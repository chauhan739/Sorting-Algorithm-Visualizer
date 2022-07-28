# Compiler
CXX = g++

# Compiler Flags
CXXFLAGS = -Wall -g

# Linking Flags
LDFLAGS = -lsfml-graphics -lsfml-audio -lsfml-window -lsfml-system

# Executables
BIN := main

# Header File
HDR = Visualizer/header.hpp

# Source Files
# VPATH = ./:./Algorithms/:./Visualizer/
SRCS := $(wildcard Algorithms/*.cpp) $(wildcard Visualizer/*.cpp)

OBJS := $(SRCS:.cpp=.o)

all: build $(BIN) transfer

$(BIN): main.o $(OBJS)
	$(CXX) $(CXXFLAGS) $^ $(LDFLAGS) -o $@

main.o: main.cpp $(HDR)
	$(CXX) -c $<

OBJS += main.o

build:
	$(MAKE) -C Algorithms/
	$(MAKE) -C Visualizer/

transfer:
	mkdir -p Binaries/
	mv $(OBJS) $(BIN) Binaries/

.PHONY: run clean

run:
	./Binaries/main

clean:
	$(RM) -r Binaries/

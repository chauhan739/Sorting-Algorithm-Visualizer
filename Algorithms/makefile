# Compiler
CXX = g++

# Compiler Flags
CXXFLAGS = -Wall -g

# Linking Flags
LDFLAGS = -lsfml-graphics -lsfml-audio -lsfml-window -lsfml-system

# Executables
BIN = main

# Header File
HDR = ../Visualizer/header.hpp

SRCS := $(wildcard *.cpp)

OBJS := $(SRCS:.cpp=.o)

all: $(OBJS)

$(OBJS): $(SRCS) $(HDR)
	$(CXX) -c $(SRCS)

.PHONY: clean

clean:
	$(RM) *.o *~

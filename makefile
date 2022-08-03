# Compiler
CXX = g++

# Make Flags
MAKE = make --no-print-directory

# Compiler Flags
CXXFLAGS = -Wall -g

# Linking Flags
LDFLAGS = -lsfml-graphics -lsfml-audio -lsfml-window -lsfml-system

# Executables
BIN := main

# Header File
HDR = Visualizer/header.hpp

# Source Files
SRCS := $(wildcard Algorithms/*.cpp) $(wildcard Visualizer/*.cpp)

# Object Files
OBJS := $(SRCS:.cpp=.o)
OBJS += main.o

all: build $(BIN) transfer

$(BIN): $(OBJS)
	@$(CXX) $(CXXFLAGS) $^ $(LDFLAGS) -o $@
	@echo Executable file generated successfully

build: main.o
	@echo Building Binaries...
	@$(MAKE) -C Algorithms/
	@$(MAKE) -C Visualizer/
	@echo Binaries generated successfully

main.o: main.cpp $(HDR)
	@$(CXX) -c $<

transfer:
	@mkdir -p Binaries/
	@mv $(OBJS) $(BIN) Binaries/
	@echo Binary files transferred to $(shell pwd)/Binaries

.PHONY: run clean

run:
	@echo Running Executable...
	@./Binaries/main

clean:
	@echo Cleaning Binaries...
	@$(RM) -r Binaries/
	@echo Done

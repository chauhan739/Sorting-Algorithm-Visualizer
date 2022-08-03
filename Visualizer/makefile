# Compiler
CXX = g++

# Compiler Flags
CXXFLAGS = -Wall -g

# Linking Flags
LDFLAGS = -lsfml-graphics -lsfml-audio -lsfml-window -lsfml-system

# Header File
HDR = header.hpp

SRCS := $(wildcard *.cpp)

OBJS := $(SRCS:.cpp=.o)

all: $(OBJS)

$(OBJS): $(SRCS) $(HDR)
	@$(CXX) -c $(SRCS)

.PHONY: clean

clean:
	$(RM) *.o *~

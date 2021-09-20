# the compiler: gcc for C program, define as g++ for C++
CC = g++

# compiler flags:
#  -g    adds debugging information to the executable file
#  -Wall turns on most, but not all, compiler warnings
CFLAGS  = -g -Wall -std=c++14

SOURCE = main.cpp util/PPM.cpp util/Pixel.cpp
HEADER = util/PPM.h util/Pixel.h

# the build target executable:
BIN = raytrace.o

all: $(BIN)

$(BIN): $(SOURCE) $(HEADER)
	$(CC) $(CFLAGS) $(SOURCE) -o $(BIN)

clean:
	$(RM) $(BIN) text.ppm
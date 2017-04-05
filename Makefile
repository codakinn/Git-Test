# Compiler
CC = g++

# Debugging
DEBUG = -g

# Compiler Flags
CFLAGS = -c -Wall $(DEBUG)

# Target
TARGET = HelloWorld

$(TARGET): main.o
	$(CC) main.o -o HelloWorld

main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp

clean:
	rm *.o *~ $(TARGET)

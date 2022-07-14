CC=gcc
CFLAGS=-Wall
RM=rm
FFlAGS=-f

name: name.cpp
	$(CC) $(CFLAGS) -c name.cpp

name.exe: name.o
	$(CC) $(CFLAGS) -o name.exe name.o

all: name.cpp
	$(CC) $(CFLAGS) name.cpp -o name

clean:
	$(RM) $(FFlAGS) name name.o

CC=g++
CFLAGS=-std=c++11 -Wall

all: myprogram

myprogram: main.o Object.o
	$(CC) $(CFLAGS) $^ -o $@

main.o: main.cpp Object.h
	$(CC) $(CFLAGS) -c $< -o $@

Object.o: Object.cpp Object.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f *.o myprogram

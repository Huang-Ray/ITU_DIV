
CC = g++ -std=c++11
CFLAGS += -g -Wall
LDFLAGS +=
EXEC = itu_div.o main.o main clean exe 

all: $(EXEC)

.PHONY: all

main: main.o
	$(CC) $(CFLAGS) $(LDFLAGS) main.o itu_div.o -o $@

main.o: main.cpp itu_div.h typedef.h
	$(CC) -c main.cpp

itu_div.o: itu_div.cpp itu_div.h typedef.h
	$(CC) -c itu_div.cpp

clean:
	del -f *.o

exe:
	./main.exe

.PHONY: clean
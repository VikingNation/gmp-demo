CC=gcc
CXX=g++
RM=rm -f

CPPFLAGS=-g -Wall -I/home/jason/opt/include
LDFLAGS=-g 
LDFLAGS+=-L/home/jason/opt/lib
LDLIBS=-lgmp

CFLAGS=-Wall
CFLAGS+=-I/home/jason/opt/include

gmpDemo: main.o GmpClass.o
	g++ -o gmpDemo main.o GmpClass.o $(LDFLAGS) $(LDLIBS)


main.o: main.cxx 
	g++ -c main.cxx $(CFLAGS)

GmpClass.o: GmpClass.cxx GmpClass.hpp
	g++ -c GmpClass.cxx $(CFLAGS)

clean:
	$(RM) main.o GmpClass.o gmpDemo

test:
	valgrind ./gmpDemo

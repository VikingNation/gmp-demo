CC=gcc
CXX=g++
RM=rm -f

CPPFLAGS=-g -Wall -I/home/jason/opt/include
LDFLAGS=-g 
LDFLAGS+=-L/home/jason/opt/lib -L.
LDLIBS=-lgmp -lGmpClass

CFLAGS=-Wall
CFLAGS+=-I/home/jason/opt/include

gmpDemo: main.o libGmpClass.so
	g++ -o gmpDemo main.o $(LDFLAGS) $(LDLIBS)
	echo "Be sure to set LD_LIBRARY_PATH to location where libGmpClass.so is located"


main.o: main.cxx 
	g++ -c main.cxx $(CFLAGS)

GmpClass.o: GmpClass.cxx GmpClass.hpp
	g++ -c GmpClass.cxx $(CFLAGS)

libGmpClass.so: GmpClass.o
	g++ -o libGmpClass.so -fPIC -g GmpClass.o -lgmp -shared $(LDFLAGS)

clean:
	$(RM) main.o GmpClass.o gmpDemo libGmpClass.so

test:
	valgrind ./gmpDemo

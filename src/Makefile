CC=gcc
CXX=g++
RM=rm -Rf
LN=ln

PYINC=/usr/include/python3.10
GMPINC=/home/jason/opt/include

CCFLAGS=-g -Wall -I$(GMPINC)
CCFLAGS+=-fPIC

MAJOR=0
MINOR=1


LDFLAGS=-g 
LDFLAGS+=-L/home/jason/opt/lib -L.
LDLIBS=-lgmp -lgmpxx libGmpClass.so.$(MAJOR).$(MINOR)

ALL: gmpDemo GmpClassPy dist

allclean: clean distclean

gmpDemo: main.o libGmpClass.so
	g++ -o gmpDemo main.o $(LDFLAGS) $(LDLIBS)
	echo "Be sure to set LD_LIBRARY_PATH to location where libGmpClass.so is located"


main.o: main.cxx 
	g++ -c main.cxx $(CCFLAGS)

GmpClass.o: GmpClass.cxx GmpClass.hpp
	g++ -c GmpClass.cxx $(CCFLAGS)

libGmpClass.so: GmpClass.o
	g++ -o libGmpClass.so.$(MAJOR).$(MINOR) $(LDFLAGS) -fPIC -g GmpClass.o -lgmp -lgmpxx -shared 
	ln -s libGmpClass.so.$(MAJOR).$(MINOR) libGmpClass.so

GmpClassPy: GmpClass.cxx
	swig -c++ -python example.i
	g++ -c example_wrap.cxx $(CCFLAGS) -I$(PYINC)
	ld -shared example_wrap.o $(LDFLAGS) $(LDLIBS) -o _example.so

dist: 
	mkdir -p ../dist
	cp gmpDemo ../dist
	cp libGmpClass.so.$(MAJOR).$(MINOR) ../dist
	cp example.py ../dist
	cp _example.so ../dist

distclean:
	$(RM) ../dist/*

clean:
	$(RM) main.o GmpClass.o gmpDemo libGmpClass.* example.py example_wrap.cxx example_wrap.o _example.so __pycache__

test:
	valgrind ./gmpDemo

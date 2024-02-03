CC = gcc
RM = rm -rf
TAR = tar
MKDIR = mkdir
CHMOD = chmod
CP = cp
MV = mv

PROGNAME = Gmp_demo
EXEC = gmpdemo
PACKAGE = $(PROGNAME)
VERSION = 0.1
DISTDIR = $(PACKAGE)-$(VERSION)
HEADERS = gmp.h
SOURCES = main.c

GMP_PREFIX=$(HOME)/opt


LDFLAGS = -lgmp -L$(GMP_PREFIX)/lib
CFLAGS = -Wall -I$(GMP_PREFIX)/include

GMP_PREFIX=$(HOME)/opt

OBJ = $(SOURCES:.c=.o)

DISTFILES = $(SOURCES) Makefile $(HEADERS)

all: $(EXEC)

$(EXEC): $(OBJ)
	$(CC) $(OBJ) $(LDFLAGS) -o $(EXEC)

%.o:%.c $(HEADERS)
	$(CC) -c $< $(CFLAGS)

#dist: distdir
#	$(CHMOD) -R a+r $(DISTDIR)
#	$(TAR) zcvf $(DISTDIR).tar.gz $(DISTDIR)
#	$(RM) $(DISTDIR)

clean:
	$(RM) $(PROGNAME) $(OBJ) *~ 


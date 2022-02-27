CXX = gcc
CXXFLAGS = -I.

APPNAME = main

LIBS = -L. -lLCFls

SRCFILES := $(filter-out LCFiles.c, $(wildcard *.c))
OBJFILES := $(addprefix obj/, $(patsubst %.c, %.o, $(SRCFILES)))

obj/%.o: %.c
	$(CXX) $(CXXFLAGS) -c -o $@ $^

all: $(OBJFILES)
	$(CXX) $(CXXFLAGS) $^ -o $(APPNAME) $(LIBS)

lib:
	$(CXX) $(CXXFLAGS) -c -o obj/LCFiles.o LCFiles.c
	ar rcs LCFls.lib obj/LCFiles.o

both: lib all
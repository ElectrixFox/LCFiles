CXX = gcc
CXXFLAGS = -I. -L.

APPNAME = main

#LIBS = -lLCStr

SRCFILES := $(wildcard *.c)
OBJFILES := $(addprefix obj/, $(patsubst %.c, %.o, $(SRCFILES)))

obj/%.o: %.c
	$(CXX) $(CXXFLAGS) -c -o $@ $^ $(LIBS)

all: $(OBJFILES)
	$(CXX) $(CXXFLAGS) $^ -o $(APPNAME)

#$(LIBS)
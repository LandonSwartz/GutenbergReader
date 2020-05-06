#Makefile for GutenbergReader

CXX := g++

CXXFLAGS := -std=c++11 -pthread -ggdb -O0 -Wall#compilier options

objs := File.o main.o

GutenbergReader : $(objs)
	$(CXX) $(CXXFLAGS) -o GutenbergReader $(objs)

File.o : File.cpp File.h
	$(CXX) $(CXXFLAGS) -c File.cpp

main.0 : main.cpp
	$(CXX) $(CXXFLAGS) -c main.cpp

.PHONY: clean

clean:
	rm -f GutenbergReader $(objs)


TARGET = main.exe
SRC_FILES = main.cpp
OPTIONS = -std=c++23

CXX = g++
OBJECTS = $(SRC_FILES:.cpp=.o)

$(TARGET): $(OBJECTS)
	$(CXX) -o $@ $^

%.o: %.cpp
	$(CXX) $(OPTIONS) -o $@ -c $<

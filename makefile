TARGET = addData.exe
SRC_FILES = addData.cpp

CXX = g++
OBJECTS = $(SRC_FILES:.cpp=.o)

$(TARGET): $(OBJECTS)
	$(CXX) -o $@ $^

%.o: %.cpp
	$(CXX) -o $@ -c $<

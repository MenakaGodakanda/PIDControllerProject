CXX = g++
CXXFLAGS = -I./include -std=c++11
LDFLAGS = 

SRC = $(wildcard src/*.cpp)
OBJ = $(SRC:.cpp=.o)

EXE = examples/main

all: $(EXE)

$(EXE): $(OBJ) examples/main.o
	$(CXX) $(LDFLAGS) -o $@ $^

examples/main.o: examples/main.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) examples/main.o $(EXE)
	rm -f output_data.csv plot_script.gp pid_output.png

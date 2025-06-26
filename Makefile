CXX := g++
CXXFLAGS := -Wall -Werror -Wextra -pedantic -std=c++23

SRC := source/main.cpp
OUT := bin/main

all: $(OUT)

$(OUT): $(SRC)
	@mkdir -p $(dir $(OUT))
	$(CXX) $(CXXFLAGS) -o $(OUT) $(SRC)

clean:
	rm -rf bin

.PHONY: all clean

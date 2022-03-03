SRC = g++

run:
	$(SRC) -o bin/ppm-to-ascii.out source/main.cpp

clean:
	rm bin/ppm-to-ascii.out

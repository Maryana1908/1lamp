all:
	mkdir bin
	g++ src/main.cpp -o bin/hello

clean: 
	rm -rf bin
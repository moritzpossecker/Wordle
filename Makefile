output: main.o functions.o
	g++ main.o functions.o -o output

main.o: main.cpp
	g++ -c main.cpp

functions.o:
	g++ -c functions.cpp

clean:
	rm -rf *.o output

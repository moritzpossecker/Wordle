CC = g++
FLAGS = -O3

main.out: main.o functions.o
	${CC} ${FLAGS} main.o functions.o -I /include -o wordle-exec

main.o: main.cpp include/header.h
	${CC} ${FLAGS} -c main.cpp -o main.o

functions.o: functions.cpp include/header.h
	${CC} ${FLAGS} -c functions.cpp -o functions.o

clean:
	rm *.o wordle-exec

all: app

app: arr.o main.o supplied.o
	g++ arr.o main.o supplied.o

arr.o: arr.cpp
	g++ -g -c arr.cpp

main.o: main.cpp
	g++ -g -c main.cpp

clean:
	rm ./a.out arr.o main.o

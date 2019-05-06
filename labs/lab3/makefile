all: app

app: list.o main.o supplied.o
	g++ list.o main.o supplied.o

arr.o: list.cpp
	g++ -g -c list.cpp

main.o: main.cpp
	g++ -g -c main.cpp

clean:
	rm ./a.out list.o main.o


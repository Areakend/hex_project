all: clean project

project: main.o
	gcc -o project main.o `sdl-config --libs`

main.o: main.c main.h
	gcc -c -Wall -Wextra main.c `sdl-config --cflags`

clean:
	rm -rf project *.o
	echo Clean done

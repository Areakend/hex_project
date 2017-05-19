# Dans le bash, au choix:
# make all : nettoie le dossier puis compile
# make project : compile le projet
# make mrpropre : supprime les *.o

all: clean project

project: main.o
	gcc -o project main.o `sdl-config --libs`

main.o: main.c main.h
	gcc -c -Wall -Wextra main.c `sdl-config --cflags`

clean:
	rm -rf project *.o
	echo Clean done

mrpropre:
	rm -rf *.o

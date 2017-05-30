# Dans le bash, au choix:
# make all : nettoie le dossier puis compile
# make project : compile le projet
# make mrpropre : supprime les *.o


# Variable contenant les *.c
CFILES = main.c alloc.c image.c position.c ajouter.c structure.c IAsimple.c
# Variable contenant les *.h
HFILES = main.h alloc.h image.h position.h ajouter.h structure.h IAsimple.h

all: clean project

project: files
	gcc -o project main.o -lSDL -lSDL_image `sdl-config --libs`

files: $(CFILES) $(HFILES)
	gcc -c -Wall -Wextra $(CFILES) `sdl-config --cflags`

clean:
	rm -rf project *.o
	echo Clean done

mrpropre:
	rm -rf *.o

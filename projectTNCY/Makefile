# Dans le bash, au choix:
# make all : nettoie le dossier puis compile
# make project : compile le projet
# make mrpropre : supprime les *.o


CC = gcc
CFLAGS = -Wall -Wextra
LDFLAGS = -lSDL -lSDLmain -LSDL_image
EXEC = project

all : clean $(EXEC)

$(EXEC) : ajouter.o alloc.o IAsimple.o image.o main.o position.o structure.o
	$(CC) -o $@ $^ $(LDFLAGS)

%.o : %.c
	$(CC) -o $@ -c $^ $(CFLAGS)

clean:
	rm -rf project *.o
	echo Clean done

mrpropre:
	rm -rf *.o

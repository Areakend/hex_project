# Dans le bash, au choix:
# make all : nettoie le dossier puis compile
# make project : compile le projet
# make mrpropre : supprime les *.o


CC = gcc
CFLAGS = -Wall -Wextra
LDFLAGS = -lSDL -lSDLmain -lSDL_mixer
EXEC = project

all : clean $(EXEC)
	./$(EXEC)

$(EXEC) : ajouter.o alloc.o IAsimple.o image.o main.o position.o structure.o easter.o
	$(CC) -o $@ $^ $(LDFLAGS)

%.o : %.c
	$(CC) -o $@ -c $^ $(CFLAGS)

clean:
	rm -rf project *.o
	echo Clean done

mrpropre:
	rm -rf *.o

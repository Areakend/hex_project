#include <stdlib.h>
#include <stdio.h>
#include "SDL/SDL.h"
#include "main.h"

int main( int argc, char* args[] ) {
	SDL_Init( SDL_INIT_EVERYTHING );

	SDL_Quit();

	printf("Test OK\n");
	return 0;
}

#include <stdlib.h>
#include <stdio.h>
#include "SDL/SDL.h"
#include "main.h"

int main() {
	
	/*SDL_INIT_VIDEO pour l'image,
	SDL_INIT_AUDIO pour mettre une bande son, 
	SDL_INIT_TIMER pour faire défiler le temps lors de la partie.
	*/

	if (SDL_Init( SDL_INIT_VIDEO | SDL_INIT_AUDIO | SDL_INIT_TIMER ) == -1) {
		//Si erreur :
        	printf("Erreur d'initialisation de la SDL : %s\n", SDL_GetError());
        	exit(EXIT_FAILURE);
	}

	SDL_SetVideoMode(640, 480, 32, SDL_HWSURFACE | SDL_DOUBLEBUF );
	/*Pour plein écran rajouter SDL_FULLSCREEN,
	pour supprimer les bordures (à terme ça sera plus esthétique SDL_NOFRAME
	*/

	pause();

	SDL_Quit();
	printf("Programme terminé correctement.\n");
	return EXIT_SUCCESS;
}



void pause() {
    int continuer = 1;
    SDL_Event event;
 
    while (continuer)
    {
        SDL_WaitEvent(&event);
        switch(event.type)
        {
            case SDL_QUIT:
                continuer = 0;
        }
    }
}

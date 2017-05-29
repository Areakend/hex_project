#include <stdlib.h>
#include <stdio.h>
#include "SDL/SDL.h"
#include "main.h"

//Les attributs de l'ecran (640 * 480)
const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;
const int SCREEN_BPP = 32;

int clicx =0;
int clicy =0;
const int t=120;
int posx = 0;
int posy = 0;

int main() {
	
	SDL_Surface *mainScreen = NULL; // Pointeur stockant la surface de l'écran
	SDL_Surface *backgroundMenu = NULL;
	SDL_Rect positionFond;

	positionFond.x = 0;
	positionFond.y = 0;

	/* Initialisation de SDL.
	SDL_INIT_VIDEO pour l'image,
	SDL_INIT_AUDIO pour mettre une bande son, 
	SDL_INIT_TIMER pour faire défiler le temps lors de la partie.
	*/

	if (SDL_Init( SDL_INIT_VIDEO | SDL_INIT_AUDIO | SDL_INIT_TIMER ) == -1) {
		// Si erreur :
        	printf("Erreur d'initialisation de la SDL : %s\n", SDL_GetError());
        	exit(EXIT_FAILURE);
	}
	

	// Création de la fenêtre
	mainScreen = SDL_SetVideoMode(SCREEN_WIDTH, SCREEN_HEIGHT, SCREEN_BPP, SDL_HWSURFACE | SDL_DOUBLEBUF );
	// Pour supprimer les bordures (à terme ça sera plus esthétique SDL_NOFRAME)

	if (mainScreen == NULL) {
		// Si l'ouverture a échoué :
		printf("Impossible de charger le mode vidéo : %s\n", SDL_GetError());
		exit(EXIT_FAILURE);
	}

	
	backgroundMenu = SDL_LoadBMP("lac_en_montagne.bmp");
	SDL_BlitSurface(backgroundMenu, NULL, mainScreen, &positionFond);

	SDL_Flip(mainScreen); // Mise à jour de l'écran avec la nouvelle image
	

	
	pause(); // Manière de mettre en pause le programme pour voir la fenêtre


	SDL_FreeSurface(backgroundMenu);
	SDL_Quit(); // Fermeture de SDL et libération de l'espace alloué à mainScreen
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

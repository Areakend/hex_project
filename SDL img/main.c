#include <stdlib.h>
#include <stdio.h>
#include "SDL/SDL.h"
#include "main.h"

int main() {
	
	SDL_Surface *screen = NULL; // Pointeur stockant la surface de l'écran
	SDL_Surface *background = NULL;
	SDL_Surface *zozor = NULL;
	SDL_Rect positionFond;
	SDL_Rect positionZozor;

	positionFond.x = 0;
	positionFond.y = 0;

	positionZozor.x = 500;
	positionZozor.y = 260;

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
	screen = SDL_SetVideoMode(800, 600, 32, SDL_HWSURFACE | SDL_DOUBLEBUF );
	/* Pour avoir le plein écran rajouter SDL_FULLSCREEN,
	pour supprimer les bordures (à terme ça sera plus esthétique SDL_NOFRAME
	*/

	if (screen == NULL) {
		// Si l'ouverture a échoué :
		printf("Impossible de charger le mode vidéo : %s\n", SDL_GetError());
		exit(EXIT_FAILURE);
	}

	
	background = SDL_LoadBMP("lac_en_montagne.bmp");
	SDL_BlitSurface(background, NULL, screen, &positionFond);

	zozor = SDL_LoadBMP("zozor.bmp");
	SDL_SetColorKey(zozor, SDL_SRCCOLORKEY, SDL_MapRGB(zozor->format, 0, 0, 255)); // Création de la transparence sur l'img zozor,le deuxième paramètre demande la transparence, le troisième la couleur du fond
	SDL_SetAlpha(zozor, SDL_SRCALPHA, 200); // Permet de faire un fondu entre les deux surfaces (transparence de zozor), full opaque (max) = 255
	SDL_BlitSurface(zozor, NULL, screen, &positionZozor);
	
	SDL_Flip(screen); // Mise à jour de l'écran avec la nouvelle image
	

	
	pause(); // Manière de mettre en pause le programme pour voir la fenêtre


	SDL_FreeSurface(background);
	SDL_FreeSurface(zozor);
	SDL_Quit(); // Fermeture de SDL et libération de l'espace alloué à screen
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

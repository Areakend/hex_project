#include <stdlib.h>
#include <stdio.h>
#include "SDL/SDL.h"
#include "main.h"

int main() {
	
	SDL_Surface *screen = NULL; // Pointeur stockant la surface de l'écran

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
	screen = SDL_SetVideoMode(640, 256, 32, SDL_HWSURFACE | SDL_DOUBLEBUF );
	/* Pour avoir le plein écran rajouter SDL_FULLSCREEN,
	pour supprimer les bordures (à terme ça sera plus esthétique SDL_NOFRAME
	*/

	if (screen == NULL) {
		// Si l'ouverture a échoué :
		printf("Impossible de charger le mode vidéo : %s\n", SDL_GetError());
		exit(EXIT_FAILURE);
	}

	
	// Création d'un fond dégradé
	SDL_Rect position;
	SDL_Surface *lines[256] = {NULL};
	int i = 0;
	for (i = 0 ; i <= 255 ; i++) {
		lines[i] = SDL_CreateRGBSurface(SDL_HWSURFACE, 640, 1, 32, 0, 0, 0, 0);
		position.x=0;
		position.y=i;
		SDL_FillRect(lines[i], NULL, SDL_MapRGB(screen->format, i, i, i));
		SDL_BlitSurface(lines[i], NULL, screen, &position);
	}

	Uint32 bleuVert = SDL_MapRGB(screen->format, 17, 206, 112); // Génération de la couleur "bleuVert"
	SDL_Flip(screen); // Mise à jour de l'écran avec la nouvelle couleur

	
	SDL_Surface *rectangle = NULL; // Création d'une deuxième variable pour une deuxième surface dans l'écran
	rectangle = SDL_CreateRGBSurface(SDL_HWSURFACE, 220, 180, 32, 0, 0, 0, 0); // Création de la deuxième surface
	SDL_FillRect(rectangle, NULL, bleuVert); // Coloration
	// Création de coordonnées où coller rectangle sur screen
	position.x = (640/8) - (220/8);
	position.y = (256/2) - (180/2);
	SDL_BlitSurface(rectangle, NULL, screen, &position); // Blittage des deux surfaces.
	 
	SDL_Flip(screen);
	pause(); // Manière de mettre en pause le programme pour voir la fenêtre


	SDL_FreeSurface(rectangle); // Libère l'espace alloué à la variable rectangle
	for (i = 0 ; i <= 255 ; i++) {
		SDL_FreeSurface(lines[i]);
	}
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

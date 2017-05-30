//Les fichiers d'entete
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "main.h"
#include "SDL/SDL.h"
#include "SDL/SDL_image.h"
#include "image.c"
#include "position.c"
#include "alloc.c"
#include "ajouter.c"
#include "IAsimple.c"
#include "structure.h"


int main() {
	//Les attributs de l'ecran (1056 * 594)
	const int SCREEN_WIDTH = 1056;
	const int SCREEN_HEIGHT = 594;
	const int SCREEN_BPP = 32;

	int run = 1;
	int gagner = 0;

	int clicx =0;
	int clicy =0;
	int posx = 0;
	int posy = 0;
	int modif =0;
	int p[120] = { 0 };
	int pile[120] = { 0 };

	//Les surfaces
	SDL_Surface *screen = NULL;
	SDL_Surface *plateau = NULL;
	SDL_Surface *background = NULL;
	// Les surfaces des différentes vues du menu
	SDL_Surface *colorMenu = NULL;
	SDL_Surface *orangeWins = NULL;
	SDL_Surface *startMenu = NULL;
	SDL_Surface *versusMenu = NULL;
	SDL_Surface *violetWins = NULL;
	
	//La structure d'evenement
	SDL_Event event;


	char* joueuractuel="rouge";
	int quit = 0;
	int ***pixel = alloc_data(121, 450, 2);
	tab(pixel);

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
	screen = SDL_SetVideoMode(SCREEN_WIDTH, SCREEN_HEIGHT, SCREEN_BPP, SDL_HWSURFACE | SDL_DOUBLEBUF | SDL_NOFRAME);
	// Pour supprimer les bordures (à terme ça sera plus esthétique SDL_NOFRAME)

	if (screen == NULL) {
		// Si l'ouverture a échoué :
		printf("Impossible de charger le mode vidéo : %s\n", SDL_GetError());
		exit(EXIT_FAILURE);
	}

	//on met en place la barre caption de la fenetre
	SDL_WM_SetCaption( "HEX, THE GAME", NULL );

	//Chargement des images
	plateau = load_image( "plateau.bmp" );
	background = load_image( "background.bmp" );
	colorMenu = IMG_Load( "menu/colorMenu.png" );
	orangeWins = IMG_Load( "menu/orangeWins.png" );
	startMenu = IMG_Load( "menu/startMenu.png" );
	versusMenu = IMG_Load( "menu/versusMenu.png" );
	violetWins = IMG_Load( "menu/violetWins.png" );
	
	// Placement de la surface startMenu
	SDL_Rect startMenuPosition;
	startMenuPosition.x = 3 * SCREEN_WIDTH / 4 - startMenu->w / 2;
	startMenuPosition.y = SCREEN_HEIGHT / 2 - startMenu->h / 2;

	// Création de la transparence sur le pourtour du plateau
	SDL_SetColorKey(plateau, SDL_SRCCOLORKEY, SDL_MapRGB(plateau->format, 0, 255, 0));

	//Application des surfaces sur l'ecran
	apply_surface( 0, 0, background, screen );

	SDL_BlitSurface(startMenu, NULL, screen, &startMenuPosition);
	
	SDL_Flip(screen); // Mise à jour de l'écran
	/*
	/////METTRE LE MENU ICI

	while (run) { // TANT QUE la variable ne vaut pas 0
        	SDL_WaitEvent(&event); // On attend un événement qu'on récupère dans event
        	switch(event.type) { // On teste le type d'événement
        		case SDL_QUIT:
            			run = 0;
            			break;

            		case SDL_KEYDOWN:
            			if (event.key.keysym.sym && SDLK_ESCAPE) { // Appui sur la touche Echap, on arrête le programme  
                    			run = 0;
            			}
            			break;
			case SDL_MOUSEBUTTONUP:
				if (event.button.x >= 3 * SCREEN_WIDTH / 4 - 60  && event.button.x <= 3 * SCREEN_WIDTH / 2 + 60 && event.button.y >= 3 * SCREEN_HEIGHT / 4 - 60 && event.button.y <= 3 * SCREEN_HEIGHT / 4) {
					run = 0;
				}
					break;
			
        	}
	}


  	 SDL_Quit();
	*/
	
	//Application des surfaces sur l'ecran
	apply_surface( 90, 90, plateau, screen );

	//mise à jour de l'ecran
	if( SDL_Flip( screen ) == -1 ) {
        return 1;
	}

//modif=IAS(p, pile, screen, joueuractuel); //IA
//SDL_Flip( screen ); //IA
//modif =0; //IA

while( quit == 0 ) {
	//Tant qu'il y a un événement à traiter 
	while( SDL_PollEvent( &event ) ) {
		switch(event.type) {

			//Si l'utilisateur clique
			case SDL_MOUSEBUTTONUP:
				clicx = event.button.x;
				clicy = event.button.y;
				if (joueuractuel = "bleu") {
					modif=ajouterpiece(fctpos(clicx,clicy, pixel), p, joueuractuel, screen, pile);
				}
				if (modif ==1) {
					joueuractuel = changeplayer(joueuractuel);
				}
				if( SDL_Flip( screen ) == -1 ) {
  					     return 1;
				}
				gagner=finPartie(joueuractuel, p);
				if (gagner==1) {
					printf("VICTOIRE");
				}
				SDL_Flip( screen );
				
				if (joueuractuel = "rouge") {
					if (modif == 1) {
						modif=IAS(p, pile, screen, joueuractuel);
					}
				}
				if (modif ==1) {
					joueuractuel = changeplayer(joueuractuel);
				}
				SDL_Flip( screen );
				gagner=finPartie(joueuractuel, p);
				if (gagner==1) {
					printf("VICTOIRE");
				}
				SDL_Flip( screen );
				modif=0;
				break;

				//Si l'utilisateur a cliqué sur le X de la fenêtre
				case SDL_QUIT:  
					quit = 1;
					break; 
			} 
		}
	}	
	
	//Liberation des surface
	SDL_FreeSurface( plateau );
	SDL_FreeSurface( background );
	SDL_FreeSurface( colorMenu );
	SDL_FreeSurface( orangeWins );
	SDL_FreeSurface( startMenu );
	SDL_FreeSurface( versusMenu );
	SDL_FreeSurface( violetWins );

	//On quitte sdl
	SDL_Quit();
	printf("Programme terminé correctement.\n");
	return EXIT_SUCCESS;
}

//Changement de joueur
char *changeplayer(char* joueuractuel) {
	if (strcmp(joueuractuel,"rouge")==0) {
		return ("bleu");
	}
	else {
		return("rouge");
	}
}

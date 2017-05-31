//Les fichiers d'entete
#include "all.h"

int main() {
	//Les attributs de l'ecran (1056 * 594)
	const int SCREEN_WIDTH = 1056;
	const int SCREEN_HEIGHT = 594;
	const int SCREEN_BPP = 32;

	int run1 = 1;
	int run2 = 1;
	int run3 = 1;

	int gagner = 0;

	premiercoup = 0;

int IA = 1; // A SUPPRIMER

	int clicx =0;
	int clicy =0;
	int modif =0;
	int p[120] = { 0 };
	int pile[120] = { 0 };

	//Les surfaces
	SDL_Surface *screen = NULL;
	SDL_Surface *plateau = NULL;
	SDL_Surface *background = NULL;
	SDL_Surface *menu = NULL;
	
	//La structure d'evenement
	SDL_Event event;


	char* joueuractuel="bleu";
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
	menu = SDL_LoadBMP( "menu/orangeWins.bmp" );
	
	// Placement de la surface menu
	SDL_Rect menuPosition;
	menuPosition.x = 3 * SCREEN_WIDTH / 4 - menu->w / 2;
	menuPosition.y = SCREEN_HEIGHT / 2 - menu->h / 2;

	// Création de la transparence sur le pourtour du plateau
	SDL_SetColorKey(plateau, SDL_SRCCOLORKEY, SDL_MapRGB(plateau->format, 0, 255, 0));

	//Application des surfaces sur l'ecran
	apply_surface( 0, 0, background, screen );

	SDL_BlitSurface(menu, NULL, screen, &menuPosition);
	
	SDL_Flip(screen); // Mise à jour de l'écran

	while (run1) { // TANT QUE run1 ne vaut pas 0
		run2 = 1;
        	SDL_WaitEvent(&event); // On attend un événement qu'on récupère dans event
        	switch(event.type) { // On teste le type d'événement
			case SDL_KEYDOWN:
				switch (event.key.keysym.sym) {
					case SDLK_ESCAPE: // Appui sur la touche Echap, on arrête le programme
						run1 = 0;
						break;
					default:
						run1 = 1;
				}
            			break;
			case SDL_MOUSEBUTTONUP:
				if (event.button.x >= 3 * SCREEN_WIDTH / 4 - 60  && event.button.x <= 3 * SCREEN_WIDTH / 2 + 60 && event.button.y >= 3 * SCREEN_HEIGHT / 4 - 40 && event.button.y <= 3 * SCREEN_HEIGHT / 4 + 40 ) { // Touche quitter
					run1 = 0;
				}
				else if (event.button.x >= 3 * SCREEN_WIDTH / 4 - 60  && event.button.x <= 3 * SCREEN_WIDTH / 2 + 60 && event.button.y >= SCREEN_HEIGHT / 4 - 60 && event.button.y <= SCREEN_HEIGHT / 4 + 30 ) { // Touche nouveau jeu
					menu = SDL_LoadBMP( "menu/orangeWins.bmp" );
					apply_surface( 0, 0, background, screen );
					SDL_BlitSurface(menu, NULL, screen, &menuPosition);
					SDL_Flip(screen); // Mise à jour de l'écran
					while (run1 && run2) { // TANT QUE run2 ne vaut pas 0
        					SDL_WaitEvent(&event); // On attend un événement qu'on récupère dans event
        					switch(event.type) { // On teste le type d'événement
            						case SDL_KEYDOWN:
								switch (event.key.keysym.sym) {
									case SDLK_ESCAPE: // Appui sur la touche Echap, on arrête le programme
									menu = SDL_LoadBMP( "menu/orangeWins.bmp" );
									apply_surface( 0, 0, background, screen );
									SDL_BlitSurface(menu, NULL, screen, &menuPosition);
									SDL_Flip(screen); // Mise à jour de l'écran
									run2 = 0;
									break;
								default:
									run1 = 1;
								}
            							break;
							case SDL_MOUSEBUTTONUP:
								if (event.button.x >= 3 * SCREEN_WIDTH / 4 - 60  && event.button.x <= 3 * SCREEN_WIDTH / 2 + 60 && event.button.y >= 3 * SCREEN_HEIGHT / 4 - 40 && event.button.y <= 3 * SCREEN_HEIGHT / 4 + 40 ) { // Touche quitter
									run1 = 0;
								}
								else if (event.button.x >= 3 * SCREEN_WIDTH / 4 - 60  && event.button.x <= 3 * SCREEN_WIDTH / 2 + 60 && event.button.y >= SCREEN_HEIGHT / 8 - 40 && event.button.y <= SCREEN_HEIGHT / 8 + 40 ) { // Touche 1VS1
									menu = SDL_LoadBMP( "menu/orangeWins.bmp" );
									apply_surface( 0, 0, background, screen );
									SDL_BlitSurface(menu, NULL, screen, &menuPosition);
									SDL_Flip(screen); // Mise à jour de l'écran
/* A RETRAVAILLER
									while (run3) { // Choix couleur
										SDL_WaitEvent(&event); // On attend un événement qu'on récupère dans event
        									switch(event.type) { // On teste le type d'événement
											case SDL_KEYDOWN:
												switch (event.key.keysym.sym) {
													case SDLK_ESCAPE: // Appui sur la touche Echap, on arrête le programme
														run1 = 0;
														break;
													default:
														run1 = 1;
												}
            											break;
											case SDL_MOUSEBUTTONUP:
*/
									// DEBUT JEU

								}
								else if (event.button.x >= 3 * SCREEN_WIDTH / 4 - 60  && event.button.x <= 3 * SCREEN_WIDTH / 2 + 60 && event.button.y >= 2 * SCREEN_HEIGHT / 8 - 40 && event.button.y <= 2 * SCREEN_HEIGHT / 8 + 40 ) { // Touche VS IA
									// LANCER LE JEU VS L'IA
					
								}
								else if (event.button.x >= 3 * SCREEN_WIDTH / 4 - 60  && event.button.x <= 3 * SCREEN_WIDTH / 2 + 60 && event.button.y >= 2 * SCREEN_HEIGHT / 4 - 40 && event.button.y <= 2 * SCREEN_HEIGHT / 4 + 40 ) { // Touche Back
									menu = SDL_LoadBMP( "menu/orangeWins.bmp" );
									apply_surface( 0, 0, background, screen );
									SDL_BlitSurface(menu, NULL, screen, &menuPosition);
									SDL_Flip(screen); // Mise à jour de l'écran
									run2 = 0;
					
								}

								break;
			
        					}
					}
				}
				break;
			
        	}
	}

	
	//Application des surfaces sur l'ecran
	apply_surface( 14, 100, plateau, screen );

	//mise à jour de l'ecran
	if( SDL_Flip( screen ) == -1 ) {
        	return 1;
	}


//modif=IAS(p, pile, screen, joueuractuel); //IA
//SDL_Flip( screen ); //IA
//modif =0; //IA

if (IA == 1) {
	while( quit == 0 ) {
		//Tant qu'il y a un événement à traiter 
		while( SDL_PollEvent( &event ) ) {
			switch(event.type) {
	
				//Si l'utilisateur clique
				case SDL_MOUSEBUTTONUP:
					clicx = event.button.x;
					clicy = event.button.y;
					if (strcmp(joueuractuel,"rouge")) {
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
					
					if (strcmp(joueuractuel, "bleu")) {
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
	}


if (IA == 0) { //1VS1
	while( quit == 0 ) {
		//Tant qu'il y a un événement à traiter 
		while( SDL_PollEvent( &event ) ) {
			switch(event.type) {
	
				//Si l'utilisateur clique
				case SDL_MOUSEBUTTONUP:
					clicx = event.button.x;
					clicy = event.button.y;
					modif=ajouterpiece(fctpos(clicx,clicy, pixel), p, joueuractuel, screen, pile);
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
	}

	
	//Liberation des surface
	SDL_FreeSurface( plateau );
	SDL_FreeSurface( background );
	SDL_FreeSurface( menu );

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

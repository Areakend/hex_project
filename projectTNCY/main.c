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
	int annuler = 0;
	int bugZ = 1;
	int temp = 0;

	int i;
	int clicx =0;
	int clicy =0;
	int modif =0;
	int p[121] = { 0 };
	int pile[121] = { 0 };
	
	//Les surfaces
	SDL_Surface *screen = NULL;
	SDL_Surface *menu = NULL;
	SDL_Surface *plateau = NULL;
	SDL_Surface *background = NULL;
	
	
	//La structure d'evenement
	SDL_Event event;


	char* joueuractuel;
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
	
	Mix_OpenAudio(44100, MIX_DEFAULT_FORMAT, MIX_DEFAULT_CHANNELS, 1024);
	Mix_AllocateChannels(32);
	Mix_Music* music = Mix_LoadMUS("mus1.mp3");
	Mix_PlayMusic(music, -1);

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
	menu = SDL_LoadBMP( "menu/startMenu.bmp" );

	// Création de la transparence sur le pourtour du plateau
	SDL_SetColorKey(plateau, SDL_SRCCOLORKEY, SDL_MapRGB(plateau->format, 0, 255, 0));

	//Application des surfaces sur l'ecran
	apply_surface( 0, 0, background, screen );

	// Placement de la surface menu
	SDL_Rect menuPosition;
	menuPosition.x = 528; // SCREEN_WDTH / 2
	menuPosition.y = 0;
	//menuPosition.x = 667; // 3 * SCREEN_WIDTH / 4 - menu->w / 2 = 3*1056/4-250/2 ==>792
	//menuPosition.y = 42; // SCREEN_HEIGHT / 2 - menu->h / 2 = 594/2 - 510/2 ==> 297 (250%)


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
					default:;
				}
            			break;
			case SDL_MOUSEBUTTONUP:
				if (event.button.x >= 3 * SCREEN_WIDTH / 4 - 60  && event.button.x <= 3 * SCREEN_WIDTH / 2 + 60 && event.button.y >= 3 * SCREEN_HEIGHT / 4 - 40 && event.button.y <= 3 * SCREEN_HEIGHT / 4 ) { // Touche quitter
					run1 = 0;
				}
				else if (event.button.x >= 3 * SCREEN_WIDTH / 4 - 60  && event.button.x <= 3 * SCREEN_WIDTH / 2 + 60 && event.button.y >= SCREEN_HEIGHT / 4 - 60 && event.button.y <= SCREEN_HEIGHT / 4 ) { // Touche nouveau jeu
					menu = SDL_LoadBMP( "menu/versusMenu.bmp" );
					SDL_BlitSurface(menu, NULL, screen, &menuPosition);
					SDL_Flip(screen); // Mise à jour de l'écran
					while (run1 && run2) { // TANT QUE run2 ne vaut pas 0
						run3 = 1;
        					SDL_WaitEvent(&event); // On attend un événement qu'on récupère dans event
        					switch(event.type) { // On teste le type d'événement
            						case SDL_KEYDOWN:
								switch (event.key.keysym.sym) {
									case SDLK_ESCAPE: // Appui sur la touche Echap, on fait un retour
									menu = SDL_LoadBMP( "menu/startMenu.bmp" );
									SDL_BlitSurface(menu, NULL, screen, &menuPosition);
									SDL_Flip(screen); // Mise à jour de l'écran
									run2 = 0;
									break;
								default:;
								}
            							break;
							case SDL_MOUSEBUTTONUP:
								if (event.button.x >= 3 * SCREEN_WIDTH / 4 - 60  && event.button.x <= 3 * SCREEN_WIDTH / 2 + 60 && event.button.y >= 3 * SCREEN_HEIGHT / 4 - 40 && event.button.y <= 3 * SCREEN_HEIGHT / 4 ) { // Touche quitter
									run1 = 0;
								}
								else if (event.button.x >= 3 * SCREEN_WIDTH / 4 - 60  && event.button.x <= 3 * SCREEN_WIDTH / 2 + 60 && event.button.y >= SCREEN_HEIGHT / 8 - 20 && event.button.y <= SCREEN_HEIGHT / 8 + 20 ) { // Touche 1VS1
									menu = SDL_LoadBMP( "menu/colorMenu.bmp" );
									SDL_BlitSurface(menu, NULL, screen, &menuPosition);
									SDL_Flip(screen); // Mise à jour de l'écran

									while (run1 && run2 && run3) { // Choix couleur
										SDL_WaitEvent(&event); // On attend un événement qu'on récupère dans event
        									switch(event.type) { // On teste le type d'événement
											case SDL_KEYDOWN:
												switch (event.key.keysym.sym) {
													case SDLK_ESCAPE: // Appui sur la touche Echap, on fait un retour
														menu = SDL_LoadBMP( "menu/startMenu.bmp" );
														SDL_BlitSurface(menu, NULL, screen, &menuPosition);
														SDL_Flip(screen); // Mise à jour de l'écran
														run2 = 0;
														break;
													default:;
												}
            											break;
											case SDL_MOUSEBUTTONUP:
												if (event.button.x >= 3 * SCREEN_WIDTH / 4 - 60  && event.button.x <= 3 * SCREEN_WIDTH / 2 + 60 && event.button.y >= 3 * SCREEN_HEIGHT / 4 - 40 && event.button.y <= 3 * SCREEN_HEIGHT / 4 ) { // Touche quitter
													run1 = 0;
												}
												else if (event.button.x >= 3 * SCREEN_WIDTH / 4 - 60  && event.button.x <= 3 * SCREEN_WIDTH / 2 + 60 && event.button.y >= 2 * SCREEN_HEIGHT / 4 - 10 && event.button.y <= 2 * SCREEN_HEIGHT / 4 + 40 ) { // Touche Back
													menu = SDL_LoadBMP( "menu/startMenu.bmp" );
													SDL_BlitSurface(menu, NULL, screen, &menuPosition);
													SDL_Flip(screen); // Mise à jour de l'écran
													run2 = 0;
												}
												else if (event.button.x >= 3 * SCREEN_WIDTH / 4 - 60  && event.button.x <= 3 * SCREEN_WIDTH / 2 + 60 && event.button.y >= 40 && event.button.y <= 100 ) { // Touche Violet
													premiercoup = 0;
													joueuractuel="bleu";
													for (i=0;i<121;i++) {
														p[i]=0;
														pile[i]=0;
													}
													//Application des surfaces sur l'ecran
													menu = SDL_LoadBMP( "menu/violetTurn.bmp" );
													apply_surface( 14, 100, plateau, screen );
													SDL_BlitSurface(menu, NULL, screen, &menuPosition);
													SDL_Flip(screen); // Mise à jour de l'écran
													// Partie jeu 
													while( run1 && run2 && run3 ) {
														SDL_WaitEvent( &event );
														switch(event.type) {
															case SDL_KEYDOWN:
																switch (event.key.keysym.sym) {
																	case SDLK_ESCAPE: // Appui sur la touche Echap, on fait un retour
																		menu = SDL_LoadBMP( "menu/versusMenu.bmp" );
																		SDL_BlitSurface(menu, NULL, screen, &menuPosition);
																		SDL_Flip(screen); // Mise à jour de l'écran
																		run3 = 0;
																		break;
// DEBUT NOUVELLES TOUCHES
																	case SDLK_BACKSPACE: // Appui sur delete, annuler le dernier mouvement
																		if (annuler && (premiercoup==1 || premiercoup > 2) ) {
																			modif = ajouterpiece(140, p, joueuractuel, screen, pile);
																			if (modif == 2) {
																				if (strcmp(joueuractuel,"rouge")==0) {
																					menu = SDL_LoadBMP( "menu/violetTurn.bmp" );
																					SDL_BlitSurface(menu, NULL, screen, &menuPosition);
																					joueuractuel="bleu";
																				}
																				else {
																					menu = SDL_LoadBMP( "menu/orangeTurn.bmp" );
																					SDL_BlitSurface(menu, NULL, screen, &menuPosition);
																					joueuractuel="rouge";
																				}
																				SDL_Flip(screen); // Mise à jour de l'écran
																				annuler=0;
																			}
																			modif = 0;
																			premiercoup--;
																		}
																		break;
																	case SDLK_SPACE: // Appui sur espace, règle du gâteau
																		if (premiercoup==1) {
																			//On cherche la premiere case
																			temp = pile[0];
																			//On l'annule
																			ajouterpiece(140, p, joueuractuel, screen, pile);
																			//On pose la case de l'autre couleur
																			ajouterpiece(temp, p, joueuractuel, screen, pile);
																			//Changement de joueur
																			//if (strcmp(joueuractuel,"rouge")==0) {
																				menu = SDL_LoadBMP( "menu/violetTurn.bmp" );
																				SDL_BlitSurface(menu, NULL, screen, &menuPosition);
																				joueuractuel="bleu";
																			/*}
																			else {
																				menu = SDL_LoadBMP( "menu/orangeTurn.bmp" );
																				SDL_BlitSurface(menu, NULL, screen, &menuPosition);
																				joueuractuel="rouge";
																			}*/
																			premiercoup++;
																		}
																		SDL_Flip(screen);
																		break;
																	// FIN NOUVELLES TOUCHES
																	default:;
																}
																break;
															//Si l'utilisateur clique
															case SDL_MOUSEBUTTONUP:
																clicx = event.button.x;
																clicy = event.button.y;
																modif=ajouterpiece(fctpos(clicx,clicy, pixel), p, joueuractuel, screen, pile);
																gagner=finPartie(joueuractuel, p);
																premiercoup++;
																if (gagner==1) {
																	if (strcmp(joueuractuel,"rouge") == 0) {
																		menu = SDL_LoadBMP( "menu/orangeWins.bmp" );
																		SDL_BlitSurface(menu, NULL, screen, &menuPosition);
																		SDL_Flip(screen); // Mise à jour de l'écran
																		printf("VICTOIRE \n");
																		run2 = 0;
																		gagner = 0;
																		break;
																	}
																	if (strcmp(joueuractuel,"bleu") == 0) {
																		menu = SDL_LoadBMP( "menu/violetWins.bmp" );
																		SDL_BlitSurface(menu, NULL, screen, &menuPosition);
																		SDL_Flip(screen); // Mise à jour de l'écran
																		printf("VICTOIRE \n");
																		run2 = 0;
																		gagner = 0;
																		break;
																	}
																}
																if (modif ==1) {
																	if (strcmp(joueuractuel,"rouge")==0) {
																		menu = SDL_LoadBMP( "menu/violetTurn.bmp" );
																		SDL_BlitSurface(menu, NULL, screen, &menuPosition);
																		joueuractuel="bleu";
																	}
																	else {
																		menu = SDL_LoadBMP( "menu/orangeTurn.bmp" );
																		SDL_BlitSurface(menu, NULL, screen, &menuPosition);
																		joueuractuel="rouge";
																	}
																	annuler=1;
																}
																else if ( clicx >= 3 * SCREEN_WIDTH / 4 - 60  && clicx <= 3 * SCREEN_WIDTH / 2 + 60 && clicy >= SCREEN_HEIGHT / 4 - 60 && clicy <= SCREEN_HEIGHT / 4 + 30  ) { //Touche nouvelle partie
																	menu = SDL_LoadBMP( "menu/versusMenu.bmp" );
																	SDL_BlitSurface(menu, NULL, screen, &menuPosition);
																	SDL_Flip(screen); // Mise à jour de l'écran
																	run3 = 0;
																	break;
																}
																else if (event.button.x >= 3 * SCREEN_WIDTH / 4 - 60  && event.button.x <= 3 * SCREEN_WIDTH / 2 + 60 && event.button.y >= 3 * SCREEN_HEIGHT / 4 - 40 && event.button.y <= 3 * SCREEN_HEIGHT / 4 ) { // Touche quitter
																	run1 = 0;
																}
																SDL_Flip( screen );
																modif=0;
																break;
														}
													}
												}
												else if (event.button.x >= 3 * SCREEN_WIDTH / 4 - 60  && event.button.x <= 3 * SCREEN_WIDTH / 2 + 60 && event.button.y >= 2 * SCREEN_HEIGHT / 8 - 15 && event.button.y <= 2 * SCREEN_HEIGHT / 8 + 30 ) { // Touche Orange
													premiercoup = 1;
													joueuractuel="rouge";
													for (i=0;i<121;i++) {
														p[i]=0;
													}
													//Application des surfaces sur l'ecran
													menu = SDL_LoadBMP( "menu/orangeTurn.bmp" );
													apply_surface( 14, 100, plateau, screen );
													SDL_BlitSurface(menu, NULL, screen, &menuPosition);
													SDL_Flip(screen); // Mise à jour de l'écran
													// Partie jeu 
													while( run1 && run2 && run3 ) {
														SDL_WaitEvent( &event );
														switch(event.type) {
															case SDL_KEYDOWN:
																switch (event.key.keysym.sym) {
																	case SDLK_ESCAPE: // Appui sur la touche Echap, on fait un retour
																		menu = SDL_LoadBMP( "menu/versusMenu.bmp" );
																		SDL_BlitSurface(menu, NULL, screen, &menuPosition);
																		SDL_Flip(screen); // Mise à jour de l'écran
																		run3 = 0;
																		break;
																	default:;
																}
																break;
															//Si l'utilisateur clique
															case SDL_MOUSEBUTTONUP:
																clicx = event.button.x;
																clicy = event.button.y;
																modif=ajouterpiece(fctpos(clicx,clicy, pixel), p, joueuractuel, screen, pile);
																gagner=finPartie(joueuractuel, p);
																if (gagner==1) {
																	if (strcmp(joueuractuel,"rouge") == 0) {
																		menu = SDL_LoadBMP( "menu/orangeWins.bmp" );
																		SDL_BlitSurface(menu, NULL, screen, &menuPosition);
																		SDL_Flip(screen); // Mise à jour de l'écran
																		printf("VICTOIRE \n");
																		run2 = 0;
																		gagner = 0;
																		break;
																	}
																	if (strcmp(joueuractuel,"bleu") == 0) {
																		menu = SDL_LoadBMP( "menu/violetWins.bmp" );
																		SDL_BlitSurface(menu, NULL, screen, &menuPosition);
																		SDL_Flip(screen); // Mise à jour de l'écran
																		printf("VICTOIRE \n");
																		run2 = 0;
																		gagner = 0;
																		break;
																	}
																}
																if (modif ==1) {
																	if (strcmp(joueuractuel,"rouge")==0) {
																		menu = SDL_LoadBMP( "menu/violetTurn.bmp" );
																		SDL_BlitSurface(menu, NULL, screen, &menuPosition);
																		joueuractuel="bleu";
																	}
																	else {
																		menu = SDL_LoadBMP( "menu/orangeTurn.bmp" );
																		SDL_BlitSurface(menu, NULL, screen, &menuPosition);
																		joueuractuel="rouge";
																	}
																	annuler=1;
																}
																else if ( clicx >= 3 * SCREEN_WIDTH / 4 - 60  && clicx <= 3 * SCREEN_WIDTH / 2 + 60 && clicy >= SCREEN_HEIGHT / 4 - 60 && clicy <= SCREEN_HEIGHT / 4 + 30  ) { //Touche nouvelle partie
																	menu = SDL_LoadBMP( "menu/versusMenu.bmp" );
																	SDL_BlitSurface(menu, NULL, screen, &menuPosition);
																	SDL_Flip(screen); // Mise à jour de l'écran
																	run3 = 0;
																	break;
																}
																else if (event.button.x >= 3 * SCREEN_WIDTH / 4 - 60  && event.button.x <= 3 * SCREEN_WIDTH / 2 + 60 && event.button.y >= 3 * SCREEN_HEIGHT / 4 - 40 && event.button.y <= 3 * SCREEN_HEIGHT / 4 ) { // Touche quitter
																	run1 = 0;
																}
																SDL_Flip( screen );
																modif=0;
																break;
														}
													}

												}
												break;
										}
									}


								}
								else if (event.button.x >= 3 * SCREEN_WIDTH / 4 - 60  && event.button.x <= 3 * SCREEN_WIDTH / 2 + 60 && event.button.y >= 2 * SCREEN_HEIGHT / 8 - 15 && event.button.y <= 2 * SCREEN_HEIGHT / 8 + 30 ) { // Touche VS IA
									premiercoup = 1;									
									joueuractuel="bleu";
									for (i=0;i<121;i++) {
										p[i]=0;
									}
									//Application des surfaces sur l'ecran
									menu = SDL_LoadBMP( "menu/violetTurn.bmp" );
									apply_surface( 14, 100, plateau, screen );
									SDL_BlitSurface(menu, NULL, screen, &menuPosition);
									SDL_Flip(screen); // Mise à jour de l'écran
									//Tant qu'il y a un événement à traiter 
									while( run1 && run2 && run3 ) {
										SDL_WaitEvent( &event );
										switch(event.type) {
											case SDL_KEYDOWN:
												switch (event.key.keysym.sym) {
													case SDLK_ESCAPE: // Appui sur la touche Echap, on fait un retour
														menu = SDL_LoadBMP( "menu/VersusMenu.bmp" );
														SDL_BlitSurface(menu, NULL, screen, &menuPosition);
														SDL_Flip(screen); // Mise à jour de l'écran
														run3 = 0;
														break;
													default:;
												}
												break;
											//Si l'utilisateur clique
											case SDL_MOUSEBUTTONUP:
												clicx = event.button.x;
												clicy = event.button.y;
												modif=ajouterpiece(fctpos(clicx,clicy, pixel), p, joueuractuel, screen, pile);
												gagner=finPartie(joueuractuel, p);
												if (gagner==1) {
													if (strcmp(joueuractuel,"rouge") == 0) {
														menu = SDL_LoadBMP( "menu/orangeWins.bmp" );
														SDL_BlitSurface(menu, NULL, screen, &menuPosition);
														SDL_Flip(screen); // Mise à jour de l'écran
														printf("VICTOIRE \n");
														run2 = 0;
														gagner = 0;
														break;
													}
													if (strcmp(joueuractuel,"bleu") == 0) {
														menu = SDL_LoadBMP( "menu/violetWins.bmp" );
														SDL_BlitSurface(menu, NULL, screen, &menuPosition);
														SDL_Flip(screen); // Mise à jour de l'écran
														printf("VICTOIRE \n");
														run2 = 0;
														gagner = 0;
														break;
													}
												}

												if (modif ==1) {
													if (strcmp(joueuractuel,"rouge")==0) {
														menu = SDL_LoadBMP( "menu/violetTurn.bmp" );
														SDL_BlitSurface(menu, NULL, screen, &menuPosition);
														joueuractuel="bleu";
													}
													else {
														menu = SDL_LoadBMP( "menu/orangeTurn.bmp" );
														SDL_BlitSurface(menu, NULL, screen, &menuPosition);
														joueuractuel="rouge";
													}
												}
												else if ( clicx >= 3 * SCREEN_WIDTH / 4 - 60  && clicx <= 3 * SCREEN_WIDTH / 2 + 60 && clicy >= SCREEN_HEIGHT / 4 - 60 && clicy <= SCREEN_HEIGHT / 4 + 30  ) { //Touche nouvelle partie
													menu = SDL_LoadBMP( "menu/versusMenu.bmp" );
													SDL_BlitSurface(menu, NULL, screen, &menuPosition);
													SDL_Flip(screen); // Mise à jour de l'écran
													run3 = 0;
													break;
												}
												else if (event.button.x >= 3 * SCREEN_WIDTH / 4 - 60  && event.button.x <= 3 * SCREEN_WIDTH / 2 + 60 && event.button.y >= 3 * SCREEN_HEIGHT / 4 - 40 && event.button.y <= 3 * SCREEN_HEIGHT / 4 ) { // Touche quitter
													run1 = 0;
												}
												if (strcmp(joueuractuel, "bleu")) {
													if (modif == 1) {
														modif=IAS(p, pile, screen, joueuractuel);
													}
												}
												gagner=finPartie(joueuractuel, p);
												if (gagner==1 && bugZ==0) {
													if (strcmp(joueuractuel,"rouge") == 0) {
														menu = SDL_LoadBMP( "menu/orangeWins.bmp" );
														SDL_BlitSurface(menu, NULL, screen, &menuPosition);
														SDL_Flip(screen); // Mise à jour de l'écran
														printf("VICTOIRE \n");
														run3 = 0;
														gagner = 0;
														break;
													}
													if (strcmp(joueuractuel,"bleu") == 0) {
														menu = SDL_LoadBMP( "menu/violetWins.bmp" );
														SDL_BlitSurface(menu, NULL, screen, &menuPosition);
														SDL_Flip(screen); // Mise à jour de l'écran
														printf("VICTOIRE \n");
														run3 = 0;
														gagner = 0;
														break;
													}
												}
												if (modif ==1) {
													if (strcmp(joueuractuel,"rouge")==0) {
														menu = SDL_LoadBMP( "menu/violetTurn.bmp" );
														SDL_BlitSurface(menu, NULL, screen, &menuPosition);
														joueuractuel="bleu";
														bugZ=0;
													}
													else {
														menu = SDL_LoadBMP( "menu/orangeTurn.bmp" );
														SDL_BlitSurface(menu, NULL, screen, &menuPosition);
														joueuractuel="rouge";
														bugZ=0;
													}
												}

												SDL_Flip( screen );
												modif=0;
												break;
										}
									}
								}

								else if (event.button.x >= 3 * SCREEN_WIDTH / 4 - 60  && event.button.x <= 3 * SCREEN_WIDTH / 2 + 60 && event.button.y >= 2 * SCREEN_HEIGHT / 4 - 10 && event.button.y <= 2 * SCREEN_HEIGHT / 4 + 40 ) { // Touche Back
									menu = SDL_LoadBMP( "menu/startMenu.bmp" );
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


	//Liberation des surface
	SDL_FreeSurface( plateau );
	SDL_FreeSurface( background );
	SDL_FreeSurface( menu );
	free_data(pixel, 121, 450);
	free_cases();

	//On quitte sdl
	SDL_Quit();
	printf("Programme terminé correctement.\n");
	return EXIT_SUCCESS;
}

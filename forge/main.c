//Les fichiers d'entete
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "SDL/SDL.h"
#include "image.c"
#include "position.c"
#include "alloc.c"
#include "ajouter.c"
#include "IAsimple.c"

//25*29
//Les attributs de l'ecran (640 * 480)
const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;
const int SCREEN_BPP = 32;

int clicx =0;
int clicy =0;
int posx = 0;
int posy = 0;
int modif =0;
int p[120] = { 0 };
int pile[120] = { 0 };

//Les surfaces
SDL_Surface *plateau = NULL;
SDL_Surface *background = NULL;
SDL_Surface *screen = NULL;


//La structure d'evenement
SDL_Event event;

//Changement de joueur
char *changeplayer(char* joueuractuel) {
	if (strcmp(joueuractuel,"rouge")==0) {
		return ("bleu");
	}
	else {
		return("rouge");
	}
}

//int main( int argc, char* args[] ) {
int main() {
char* joueuractuel="rouge";
int quit = 0;
int ***pixel = alloc_data(121, 450, 2);
tab(pixel);
//pixel[120][430][1]=10;
//printf("pixel num : %d", pixel[120][430][1]);
//[121][432][2];

//initialisation de tout les sous-systemes de sdl
if( SDL_Init( SDL_INIT_EVERYTHING ) == -1 ) {
    return 1;
}

//on met en place l'ecran
screen = SDL_SetVideoMode( SCREEN_WIDTH, SCREEN_HEIGHT, SCREEN_BPP, SDL_SWSURFACE );

//Si il y a une erreur lors de la mise en place de l'ecran
if( screen == NULL ) {
    return 1;
}

//on met en place la barre caption de la fenetre
SDL_WM_SetCaption( "HEX, THE GAME", NULL );

//Chargement des images
plateau = load_image( "plateau.bmp" );
background = load_image( "background.bmp" );

// Création de la transparence sur le pourtour du plateau
SDL_SetColorKey(plateau, SDL_SRCCOLORKEY, SDL_MapRGB(plateau->format, 0, 255, 0));

//Application des surfaces sur l'ecran
apply_surface( 0, 0, background, screen );

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
	
				if (joueuractuel = "rouge") {
					if (modif==1) {
						modif=IAS(p, pile, screen, joueuractuel);
					}
				}
				if (modif ==1) {
					joueuractuel = changeplayer(joueuractuel);
				}
				SDL_Flip( screen );
				modif=0;
				break;


			case SDL_QUIT:  
				quit = 1;
				break; 
		} 
	}
}
//Liberation des surface
SDL_FreeSurface( plateau );
SDL_FreeSurface( background );

//free_data(pixel, 121, 432);
//On quitte sdl
SDL_Quit();
return 0;
}

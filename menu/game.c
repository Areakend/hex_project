//Les fichiers d'entete
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "SDL/SDL.h"
#include "image.c"
#include "position.c"
#include "alloc.c"
#include "ajouter.c"

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

//Application des surfaces sur l'ecran
apply_surface( 0, 0, background, screen );

//Application du message sur l'ecran
apply_surface( 90, 90, plateau, screen );

//mise à jour de l'ecran
if( SDL_Flip( screen ) == -1 ) {
        return 1;
}

while( quit == 0 ) {
	//Tant qu'il y a un événement à traiter 
	while( SDL_PollEvent( &event ) ) {
		switch(event.type) {
			//Si l'utilisateur clique
			case SDL_MOUSEBUTTONUP:
				clicx = event.button.x;
				clicy = event.button.y;
				//ajouterpiece(fctpos(clix,clicy), p);
				//printf("pos : (%d,%d) !!", clicx, clicy);
				//printf("fct pos : case (%d,%d) :) ", pixel[0][0][0], pixel[0][0][1]);
				//printf("fct pos : case (%d,%d) :) ", pixel[11][0][0], pixel[11][0][1]);
				//printf("fct pos : case %d :) ", fctpos(clicx,clicy, pixel));
				//case0 = load_image("rouge.bmp"); 
				//apply_surface(90+49+(t%11)*26+(t/11)*13,90+57+(t/11)*19,case0,screen);
				addcase(fctpos(clicx,clicy, pixel), screen, joueuractuel);
				joueuractuel = changeplayer(joueuractuel);
				if( SDL_Flip( screen ) == -1 ) {
  				      return 1;
				}
//SDL_Flip(screen);
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

//free_data(pixel, 121, 432);
//On quitte sdl
SDL_Quit();
}
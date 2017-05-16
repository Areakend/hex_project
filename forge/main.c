//Les fichiers d'entete
#include <stdlib.h>
#include <stdio.h>
#include "SDL/SDL.h"
#include "image.c"

//25*29
//Les attributs de l'ecran (640 * 480)
const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;
const int SCREEN_BPP = 32;

int clicx =0;
int clicy =0;
const int t=120;
int posx = 0;
int posy = 0;



//Les surfaces
SDL_Surface *plateau = NULL;
SDL_Surface *background = NULL;
SDL_Surface *screen = NULL;
SDL_Surface *case0 =NULL;

//La structure d'evenement
SDL_Event event;

int main( int argc, char* args[] ) {

int quit = 0;

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

//Application des surfaces sur l'ecran
apply_surface( 0, 0, background, screen );

//Application du message sur l'ecran
apply_surface( 90, 90, plateau, screen );

//mise à jour de l'ecran
if( SDL_Flip( screen ) == -1 ) {
        return 1;
}
//71.49
while( quit == 0 ) {
	//Tant qu'il y a un événement à traiter 
	while( SDL_PollEvent( &event ) ) {
		switch(event.type) {
			//Si l'utilisateur clique
			case SDL_MOUSEBUTTONUP:
				//clicx = event.button.x;
				//clicy = event.button.y;
				//ajouterpiece(fonctionpos(clix,clicy), p);
				//printf("pos : (%d,%d) !!", clicx, clicy);
				case0 = load_image("rouge.bmp"); 
				apply_surface(90+49+(t%11)*26+(t/11)*13,90+57+(t/11)*19,case0,screen);
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

//On quitte sdl
SDL_Quit();
}

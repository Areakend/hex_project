//Les fichiers d'entete
#include <stdlib.h>
#include <stdio.h>
#include "SDL/SDL.h"
#include "image.c"

//Les attributs de l'ecran (640 * 480)
const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;
const int SCREEN_BPP = 32;

//Les surfaces
SDL_Surface *message = NULL;
SDL_Surface *background = NULL;
SDL_Surface *screen = NULL;

//La structure d'evenement
SDL_Event event;

int main( int argc, char* args[] ) {


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
    SDL_WM_SetCaption( "Hello World", NULL );

    //Chargement des images
    message = load_image( "hello_world.bmp" );
    background = load_image( "background.bmp" );

    //Application des surfaces sur l'ecran
    apply_surface( 0, 0, background, screen );

    //Application du message sur l'ecran
    apply_surface( 180, 140, message, screen );

    //mise à jour de l'ecran
    if( SDL_Flip( screen ) == -1 ) {
        return 1;
    }

    SDL_Delay( 2000 );

    //Liberation des surface
    SDL_FreeSurface( message );
    SDL_FreeSurface( background );

    //On quitte sdl
    SDL_Quit();
}

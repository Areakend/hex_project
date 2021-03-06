#include "all.h"

SDL_Surface *load_image( char* filename ) {
    //L'image qui est chargée
    SDL_Surface* loadedImage = NULL;

    //L'image optimisée que nous utiliserons par la suite
    SDL_Surface* optimizedImage = NULL;

    //Chargement de l'image
    loadedImage = SDL_LoadBMP( filename );

    // Création de la transparence sur l'image
    SDL_SetColorKey(loadedImage, SDL_SRCCOLORKEY, SDL_MapRGB(loadedImage->format, 0, 255, 0));

    //Si l'image est chargée correctement
    if( loadedImage != NULL ) {
        //creation de l'image optimisée
        optimizedImage = SDL_DisplayFormat( loadedImage );

        //liberation de l'ancienne image
        SDL_FreeSurface( loadedImage );
    }
    //on retourne l'image optimisé
    return optimizedImage;
}


void apply_surface( int x, int y, SDL_Surface* source, SDL_Surface* destination ) {

    SDL_Rect offset;

    offset.x = x;
    offset.y = y;

    //on blit la surface
    SDL_BlitSurface( source, NULL, destination, &offset );
}

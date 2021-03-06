#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <SDL/SDL.h>
#include <SDL/SDL_mixer.h>

#ifndef ALL_H
#define ALL_H

// variable globale
int premiercoup;

// structures
typedef struct{
  char* val;
} Case;
typedef struct {
  Case** cases;
} Plateau;


// main.c
int main();

// ajouter.c
int addcase(int pos, SDL_Surface *screen, char* joueuractuel);
void free_cases();

// alloc.c
void free_data(int ***data, size_t xlen, size_t ylen);
int ***alloc_data(size_t xlen, size_t ylen, size_t zlen);

// position.c
int egg (int* p);

// IAsimple.c
int IAS(int *p, int *pile, SDL_Surface *screen, char* joueuractuel);

// image.c
SDL_Surface *load_image( char* filename );
void apply_surface( int x, int y, SDL_Surface* source, SDL_Surface* destination );

// position.c
void tab (int ***pixel);
int fctpos(int clicx, int clicy, int ***pixel);

// structure.c
int ajouterpiece(int a,int *p,char* j, SDL_Surface *screen, int *pile);
int finPartie(char *joueuractuel, int p[121]);
void parcours(int j, int p[121], int a[121], int b);
Case *newCase();
Plateau *newPlateau();
int ajouterpiece();
void recRouge();
void recBleu();
int finPartie();
int regledugateau();

#endif

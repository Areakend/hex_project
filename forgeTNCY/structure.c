#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "SDL/SDL.h"


const int t=11;

int ajouterpiece(int a,int *p,char* j, SDL_Surface *screen) { // ON REND 1 SI LE COUP A PU ETRE JOUE, 0 SINON, a doit etre compris entre 0 et 120
  int modif = 0;
  if (j=="rouge") {
    if (p[a-1]==0) {
	modif=addcase(a, screen, j);
	p[a-1]=1;
    }
  }

  if (j=="bleu") {
    if (p[a-1]==0) {
	modif=addcase(a, screen, j);
	p[a-1]=-1;
    }
  }

  return modif;
};



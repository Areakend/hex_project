#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "SDL/SDL.h"
#include "structure.c"
#include "IAsimple.h"

int IAS(int *p, int *pile, SDL_Surface *screen, char* joueuractuel) {
	int last_case = 0;
	int recherche = 0;
	int modif = 0;
	while (pile[recherche]!=0) {
		recherche++;
	}
	last_case = pile[recherche-1];
	if (recherche == 0) {
		modif=ajouterpiece(110, p, joueuractuel, screen, pile);
	}
	if (last_case == 120) {
		modif = ajouterpiece(last_case-11, p, joueuractuel, screen, pile);
	}

	if (modif == 0) {
		modif = ajouterpiece(last_case+11, p, joueuractuel, screen, pile);
	}

	if (modif == 0) {
		modif = ajouterpiece(last_case+10, p, joueuractuel, screen, pile);
	}
	if (modif == 0) {
		modif = ajouterpiece(last_case-10, p, joueuractuel, screen, pile);
	}
	if (modif == 0) {
		modif = ajouterpiece(last_case+1, p, joueuractuel, screen, pile);
	}
	if (modif == 0) {
		modif = ajouterpiece(last_case-1, p, joueuractuel, screen, pile);
	}
	if (modif == 0) {
		modif = ajouterpiece(last_case-11, p, joueuractuel, screen, pile);
	}

return modif;
}

#include "all.h"

int IAS(int *p, int *pile, SDL_Surface *screen, char* joueuractuel) {
	int last_case = 0;
	int recherche = 0;
	int modif = 0;
	int chance = 0;
	int i;
	int gagne=0;
	for (i=0; i<121;i++) {
		gagne=0;
		if (strcmp(joueuractuel,"bleu") ) {
			if (p[i]==0) {
				p[i]=1;
				gagne=finPartie(joueuractuel,p);
				p[i]=0;
				if (gagne==1) {
					modif=ajouterpiece(i,p,joueuractuel,screen,pile);
					break;
				}
			}
		} else {
			if (p[i]==0) {
				p[i]=-1;
				gagne=finPartie(joueuractuel,p);
				p[i]=0;
				if (finPartie(joueuractuel,p)==1) {
					modif=ajouterpiece(i,p,joueuractuel,screen,pile);
					break;
				}
			}
		}
	}
	while (pile[recherche]!=0) {
		recherche++;
	}
	last_case = pile[recherche-1];

	if (recherche == 0) {
		modif=ajouterpiece(110, p, joueuractuel, screen, pile);
	}

	if (last_case == -1) {
		modif = ajouterpiece(11, p, joueuractuel, screen, pile);
	}

	if (last_case == -1) {
	if (modif == 0) {
			if (p[11] != 0) {
				modif = ajouterpiece(1, p, joueuractuel, screen, pile);
			}
		}
	}

	if (last_case == 120) {
		modif = ajouterpiece(last_case-11, p, joueuractuel, screen, pile);
	}
	if (last_case == 110) {
		modif = ajouterpiece(last_case-11, p, joueuractuel, screen, pile);
	}
	if (modif == 0) {
		if (p[last_case + 2] == -1) {
			if (pile[recherche - 3]>last_case) {
				modif = ajouterpiece(last_case-11, p, joueuractuel, screen, pile);
			}
		}
	}

	if (modif == 0) {
		if (p[last_case + 2] == -1) {								//ICI
			if (pile[recherche - 3]<last_case) {
				modif = ajouterpiece(last_case+11, p, joueuractuel, screen, pile);
			}
		}
	}

	if (modif == 0) {
		if (p[last_case - 10 ] == -1) {
			if (p[last_case + 11] == -1) {
				modif = ajouterpiece(last_case+21, p, joueuractuel, screen, pile);
			}
		}
	}

	if (modif == 0) {
		if (p[last_case - 12 ] == -1) {
			modif = ajouterpiece(last_case-11, p, joueuractuel, screen, pile);
		}
	}

	if (modif == 0) {
		if (p[last_case - 10 ] == -1) {
			if (p[last_case - 20] == -1) {
				if (last_case > pile[recherche-3]) {
					modif = ajouterpiece(last_case+21, p, joueuractuel, screen, pile);
				}
			}
		}
	}
	if (modif == 0) {
		if (p[last_case - 9 ] == -1) {
			modif = ajouterpiece(last_case-10, p, joueuractuel, screen, pile);		//la
		}
	}
	if (modif == 0) {	
		if (p[last_case + 10] == -1) {
			if (last_case >10) {
				modif = ajouterpiece(last_case-10, p, joueuractuel, screen, pile);		//en haut gauche si monté
			}
		}
	}
	if (modif == 0) {
		if (p[last_case] == -1) {								// CD gnl
			modif = ajouterpiece(last_case+11, p, joueuractuel, screen, pile);
		}
	}
	if (modif == 0) {
		if (p[last_case + 11 ] == -1) {
			if (p[last_case + 21] == -1) {
				if (last_case < pile[recherche-2]) {
					modif = ajouterpiece(last_case-21, p, joueuractuel, screen, pile);
				}
			}
		}
	}



	if (modif == 0) {
		if (p[last_case + 11] == -1) {
			if (last_case > 10) {
				modif = ajouterpiece(last_case-11, p, joueuractuel, screen, pile);
			}
		}
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
	if (modif == 0) {
		while ( modif == 0) {
			chance=rand()%120+1;
			modif = ajouterpiece(chance, p, joueuractuel, screen, pile);			
		}
	}
return modif;
}

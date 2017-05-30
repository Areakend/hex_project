#ifndef STRUCTURE_H
#define STRUCTURE_H

int ajouterpiece(int a,int *p,char* j, SDL_Surface *screen, int *pile);
int finPartie(char *joueuractuel, int p[121]);
void recRouge(int a[120],int b,int p[120]);
void recBleu(int a[120],int b,int p[120]);

typedef struct{
  char* val;
} Case;

typedef struct {
  Case** cases;
} Plateau;


Case *newCase();
Plateau *newPlateau();
int ajouterpiece();
void recRouge();
void recBleu();
int finPartie();
int regledugateau();

#endif

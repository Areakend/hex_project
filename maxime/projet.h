#ifndef PROJET_H
#define PROJET_H

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

#endif // projet.h
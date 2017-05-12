#define Val joueuractuel="rouge"
typedef struct {
  Case[121] cases;
} Plateau

enum option Val {"rouge","bleu","vide"}
typedef struct{
  Val val;
} Case

Case *newCase() {
  Case *a=NULL (Case *) Malloc sizeof(Case *);
  a->val="vide";
    return a;
}

Plateau *newPlateau() {
  Plateau *plat = NULL (Plateau*) Malloc sizeof(Plateau *);
  for (i=0;i<121;i++) {
    (plat->cases)[i]=newCase();
  }
  return plat;
}

int ajouterpiece(int a,Plateau *p) { // ON REND 1 SI LE COUP A PU ETRE JOUE, 0 SINON, a doit etre compris entre 0 et 120
  int res=0;
  if (p->cases)[a]->val=="vide") {
  (p->cases)[a]->val=joueuractuel;
  //addcase(a)
  res=1;
  }

  if (res==1) {
    if (joueuractuel=="rouge") {
      joueuractuel="bleu";
    } else {
      joueuractuel="rouge";
    }
  }
  return res;
}


int finPartie() { // retourne 1 si la partie est finie, 0 sinon
  if (joueuractuel=="rouge") {
  }

}

int regledugateau () {

}

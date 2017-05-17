#include "projet.h"
#include <stdio.h>

const int t=11;

Case *newCase() {
  Case *a= malloc(sizeof(Case));
  a->val="vide";
    return a;
};

Plateau *newPlateau() {
  Plateau *plat = malloc(sizeof(Plateau));
  plat->cases= malloc(121*sizeof(Case*));
  int i;
  for (i=0;i<121;i++) {
    (plat->cases)[i]=newCase();
  }
  return plat;
};

int ajouterpiece(int a,Plateau *p,char* j) { // ON REND 1 SI LE COUP A PU ETRE JOUE, 0 SINON, a doit etre compris entre 0 et 120
  int res=0;
  if (j=="rouge") {
    if ((p->cases)[a]->val=="vide") {
  (p->cases)[a]->val=j;
  //addcase(a)
  res=1;
  }
} else if (j=="bleu") {
    if ((p->cases)[a]->val=="vide") {
  (p->cases)[a]->val=j;
  //addcase(a)
  res=1;
  }
  } else { }

  return res;
};

void recRouge(int *a,int b, Plateau *p) {
if ((p->cases)[b]->val=="rouge") { // on ne regarde pas les cases qui ne sont pas pour le bon joueur
  if (a[b]==1) { // la case a déjà été verifiée, donc on arrete.
  } else {
   if (b/t==0) { // division entiere, on est sur la premiere ligne
      if (b==0) { // case tout à gauche
      	 if ((p->cases)[1]->val=="rouge") {
	    a[1]=1;
	    recRouge(a,1,p);
	    }
	 else if ((p->cases)[t]->val=="rouge") {
	    a[t]=1;
	    recRouge(a,t,p);
	  }else if ((p->cases)[t+1]->val=="rouge") {
	    a[t+1]=1;
	    recRouge(a,t+1,p);
	  } else {}
	}else if (b==t-1) {
	if ((p->cases)[t-2]->val=="rouge") {
	   a[t-2]=1;
	   recRouge(a,t-2,p);
	} else if ((p->cases)[2*t-2]->val=="rouge") {
	   a[2*t-2]=1;
	   recRouge(a,2*t-2,p);
	} else if ((p->cases)[2*t-1]->val=="rouge") {
	   a[2*t-1]=1;
	   recRouge(a,2*t-1,p);
	} else {}
	}else {
	 if ((p->cases)[b-1]->val=="rouge") {
	   a[b-1]=1;
	   recRouge(a,b-1,p);
	} else if ((p->cases)[b+1]->val=="rouge") {
	   a[b+1]=1;
	   recRouge(a,b+1,p);
	} else if ((p->cases)[b-1+t]->val=="rouge") {
	   a[b-1+t]=1;
	   recRouge(a,b-1+t,p);
	} else if ((p->cases)[b+t]->val=="rouge") {
	   a[b+t]=1;
	   recRouge(a,b+t,p);
	} else if ((p->cases)[b+t+1]->val=="rouge") {
	   a[b+t+1]=1;
	   recRouge(a,b+t+1,p);
	} else {}
}
} else if (b/t==t-1) {
      if (b==t*(t-1)) { // case tout à gauche
      	 if ((p->cases)[b-t]->val=="rouge") {
	    a[b-t]=1;
	    recRouge(a,b-t,p);
	    }
	 else if ((p->cases)[b-t+1]->val=="rouge") {
	    a[b-t+1]=1;
	    recRouge(a,b-t+1,p);
	  }else if ((p->cases)[b+1]->val=="rouge") {
	    a[b+1]=1;
	    recRouge(a,b+1,p);
	  } else {}
	}else if (b==t*t-1) {
	if ((p->cases)[b-t]->val=="rouge") {
	   a[b-t]=1;
	   recRouge(a,b-t,p);
	} else if ((p->cases)[b-t-1]->val=="rouge") {
	   a[b-t-1]=1;
	   recRouge(a,b-t-1,p);
	} else if ((p->cases)[b-1]->val=="rouge") {
	   a[b-1]=1;
	   recRouge(a,b-1,p);
	} else {}
	}else {
	 if ((p->cases)[b-1]->val=="rouge") {
	   a[b-1]=1;
	   recRouge(a,b-1,p);
	} else if ((p->cases)[b+1]->val=="rouge") {
	   a[b+1]=1;
	   recRouge(a,b+1,p);
	} else if ((p->cases)[b-1-t]->val=="rouge") {
	   a[b-1-t]=1;
	   recRouge(a,b-1-t,p);
	} else if ((p->cases)[b-t]->val=="rouge") {
	   a[b-t]=1;
	   recRouge(a,b-t,p);
	} else if ((p->cases)[b-t+1]->val=="rouge") {
	   a[b-t+1]=1;
	   recRouge(a,b-t+1,p);
	} else {}
}} else {
	if (b%t==0) {
	 if ((p->cases)[b-t]->val=="rouge") {
	   a[b-t]=1;
	   recRouge(a,b-t,p);
	} else if ((p->cases)[b+t]->val=="rouge") {
	   a[b+t]=1;
	   recRouge(a,b+t,p);
	} else if ((p->cases)[b+1-t]->val=="rouge") {
	   a[b+1-t]=1;
	   recRouge(a,b+1-t,p);
	} else if ((p->cases)[b+1]->val=="rouge") {
	   a[b+1]=1;
	   recRouge(a,b+1,p);
	} else if ((p->cases)[b+t+1]->val=="rouge") {
	   a[b+t+1]=1;
	   recRouge(a,b+t+1,p);
	} else {}
	} else if (b%t==t-1) {
	 if ((p->cases)[b-t]->val=="rouge") {
	   a[b-t]=1;
	   recRouge(a,b-t,p);
	} else if ((p->cases)[b+t]->val=="rouge") {
	   a[b+t]=1;
	   recRouge(a,b+t,p);
	} else if ((p->cases)[b-1-t]->val=="rouge") {
	   a[b-1-t]=1;
	   recRouge(a,b-1-t,p);
	} else if ((p->cases)[b-1]->val=="rouge") {
	   a[b-1]=1;
	   recRouge(a,b-1,p);
	} else if ((p->cases)[b+t-1]->val=="rouge") {
	   a[b+t-1]=1;
	   recRouge(a,b+t-1,p);
	} else {}
} else {
	if ((p->cases)[b-t]->val=="rouge") {
	   a[b-t]=1;
	   recRouge(a,b-t,p);
	} else if ((p->cases)[b+t]->val=="rouge") {
	   a[b+t]=1;
	   recRouge(a,b+t,p);
	} else if ((p->cases)[b-1-t]->val=="rouge") {
	   a[b-1-t]=1;
	   recRouge(a,b-1-t,p);
	} else if ((p->cases)[b-1]->val=="rouge") {
	   a[b-1]=1;
	   recRouge(a,b-1,p);
	} else if ((p->cases)[b+t-1]->val=="rouge") {
	   a[b+t-1]=1;
	   recRouge(a,b+t-1,p);
	} else if ((p->cases)[b+1-t]->val=="rouge") {
	   a[b+1-t]=1;
	   recRouge(a,b+1-t,p);
	} else if ((p->cases)[b+1]->val=="rouge") {
	   a[b+1]=1;
	   recRouge(a,b+1,p);
	} else if ((p->cases)[b+t+1]->val=="rouge") {
	   a[b+t+1]=1;
	   recRouge(a,b+t+1,p);
	} else {}
}
}
}
}
};

void recBleu(int *a,int b, Plateau *p) {
if ((p->cases)[b]->val=="bleu") { // on ne regarde pas les cases qui ne sont pas pour le bon joueur
  if (a[b]==1) { // la case a déjà été verifiée, donc on arrete.
  } else {
   if (b%t==0) { // division entiere, on est sur la premiere ligne
      if (b==0) { // case tout à gauche
            if ((p->cases)[1]->val=="bleu") {
	    a[1]=1;
	    recBleu(a,1,p);
	    }
            else if ((p->cases)[t]->val=="bleu") {
	    a[t]=1;
	    recBleu(a,t,p);
	  }else if ((p->cases)[t+1]->val=="bleu") {
	    a[t+1]=1;
	    recBleu(a,t+1,p);
	  } else {}
	}else if (b==t*(t-1)) {
	if ((p->cases)[b-t]->val=="bleu") {
	   a[b-t]=1;
	   recBleu(a,b-t,p);
	} else if ((p->cases)[b-t+1]->val=="bleu") {
	   a[b-t+1]=1;
	   recBleu(a,b-t+1,p);
	} else if ((p->cases)[b+1]->val=="bleu") {
	   a[b+1]=1;
	   recBleu(a,b+1,p);
	} else {}
	}else {
if ((p->cases)[b-t]->val=="bleu") {
	   a[b-t]=1;
	   recBleu(a,b-t,p);
	} else if ((p->cases)[b-t+1]->val=="bleu") {
	   a[b-t+1]=1;
	   recBleu(a,b-t+1,p);
	} else if ((p->cases)[b+1]->val=="bleu") {
	   a[b+1]=1;
	   recBleu(a,b+1,p);
	}  else if ((p->cases)[b+t+1]->val=="bleu") {
	   a[b+t+1]=1;
	   recBleu(a,b+t+1,p);
	} else if ((p->cases)[b+t]->val=="bleu") {
	   a[b+t]=1;
	   recBleu(a,b+t,p);
	} else {}

}
} else if (b%t==t-1) {
      if (b==t-1) { // case tout à gauche
      	 if ((p->cases)[b-1]->val=="bleu") {
	    a[b-1]=1;
	    recBleu(a,b-1,p);
	    }
	 else if ((p->cases)[b+t]->val=="bleu") {
	    a[b+t]=1;
	    recBleu(a,b+t,p);
	  }else if ((p->cases)[b+t-1]->val=="bleu") {
	    a[b+t-1]=1;
	    recBleu(a,b+t-1,p);
	  } else {}
	}else if (b==t*t-1) {
	if ((p->cases)[b-t]->val=="bleu") {
	   a[b-t]=1;
	   recBleu(a,b-t,p);
	} else if ((p->cases)[b-t-1]->val=="bleu") {
	   a[b-t-1]=1;
	   recBleu(a,b-t-1,p);
	} else if ((p->cases)[b-1]->val=="bleu") {
	   a[b-1]=1;
	   recBleu(a,b-1,p);
	} else {}
	}else {
if ((p->cases)[b-t]->val=="bleu") {
	   a[b-t]=1;
	   recBleu(a,b-t,p);
	} else if ((p->cases)[b-t-1]->val=="bleu") {
	   a[b-t-1]=1;
	   recBleu(a,b-t-1,p);
	} else if ((p->cases)[b-1]->val=="bleu") {
	   a[b-1]=1;
	   recBleu(a,b-1,p);
	}  else if ((p->cases)[b+t-1]->val=="bleu") {
	   a[b+t-1]=1;
	   recBleu(a,b+t-1,p);
	} else if ((p->cases)[b+t]->val=="bleu") {
	   a[b+t]=1;
	   recBleu(a,b+t,p);
	} else {}

}
}
 else {
	if (b/t==0) {
	 if ((p->cases)[b+t]->val=="bleu") {
	   a[b+t]=1;
	   recBleu(a,b+t,p);
	} else if ((p->cases)[b+t-1]->val=="bleu") {
	   a[b+t-1]=1;
	   recBleu(a,b+t-1,p);
	} else if ((p->cases)[b-1]->val=="bleu") {
	   a[b-1]=1;
	   recBleu(a,b-1,p);
	} else if ((p->cases)[b+1]->val=="bleu") {
	   a[b+1]=1;
	   recBleu(a,b+1,p);
	} else if ((p->cases)[b+t+1]->val=="bleu") {
	   a[b+t+1]=1;
	   recBleu(a,b+t+1,p);
	} else {}
	} else if (b/t==t-1) {
	 if ((p->cases)[b-t]->val=="bleu") {
	   a[b-t]=1;
	   recBleu(a,b-t,p);
	} else if ((p->cases)[b-t-1]->val=="bleu") {
	   a[b-t-1]=1;
	   recBleu(a,b-t-1,p);
	} else if ((p->cases)[b-1]->val=="bleu") {
	   a[b-1]=1;
	   recBleu(a,b-1,p);
	} else if ((p->cases)[b+1]->val=="bleu") {
	   a[b+1]=1;
	   recBleu(a,b+1,p);
	} else if ((p->cases)[b-t+1]->val=="bleu") {
	   a[b-t+1]=1;
	   recBleu(a,b-t+1,p);
	} else {}
} else {
	if ((p->cases)[b+t]->val=="bleu") {
	   a[b+t]=1;
	   recBleu(a,b+t,p);
	} else if ((p->cases)[b-t]->val=="bleu") {
	   a[b-t]=1;
	   recBleu(a,b-t,p);
	} else if ((p->cases)[b-t-1]->val=="bleu") {
	   a[b-t-1]=1;
	   recBleu(a,b-t-1,p);
	} else if ((p->cases)[b-t+1]->val=="bleu") {
	   a[b-t+1]=1;
	   recBleu(a,b-t+1,p);
	} else if ((p->cases)[b+t-1]->val=="bleu") {
	   a[b+t-1]=1;
	   recBleu(a,b+t-1,p);
	} else if ((p->cases)[b-1]->val=="bleu") {
	   a[b-1]=1;
	   recBleu(a,b-1,p);
	} else if ((p->cases)[b+1]->val=="bleu") {
	   a[b+1]=1;
	   recBleu(a,b+1,p);
	} else if ((p->cases)[b+t+1]->val=="bleu") {
	   a[b+t+1]=1;
	   recBleu(a,b+t+1,p);
	} else {}
}
}
}
}
};

int finPartie(Plateau *p,char* j) { // retourne 1 si la partie est finie, 0 sinon , et t la taille du plateau sur lequel on joue
int* a;
int b=0;
int i;
for (i=0;i<t*t;i++) {
a[i]=0;
}
  if (j=="rouge") {
    for (i=0;i<t;i++) {
        recBleu(a,t*i,p);
    }
    for (i=0;i<t;i++) {
        if (a[t-1+t*i]==1) {
        b=1;
        }
    }
  } else {
    for (i=0;i<t;i++) {
      recRouge(a,i,p);
    }
    for (i=0;i<t;i++) {
        if (a[t*(t-1)+i]==1) {
        b=1;
        }
    }
  }
  return b;

}; // segmentation fault pour l'instant

int regledugateau () {
  return 0;
};
int main()
{
  printf("a");
  Case *c =newCase();
  Plateau *p=newPlateau();
  printf("b");
  ajouterpiece(0,p,"bleu");
  printf("%d",finPartie(p,"bleu"));

    return 0;
}

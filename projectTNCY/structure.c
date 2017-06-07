#include "all.h"

const int t=11;

int ajouterpiece(int a,int *p,char* j, SDL_Surface *screen, int *pile) { // ON REND 1 SI LE COUP A PU ETRE JOUE, 0 SINON, a doit etre compris entre 0 et 120
  int modif = 0;
  int recherche = 0;
  while (pile[recherche]!=0) {
	recherche++;
  }

  if (a==140) {
   	a=pile[recherche-1];
	p[a]=0;
  	modif = addcase(a, screen, "blanc");
	p[a]=0;
	pile[recherche-1]=0;
	return 2;
  }
  
  if (strcmp(j,"rouge")==0) {
    if (p[a]==0) {
	modif = addcase(a, screen, j);
		if (modif==1) {
		p[a]=1;
		}
    }
  }

  if (strcmp(j,"bleu")==0) {
    if (p[a]==0) {
	modif=addcase(a, screen, j);
	if (modif==1) {
		p[a]=-1;
	}
    }
  }
  if (a==0) {
	a=-1;
  }
  if (modif == 1) {
	pile[recherche]=a;
  }
  return modif;
};


void parcours (int j, int p[121],int a[121],int b) {
if (p[b]==j) { // on ne regarde pas les cases qui ne sont pas pour le bon joueur
	a[b]=1;
   if (b/t==0) { // division entiere, on est sur la premiere ligne
      if (b==0) { // case tout à gauche
      	 if (p[1]==j) {
	    if(a[1]!=1){
	    parcours(j,p,a,1);
	    }
}
	 if (p[t]==j) {
	   if ( a[t]!=1){
	    parcours(j,p,a,t);
		}
	  } 
	}else if (b==t-1) {
	if (p[t-2]==j) {
	  if ( a[t-2]!=1) {
	   parcours(j,p,a,t-2);
}
	}  if (p[2*t-2]==j) {
	   if (a[2*t-2]!=1) {
	   parcours(j,p,a,2*t-2);
}	}  if (p[2*t-1]==j) {
	  if (a[2*t-1]!=1){
	   parcours(j,p,a,2*t-1);
	} }
	}else {
	 if (p[b-1]==j) {
	   if (a[b-1]!=1) {
	   parcours(j,p,a,b-1);}
	}if (p[b+1]==j) {
	   if (a[b+1]!=1) {
	   parcours(j,p,a,b+1);}
	} if (p[b+t-1]==j) {
	   if (a[b-1+t]!=1) {
	   parcours(j,p,a,b+t-1);}
	} if (p[b+t]==j) {
	   if (a[b+t]!=1) {
	   parcours(j,p,a,b+t);}
	}
}
} else if (b/t==t-1) {
	if (b%t==0) {
	if (p[b-t]==j) {
	   if (a[b-t]!=1) {
	   parcours(j,p,a,b-t);}
	}  if (p[b+1]==j) {
	   if (a[b+1]!=1) {
	
	   parcours(j,p,a,b+1);}
	}  if (p[b+1-t]==j) {
	   if (a[b+1-t]!=1) {
	   parcours(j,p,a,b-t+1); }
	}
} else if (b%t==t-1) {
	if (p[b-t]==j) {
	   if (a[b-t]!=1) {
	   parcours(j,p,a,b-t);}
	}  if (p[b-1]==j) {
	   if (a[b-1]!=1) {
	
	   parcours(j,p,a,b-1);}
	}
} else { 
	if (p[b-1]==j) {
	   if (a[b-1]!=1) {
	
	   parcours(j,p,a,b-1);}
	}
	if (p[b-t]==j) {
	   if (a[b-t]!=1) {
	   parcours(j,p,a,b-t);}
	}  if (p[b+1]==j) {
	   if (a[b+1]!=1) {
	
	   parcours(j,p,a,b+1);}
	}  if (p[b+1-t]==j) {
	   if (a[b+1-t]!=1) {
	   parcours(j,p,a,b+1-t); }
	}	
} } else {
	if (b%t==0) {
	 if (p[b-t]==j) {
	   if (a[b-t]!=1) {
	   parcours(j,p,a,b-t);}
	}  if (p[b+t]==j) {
	   if (a[b+t]!=1) {
	
	   parcours(j,p,a,b+t);}
	}  if (p[b+1-t]==j) {
	   if (a[b+1-t]!=1) {
	   parcours(j,p,a,b+1-t); }
	}  if (p[b+1]==j) {
	   if (a[b+1]!=1) {
	   parcours(j,p,a,b+1);}
	}} else if (b%t==t-1) {
	 if (p[b-t]==j) {
	   if (a[b-t]!=1) {
	   parcours(j,p,a,b-t);}
	}  if (p[b+t]==j) {
	   if (a[b+t]!=1) {
	   parcours(j,p,a,b+t);}
	 } if (p[b-1]==j) {
	   if (a[b-1]!=1) {
	   parcours(j,p,a,b-1);}
	}  if (p[b+t-1]==j) {
	   if (a[b+t-1]!=1) {
	   parcours(j,p,a,b+t-1);}
	} 
} else {
	if (p[b-t]==j) {
	   if (a[b-t]!=1) {
	   parcours(j,p,a,b-t);}
	}  if (p[b+t]==j) {
	   if (a[b+t]!=1) {
	   parcours(j,p,a,b+t);}
	 } if (p[b-1]==j) {
	   if (a[b-1]!=1) {
	   parcours(j,p,a,b-1);}
	} if (p[b+t-1]==j) {
	   if (a[b+t-1]!=1) {
	   parcours(j,p,a,b+t-1);}
	}  if (p[b+1-t]==j) {
	   if (a[b+1-t]!=1) {
	   parcours(j,p,a,b+1-t);}
	}  if (p[b+1]==j) {
	   if (a[b+1]!=1) {
	   parcours(j,p,a,b+1);}
	
}
}
}
}
};

int finPartie(char *joueuractuel, int p[121]) { // retourne 1 si la partie est finie, 0 sinon , et t la taille du plateau sur lequel on joue
int j=0;
if (strcmp(joueuractuel,"bleu")) {
	j=1;
}
if (strcmp(joueuractuel,"rouge")) {
	j=-1;
}


int a[121];
int b=0;
int c[121];
int i;
for (i=0;i<120;i++) {
a[i]=0;
c[i]=0;

}
  if (j==-1) {
    for (i=0;i<t;i++) {
        parcours(j,p,a,i);
    }
    for (i=0;i<t;i++) {
        if (a[t*(t-1)+i]==1) {
        b=1;
        }
    }
  } else {
    for (i=0;i<t;i++) {
      parcours(j,p,c,t*i);
    }
    for (i=0;i<t;i++) {
        if (c[t-1+t*i]==1) {
        b=1;
        }
    }
  }
  return b;

};

int regledugateau () {
  return 0;
};


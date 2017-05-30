#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "SDL/SDL.h"
#include "structure.h"



const int t=11;

int ajouterpiece(int a,int *p,char* j, SDL_Surface *screen, int *pile) { // ON REND 1 SI LE COUP A PU ETRE JOUE, 0 SINON, a doit etre compris entre 0 et 120
  int modif = 0;
  int recherche = 0;
  if (j=="rouge") {
    if (p[a-1]==0) {
	modif=addcase(a, screen, j);
	if (modif=1) {
		p[a-1]=1;
	}
    }
  }

  if (j=="bleu") {
    if (p[a-1]==0) {
	modif=addcase(a, screen, j);
	if (modif=1) {
		p[a-1]=-1;
	}
    }
  }
  if (a==0) {
	a=-1;
  }

  while (pile[recherche]!=0) {
	recherche++;
  }
  if (modif == 1) {
	pile[recherche]=a;
  }
  return modif;
};

void recRouge(int a[120],int b,int p[120]) {
if (p[b]==1) { // on ne regarde pas les cases qui ne sont pas pour le bon joueur
	a[b]=1;
   if (b/t==0) { // division entiere, on est sur la premiere ligne
      if (b==0) { // case tout à gauche
      	 if (p[1]==1) {
	    if(a[1]!=1){
	    recRouge(a,1,p);
	    }
}
	 if (p[t]==1) {
	   if ( a[t]!=1){
	    recRouge(a,t,p);
		}
	  } 
	}else if (b==t-1) {
	if (p[t-2]==1) {
	  if ( a[t-2]!=1) {
	   recRouge(a,t-2,p);
}
	}  if (p[2*t-2]==1) {
	   if (a[2*t-2]!=1) {
	   recRouge(a,2*t-2,p);
}	}  if (p[2*t-1]==1) {
	  if (a[2*t-1]!=1){
	   recRouge(a,2*t-1,p);
	} }
	}else {
	 if (p[b-1]==1) {
	   if (a[b-1]!=1) {
	   recRouge(a,b-1,p);}
	}if (p[b+1]==1) {
	   if (a[b+1]!=1) {
	   recRouge(a,b+1,p);}
	} if (p[b+t-1]==1) {
	   if (a[b-1+t]!=1) {
	   recRouge(a,b-1+t,p);}
	} if (p[b+t]==1) {
	   if (a[b+t]!=1) {
	   recRouge(a,b+t,p);}
	}
}
} else if (b/t==t-1) {}
 else {
	if (b%t==0) {
	 if (p[b-t]==1) {
	   if (a[b-t]!=1) {
	   recRouge(a,b-t,p);}
	}  if (p[b+t]==1) {
	   if (a[b+t]!=1) {
	
	   recRouge(a,b+t,p);}
	}  if (p[b+1-t]==1) {
	   if (a[b+1-t]!=1) {
	   recRouge(a,b+1-t,p); }
	}  if (p[b+1]==1) {
	   if (a[b+1]!=1) {
	   recRouge(a,b+1,p);}
	}} else if (b%t==t-1) {
	 if (p[b-t]==1) {
	   if (a[b-t]!=1) {
	   recRouge(a,b-t,p);}
	}  if (p[b+t]==1) {
	   if (a[b+t]!=1) {
	   recRouge(a,b+t,p);}
	 } if (p[b-1]==1) {
	   if (a[b-1]!=1) {
	   recRouge(a,b-1,p);}
	}  if (p[b+t-1]==1) {
	   if (a[b+t-1]!=1) {
	   recRouge(a,b+t-1,p);}
	} 
} else {
	if (p[b-t]==1) {
	   if (a[b-t]!=1) {
	   recRouge(a,b-t,p);}
	}  if (p[b+t]==1) {
	   if (a[b+t]!=1) {
	   recRouge(a,b+t,p);}
	 } if (p[b-1]==1) {
	   if (a[b-1]!=1) {
	   recRouge(a,b-1,p);}
	} if (p[b+t-1]==1) {
	   if (a[b+t-1]!=1) {
	   recRouge(a,b+t-1,p);}
	}  if (p[b+1-t]==1) {
	   if (a[b+1-t]!=1) {
	   recRouge(a,b+1-t,p);}
	}  if (p[b+1]==1) {
	   if (a[b+1]!=1) {
	   recRouge(a,b+1,p);}
	
}
}
}
}
};

void recBleu(int a[120],int b,int p[120]) {
if (p[b]==-1) { // on ne regarde pas les cases qui ne sont pas pour le bon joueur
a[b]=1;   
if (b%t==0) { // division entiere, on est sur la premiere ligne
      if (b==0) { // case tout à gauche
            if (p[1]==-1) {
	    if (a[1]!=1) {
	    recBleu(a,1,p);}
	    }
             if (p[t]==-1) {
	    if (a[t]!=1) {
	    recBleu(a,t,p);}
	} }else if (b==t*(t-1)) {
	if (p[b-t]==-1) {
	   if (a[b-t]!=1) {
	   recBleu(a,b-t,p);}
	}  if (p[b-t+1]==-1) {
	   if (a[b-t+1]!=1) {
	   recBleu(a,b-t+1,p);}
	}  if (p[b+1]==-1) {
	   if (a[b+1]!=1) {
	   recBleu(a,b+1,p);}
	} 
	}else {
if (p[b-t]==-1) {
	   if (a[b-t]!=1) {
	   recBleu(a,b-t,p);}
	}  if (p[b-t+1]==-1) {
	   if (a[b-t+1]!=1) {
	   recBleu(a,b-t+1,p);}
	}  if (p[b+1]==-1) {
	   if (a[b+1]!=1) {
	   recBleu(a,b+1,p);}
	  }if (p[b+t]==-1) {
	   if (a[b+t]!=1) {
	   recBleu(a,b+t,p);}
	} 

}
} else if (b%t==t-1) {
      if (b==t-1) { // case tout à gauche
      	 if (p[b-1]==-1) {
	    if (a[b-1]!=1) {
	    recBleu(a,b-1,p);}
	    }
	  if (p[b+t]==-1) {
	    if (a[b+t]!=1) {
	    recBleu(a,b+t,p);}
	  } if (p[b+t-1]==-1) {
	    if (a[b+t-1]!=1) {
	    recBleu(a,b+t-1,p);}
	  } 
	}else if (b==t*t-1) {
	if (p[b-t]==-1) {
	   if (a[b-t]!=1) {
	   recBleu(a,b-t,p);}
	  }if (p[b-1]==-1) {
	   if (a[b-1]!=1) {
	   recBleu(a,b-1,p);}
	} 
	}else {
if (p[b-t]==-1) {
	  if ( a[b-t]!=1) {
	   recBleu(a,b-t,p);}
	 } if (p[b-1]==-1) {
	   if (a[b-1]!=1) {
	   recBleu(a,b-1,p);}
	}   if (p[b+t-1]==-1) {
	   if (a[b+t-1]!=1) {
	   recBleu(a,b+t-1,p);}
	}  if (p[b+t]==-1) {
	   if (a[b+t]!=1) {
	   recBleu(a,b+t,p);}
	} 

}

} else {
	if (b/t==0) {
	 if (p[b+t]==-1) {
	   if (a[b+t]!=1) {
	   recBleu(a,b+t,p);}
	}  if (p[b+t-1]==-1) {
	   if (a[b+t-1]!=1) {
	   recBleu(a,b+t-1,p);}
	} if (p[b-1]==-1) {
	   if (a[b-1]!=1) {
	   recBleu(a,b-1,p);}
	} if (p[b+1]==-1) {
	   if (a[b+1]!=1) {
	   recBleu(a,b+1,p);}
	}} else if (b/t==t-1) {
	 if (p[b-t]==-1) {
	   if (a[b-t]!=1) {
	   recBleu(a,b-t,p);}
	} if (p[b-1]==-1) {
	   if (a[b-1]!=1) {
	   recBleu(a,b-1,p);}
	} if (p[b+1]==-1) {
	   if (a[b+1]!=1) {
	   recBleu(a,b+1,p);}
	}  if (p[b-t+1]==-1) {
	   if (a[b-t+1]!=1) {
	   recBleu(a,b-t+1,p);}
	} 
} else {
	if (p[b+t]==-1) {
	   if (a[b+t]!=1) {
	   recBleu(a,b+t,p);}
	} if (p[b-t]==-1) {
	   if (a[b-t]!=1) {
	   recBleu(a,b-t,p);}
	} if (p[b-t+1]==-1) {
	   if (a[b-t+1]!=1) {
	   recBleu(a,b-t+1,p);}
	} if (p[b+t-1]==-1) {
	   if (a[b+t-1]!=1) {
	   recBleu(a,b+t-1,p);}
	}  if (p[b-1]==-1) {
	   if (a[b-1]!=1) {
	   recBleu(a,b-1,p);}
	}  if (p[b+1]==-1) {
	   if (a[b+1]!=1) {
	   recBleu(a,b+1,p);}
}
}
}
}else { a[b]=1;}
};

int finPartie(char *joueuractuel, int p[120]) { // retourne 1 si la partie est finie, 0 sinon , et t la taille du plateau sur lequel on joue
int j=0;
if (joueuractuel=="bleu") {
	j=-1;
}
if (joueuractuel=="rouge") {
	j=1;
}

int a[120];
int b=0;
int i;
for (i=0;i<120;i++) {
a[i]=0;

}
  if (j==-1) {
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


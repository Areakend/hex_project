#include "main.h"
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

int ajouterpiece(int a,int *p,int j) { // ON REND 1 SI LE COUP A PU ETRE JOUE, 0 SINON, a doit etre compris entre 0 et 120
  int res=0;
  if (j==1) {
    if (p[a]==0) {
  p[a]=j;
  //addcase(a)
  res=1;
  }
} else if (j==-1) {
    if (p[a]==0) {
  p[a]=j;
  //addcase(a)
  res=1;
  }
  } else {
	return res; 
}

  return res;
};

void recRouge(int a[121],int b,int p[121]) {
printf("p");
if (p[b]==1) { // on ne regarde pas les cases qui ne sont pas pour le bon joueur
	a[b]=1;
   if (b/t==0) { // division entiere, on est sur la premiere ligne
      if (b==0) { // case tout à gauche
      	 if (p[1]==1) {
	    if(a[1]!=1){
	    recRouge(a,1,p);
		printf("d");
	    }
}
	 if (p[t]==1) {
	   if ( a[t]!=1){
printf("c");
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

void recBleu(int a[121],int b,int p[121]) {
printf("p");
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

int finPartie(int j,int p[121]) { // retourne 1 si la partie est finie, 0 sinon , et t la taille du plateau sur lequel on joue
int a[121];
int b=0;
int i;
printf("a");
for (i=0;i<120;i++) {
a[i]=0;

}
printf("b");
  if (j==-1) {
    for (i=0;i<t;i++) {
        recBleu(a,t*i,p);
	printf("c");
    }
    for (i=0;i<t;i++) {
        if (a[t-1+t*i]==1) {
        b=1;
        }
    }
  } else {
    for (i=0;i<t;i++) {
      recRouge(a,i,p);
	printf("d");
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
int p[121];
int i;
  printf("a");
for (i=0;i<t*t-1;i++) {
p[i]=0;

}
  printf("b");
ajouterpiece(0,p,1);
ajouterpiece(11,p,1);
ajouterpiece(12,p,1);
ajouterpiece(23,p,1);
ajouterpiece(24,p,1);
ajouterpiece(35,p,1);ajouterpiece(36,p,1);
ajouterpiece(47,p,1);ajouterpiece(48,p,1);
ajouterpiece(59,p,1);ajouterpiece(60,p,1);
ajouterpiece(71,p,1);ajouterpiece(72,p,1);
ajouterpiece(83,p,1);ajouterpiece(84,p,1);
ajouterpiece(95,p,1);ajouterpiece(96,p,1);
ajouterpiece(107,p,1);ajouterpiece(108,p,1);
ajouterpiece(109,p,1);ajouterpiece(109,p,1);
ajouterpiece(116,p,1);ajouterpiece(117,p,1);
printf("%d",p[10]);
printf("%d",p[11]);
printf("%d",p[0]);
printf("%d",finPartie(1,p));



    return 0;
}

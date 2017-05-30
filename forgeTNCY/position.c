#include <stdlib.h>
#include <stdio.h>
#include "SDL/SDL.h"




void tab (int ***pixel) {
int x0 = 14 + 48;
int y0 = 100 + 56;
int k =0;
int j=0;
int z=0;
int c=0;
int i=0;
int l=0;
int b=0;
int t=0;
for (k=0; k<11; k++) {
for (j=0; j<11; j++) {
i=0;

//for (i=0; i<24; i++) {
	for (l=1; l<25; l++) {
		if (l==1 || l==24) {
			c=2;
			b=11;
		}
		if (l==2 || l==23) {
			c=6;
			b=9;
		}
		if (l==3 || l==22) {
			c=10;
			b=7;
		}
		if (l==4 || l==21) {
			c=14;
			b=5;
		}
		if (l==5 || l==20) {
			c=18;
			b=3;
		}
		if (l==6 || l==19) {
			c=22;
			b=1;
		}
		if (l==7 || l==8 || l==9 || l==10 || l==11 || l==12 || l==13 || l==14 || l==15 || l==16 || l==17 || l==18 ) {
			c=24;
			b=0;
		}
	for (z=0; z<c; z++) {
		pixel[11*j + k][i][t] = x0 + b + z + 26*k + 13*j;
		pixel[11*j + k][i][t+1] = y0 + l-1 + 19*j;
		i++;
	}
//	}
}
}
}
}

int fctpos(int clicx, int clicy, int ***pixel) {
	int k=0;
	int j=0;
	int t=0;
	for (k=0; k<121; k++){
		for (j=0; j<432; j++) {
			if (pixel[k][j][t] == clicx && pixel[k][j][t+1]==clicy) {
				return (k);
			}
		}
	}
return (130);
}





















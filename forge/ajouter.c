#include <stdlib.h>
#include <stdio.h>
#include "SDL/SDL.h"
#include "SDL/SDL_image.h"
#include "image.c"
//#include "GB.h"

//Les surfaces des hexagones
SDL_Surface *case0 =NULL;
SDL_Surface *case1 =NULL;
SDL_Surface *case2 =NULL;
SDL_Surface *case3 =NULL;
SDL_Surface *case4 =NULL;
SDL_Surface *case5 =NULL;
SDL_Surface *case6 =NULL;
SDL_Surface *case7 =NULL;
SDL_Surface *case8 =NULL;
SDL_Surface *case9 =NULL;
SDL_Surface *case10 =NULL;
SDL_Surface *case11 =NULL;
SDL_Surface *case12 =NULL;
SDL_Surface *case13 =NULL;
SDL_Surface *case14 =NULL;
SDL_Surface *case15 =NULL;
SDL_Surface *case16 =NULL;
SDL_Surface *case17 =NULL;
SDL_Surface *case18 =NULL;
SDL_Surface *case19 =NULL;
SDL_Surface *case20 =NULL;
SDL_Surface *case21 =NULL;
SDL_Surface *case22 =NULL;
SDL_Surface *case23 =NULL;
SDL_Surface *case24 =NULL;
SDL_Surface *case25 =NULL;
SDL_Surface *case26 =NULL;
SDL_Surface *case27 =NULL;
SDL_Surface *case28 =NULL;
SDL_Surface *case29 =NULL;
SDL_Surface *case30 =NULL;
SDL_Surface *case31 =NULL;
SDL_Surface *case32 =NULL;
SDL_Surface *case33 =NULL;
SDL_Surface *case34 =NULL;
SDL_Surface *case35 =NULL;
SDL_Surface *case36 =NULL;
SDL_Surface *case37 =NULL;
SDL_Surface *case38 =NULL;
SDL_Surface *case39 =NULL;
SDL_Surface *case40 =NULL;
SDL_Surface *case41 =NULL;
SDL_Surface *case42 =NULL;
SDL_Surface *case43 =NULL;
SDL_Surface *case44 =NULL;
SDL_Surface *case45 =NULL;
SDL_Surface *case46 =NULL;
SDL_Surface *case47 =NULL;
SDL_Surface *case48 =NULL;
SDL_Surface *case49 =NULL;
SDL_Surface *case50 =NULL;
SDL_Surface *case51 =NULL;
SDL_Surface *case52 =NULL;
SDL_Surface *case53 =NULL;
SDL_Surface *case54 =NULL;
SDL_Surface *case55 =NULL;
SDL_Surface *case56 =NULL;
SDL_Surface *case57 =NULL;
SDL_Surface *case58 =NULL;
SDL_Surface *case59 =NULL;
SDL_Surface *case60 =NULL;
SDL_Surface *case61 =NULL;
SDL_Surface *case62 =NULL;
SDL_Surface *case63 =NULL;
SDL_Surface *case64 =NULL;
SDL_Surface *case65 =NULL;
SDL_Surface *case66 =NULL;
SDL_Surface *case67 =NULL;
SDL_Surface *case68 =NULL;
SDL_Surface *case69 =NULL;
SDL_Surface *case70 =NULL;
SDL_Surface *case71 =NULL;
SDL_Surface *case72 =NULL;
SDL_Surface *case73 =NULL;
SDL_Surface *case74 =NULL;
SDL_Surface *case75 =NULL;
SDL_Surface *case76 =NULL;
SDL_Surface *case77 =NULL;
SDL_Surface *case78 =NULL;
SDL_Surface *case79 =NULL;
SDL_Surface *case80 =NULL;
SDL_Surface *case81 =NULL;
SDL_Surface *case82 =NULL;
SDL_Surface *case83 =NULL;
SDL_Surface *case84 =NULL;
SDL_Surface *case85 =NULL;
SDL_Surface *case86 =NULL;
SDL_Surface *case87 =NULL;
SDL_Surface *case88 =NULL;
SDL_Surface *case89 =NULL;
SDL_Surface *case90 =NULL;
SDL_Surface *case91 =NULL;
SDL_Surface *case92 =NULL;
SDL_Surface *case93 =NULL;
SDL_Surface *case94 =NULL;
SDL_Surface *case95 =NULL;
SDL_Surface *case96 =NULL;
SDL_Surface *case97 =NULL;
SDL_Surface *case98 =NULL;
SDL_Surface *case99 =NULL;
SDL_Surface *case100 =NULL;
SDL_Surface *case101 =NULL;
SDL_Surface *case102 =NULL;
SDL_Surface *case103 =NULL;
SDL_Surface *case104 =NULL;
SDL_Surface *case105 =NULL;
SDL_Surface *case106 =NULL;
SDL_Surface *case107 =NULL;
SDL_Surface *case108 =NULL;
SDL_Surface *case109 =NULL;
SDL_Surface *case110 =NULL;
SDL_Surface *case111 =NULL;
SDL_Surface *case112 =NULL;
SDL_Surface *case113 =NULL;
SDL_Surface *case114 =NULL;
SDL_Surface *case115 =NULL;
SDL_Surface *case116 =NULL;
SDL_Surface *case117 =NULL;
SDL_Surface *case118 =NULL;
SDL_Surface *case119 =NULL;
SDL_Surface *case120 =NULL;

addcase(int pos) {
int posx;
int posy;

posx = pos%11;
posy= pos/11;

//23,19
//+27,+0
//+14, +24

if (pos==0 && joueuractuel=="rouge") { 
 case0 = load_image("rouge.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case0,plateau); 
 } 
if (pos==0 && joueuractuel="bleu") { 
 case0 = load_image("bleu.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case0,plateau); 
 } 

if (pos==1 && joueuractuel=="rouge") { 
 case1 = load_image("rouge.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case1,plateau); 
 } 
if (pos==1 && joueuractuel="bleu") { 
 case1 = load_image("bleu.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case1,plateau); 
 } 

if (pos==2 && joueuractuel=="rouge") { 
 case2 = load_image("rouge.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case2,plateau); 
 } 
if (pos==2 && joueuractuel="bleu") { 
 case2 = load_image("bleu.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case2,plateau); 
 } 

if (pos==3 && joueuractuel=="rouge") { 
 case3 = load_image("rouge.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case3,plateau); 
 } 
if (pos==3 && joueuractuel="bleu") { 
 case3 = load_image("bleu.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case3,plateau); 
 } 

if (pos==4 && joueuractuel=="rouge") { 
 case4 = load_image("rouge.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case4,plateau); 
 } 
if (pos==4 && joueuractuel="bleu") { 
 case4 = load_image("bleu.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case4,plateau); 
 } 

if (pos==5 && joueuractuel=="rouge") { 
 case5 = load_image("rouge.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case5,plateau); 
 } 
if (pos==5 && joueuractuel="bleu") { 
 case5 = load_image("bleu.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case5,plateau); 
 } 

if (pos==6 && joueuractuel=="rouge") { 
 case6 = load_image("rouge.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case6,plateau); 
 } 
if (pos==6 && joueuractuel="bleu") { 
 case6 = load_image("bleu.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case6,plateau); 
 } 

if (pos==7 && joueuractuel=="rouge") { 
 case7 = load_image("rouge.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case7,plateau); 
 } 
if (pos==7 && joueuractuel="bleu") { 
 case7 = load_image("bleu.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case7,plateau); 
 } 

if (pos==8 && joueuractuel=="rouge") { 
 case8 = load_image("rouge.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case8,plateau); 
 } 
if (pos==8 && joueuractuel="bleu") { 
 case8 = load_image("bleu.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case8,plateau); 
 } 

if (pos==9 && joueuractuel=="rouge") { 
 case9 = load_image("rouge.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case9,plateau); 
 } 
if (pos==9 && joueuractuel="bleu") { 
 case9 = load_image("bleu.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case9,plateau); 
 } 

if (pos==10 && joueuractuel=="rouge") { 
 case10 = load_image("rouge.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case10,plateau); 
 } 
if (pos==10 && joueuractuel="bleu") { 
 case10 = load_image("bleu.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case10,plateau); 
 } 

if (pos==11 && joueuractuel=="rouge") { 
 case11 = load_image("rouge.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case11,plateau); 
 } 
if (pos==11 && joueuractuel="bleu") { 
 case11 = load_image("bleu.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case11,plateau); 
 } 

if (pos==12 && joueuractuel=="rouge") { 
 case12 = load_image("rouge.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case12,plateau); 
 } 
if (pos==12 && joueuractuel="bleu") { 
 case12 = load_image("bleu.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case12,plateau); 
 } 

if (pos==13 && joueuractuel=="rouge") { 
 case13 = load_image("rouge.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case13,plateau); 
 } 
if (pos==13 && joueuractuel="bleu") { 
 case13 = load_image("bleu.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case13,plateau); 
 } 

if (pos==14 && joueuractuel=="rouge") { 
 case14 = load_image("rouge.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case14,plateau); 
 } 
if (pos==14 && joueuractuel="bleu") { 
 case14 = load_image("bleu.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case14,plateau); 
 } 

if (pos==15 && joueuractuel=="rouge") { 
 case15 = load_image("rouge.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case15,plateau); 
 } 
if (pos==15 && joueuractuel="bleu") { 
 case15 = load_image("bleu.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case15,plateau); 
 } 

if (pos==16 && joueuractuel=="rouge") { 
 case16 = load_image("rouge.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case16,plateau); 
 } 
if (pos==16 && joueuractuel="bleu") { 
 case16 = load_image("bleu.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case16,plateau); 
 } 

if (pos==17 && joueuractuel=="rouge") { 
 case17 = load_image("rouge.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case17,plateau); 
 } 
if (pos==17 && joueuractuel="bleu") { 
 case17 = load_image("bleu.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case17,plateau); 
 } 

if (pos==18 && joueuractuel=="rouge") { 
 case18 = load_image("rouge.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case18,plateau); 
 } 
if (pos==18 && joueuractuel="bleu") { 
 case18 = load_image("bleu.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case18,plateau); 
 } 

if (pos==19 && joueuractuel=="rouge") { 
 case19 = load_image("rouge.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case19,plateau); 
 } 
if (pos==19 && joueuractuel="bleu") { 
 case19 = load_image("bleu.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case19,plateau); 
 } 

if (pos==20 && joueuractuel=="rouge") { 
 case20 = load_image("rouge.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case20,plateau); 
 } 
if (pos==20 && joueuractuel="bleu") { 
 case20 = load_image("bleu.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case20,plateau); 
 } 

if (pos==21 && joueuractuel=="rouge") { 
 case21 = load_image("rouge.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case21,plateau); 
 } 
if (pos==21 && joueuractuel="bleu") { 
 case21 = load_image("bleu.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case21,plateau); 
 } 

if (pos==22 && joueuractuel=="rouge") { 
 case22 = load_image("rouge.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case22,plateau); 
 } 
if (pos==22 && joueuractuel="bleu") { 
 case22 = load_image("bleu.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case22,plateau); 
 } 

if (pos==23 && joueuractuel=="rouge") { 
 case23 = load_image("rouge.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case23,plateau); 
 } 
if (pos==23 && joueuractuel="bleu") { 
 case23 = load_image("bleu.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case23,plateau); 
 } 

if (pos==24 && joueuractuel=="rouge") { 
 case24 = load_image("rouge.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case24,plateau); 
 } 
if (pos==24 && joueuractuel="bleu") { 
 case24 = load_image("bleu.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case24,plateau); 
 } 

if (pos==25 && joueuractuel=="rouge") { 
 case25 = load_image("rouge.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case25,plateau); 
 } 
if (pos==25 && joueuractuel="bleu") { 
 case25 = load_image("bleu.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case25,plateau); 
 } 

if (pos==26 && joueuractuel=="rouge") { 
 case26 = load_image("rouge.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case26,plateau); 
 } 
if (pos==26 && joueuractuel="bleu") { 
 case26 = load_image("bleu.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case26,plateau); 
 } 

if (pos==27 && joueuractuel=="rouge") { 
 case27 = load_image("rouge.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case27,plateau); 
 } 
if (pos==27 && joueuractuel="bleu") { 
 case27 = load_image("bleu.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case27,plateau); 
 } 

if (pos==28 && joueuractuel=="rouge") { 
 case28 = load_image("rouge.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case28,plateau); 
 } 
if (pos==28 && joueuractuel="bleu") { 
 case28 = load_image("bleu.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case28,plateau); 
 } 

if (pos==29 && joueuractuel=="rouge") { 
 case29 = load_image("rouge.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case29,plateau); 
 } 
if (pos==29 && joueuractuel="bleu") { 
 case29 = load_image("bleu.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case29,plateau); 
 } 

if (pos==30 && joueuractuel=="rouge") { 
 case30 = load_image("rouge.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case30,plateau); 
 } 
if (pos==30 && joueuractuel="bleu") { 
 case30 = load_image("bleu.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case30,plateau); 
 } 

if (pos==31 && joueuractuel=="rouge") { 
 case31 = load_image("rouge.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case31,plateau); 
 } 
if (pos==31 && joueuractuel="bleu") { 
 case31 = load_image("bleu.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case31,plateau); 
 } 

if (pos==32 && joueuractuel=="rouge") { 
 case32 = load_image("rouge.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case32,plateau); 
 } 
if (pos==32 && joueuractuel="bleu") { 
 case32 = load_image("bleu.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case32,plateau); 
 } 

if (pos==33 && joueuractuel=="rouge") { 
 case33 = load_image("rouge.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case33,plateau); 
 } 
if (pos==33 && joueuractuel="bleu") { 
 case33 = load_image("bleu.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case33,plateau); 
 } 

if (pos==34 && joueuractuel=="rouge") { 
 case34 = load_image("rouge.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case34,plateau); 
 } 
if (pos==34 && joueuractuel="bleu") { 
 case34 = load_image("bleu.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case34,plateau); 
 } 

if (pos==35 && joueuractuel=="rouge") { 
 case35 = load_image("rouge.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case35,plateau); 
 } 
if (pos==35 && joueuractuel="bleu") { 
 case35 = load_image("bleu.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case35,plateau); 
 } 

if (pos==36 && joueuractuel=="rouge") { 
 case36 = load_image("rouge.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case36,plateau); 
 } 
if (pos==36 && joueuractuel="bleu") { 
 case36 = load_image("bleu.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case36,plateau); 
 } 

if (pos==37 && joueuractuel=="rouge") { 
 case37 = load_image("rouge.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case37,plateau); 
 } 
if (pos==37 && joueuractuel="bleu") { 
 case37 = load_image("bleu.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case37,plateau); 
 } 

if (pos==38 && joueuractuel=="rouge") { 
 case38 = load_image("rouge.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case38,plateau); 
 } 
if (pos==38 && joueuractuel="bleu") { 
 case38 = load_image("bleu.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case38,plateau); 
 } 

if (pos==39 && joueuractuel=="rouge") { 
 case39 = load_image("rouge.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case39,plateau); 
 } 
if (pos==39 && joueuractuel="bleu") { 
 case39 = load_image("bleu.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case39,plateau); 
 } 

if (pos==40 && joueuractuel=="rouge") { 
 case40 = load_image("rouge.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case40,plateau); 
 } 
if (pos==40 && joueuractuel="bleu") { 
 case40 = load_image("bleu.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case40,plateau); 
 } 

if (pos==41 && joueuractuel=="rouge") { 
 case41 = load_image("rouge.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case41,plateau); 
 } 
if (pos==41 && joueuractuel="bleu") { 
 case41 = load_image("bleu.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case41,plateau); 
 } 

if (pos==42 && joueuractuel=="rouge") { 
 case42 = load_image("rouge.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case42,plateau); 
 } 
if (pos==42 && joueuractuel="bleu") { 
 case42 = load_image("bleu.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case42,plateau); 
 } 

if (pos==43 && joueuractuel=="rouge") { 
 case43 = load_image("rouge.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case43,plateau); 
 } 
if (pos==43 && joueuractuel="bleu") { 
 case43 = load_image("bleu.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case43,plateau); 
 } 

if (pos==44 && joueuractuel=="rouge") { 
 case44 = load_image("rouge.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case44,plateau); 
 } 
if (pos==44 && joueuractuel="bleu") { 
 case44 = load_image("bleu.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case44,plateau); 
 } 

if (pos==45 && joueuractuel=="rouge") { 
 case45 = load_image("rouge.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case45,plateau); 
 } 
if (pos==45 && joueuractuel="bleu") { 
 case45 = load_image("bleu.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case45,plateau); 
 } 

if (pos==46 && joueuractuel=="rouge") { 
 case46 = load_image("rouge.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case46,plateau); 
 } 
if (pos==46 && joueuractuel="bleu") { 
 case46 = load_image("bleu.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case46,plateau); 
 } 

if (pos==47 && joueuractuel=="rouge") { 
 case47 = load_image("rouge.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case47,plateau); 
 } 
if (pos==47 && joueuractuel="bleu") { 
 case47 = load_image("bleu.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case47,plateau); 
 } 

if (pos==48 && joueuractuel=="rouge") { 
 case48 = load_image("rouge.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case48,plateau); 
 } 
if (pos==48 && joueuractuel="bleu") { 
 case48 = load_image("bleu.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case48,plateau); 
 } 

if (pos==49 && joueuractuel=="rouge") { 
 case49 = load_image("rouge.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case49,plateau); 
 } 
if (pos==49 && joueuractuel="bleu") { 
 case49 = load_image("bleu.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case49,plateau); 
 } 

if (pos==50 && joueuractuel=="rouge") { 
 case50 = load_image("rouge.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case50,plateau); 
 } 
if (pos==50 && joueuractuel="bleu") { 
 case50 = load_image("bleu.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case50,plateau); 
 } 

if (pos==51 && joueuractuel=="rouge") { 
 case51 = load_image("rouge.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case51,plateau); 
 } 
if (pos==51 && joueuractuel="bleu") { 
 case51 = load_image("bleu.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case51,plateau); 
 } 

if (pos==52 && joueuractuel=="rouge") { 
 case52 = load_image("rouge.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case52,plateau); 
 } 
if (pos==52 && joueuractuel="bleu") { 
 case52 = load_image("bleu.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case52,plateau); 
 } 

if (pos==53 && joueuractuel=="rouge") { 
 case53 = load_image("rouge.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case53,plateau); 
 } 
if (pos==53 && joueuractuel="bleu") { 
 case53 = load_image("bleu.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case53,plateau); 
 } 

if (pos==54 && joueuractuel=="rouge") { 
 case54 = load_image("rouge.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case54,plateau); 
 } 
if (pos==54 && joueuractuel="bleu") { 
 case54 = load_image("bleu.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case54,plateau); 
 } 

if (pos==55 && joueuractuel=="rouge") { 
 case55 = load_image("rouge.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case55,plateau); 
 } 
if (pos==55 && joueuractuel="bleu") { 
 case55 = load_image("bleu.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case55,plateau); 
 } 

if (pos==56 && joueuractuel=="rouge") { 
 case56 = load_image("rouge.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case56,plateau); 
 } 
if (pos==56 && joueuractuel="bleu") { 
 case56 = load_image("bleu.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case56,plateau); 
 } 

if (pos==57 && joueuractuel=="rouge") { 
 case57 = load_image("rouge.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case57,plateau); 
 } 
if (pos==57 && joueuractuel="bleu") { 
 case57 = load_image("bleu.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case57,plateau); 
 } 

if (pos==58 && joueuractuel=="rouge") { 
 case58 = load_image("rouge.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case58,plateau); 
 } 
if (pos==58 && joueuractuel="bleu") { 
 case58 = load_image("bleu.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case58,plateau); 
 } 

if (pos==59 && joueuractuel=="rouge") { 
 case59 = load_image("rouge.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case59,plateau); 
 } 
if (pos==59 && joueuractuel="bleu") { 
 case59 = load_image("bleu.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case59,plateau); 
 } 

if (pos==60 && joueuractuel=="rouge") { 
 case60 = load_image("rouge.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case60,plateau); 
 } 
if (pos==60 && joueuractuel="bleu") { 
 case60 = load_image("bleu.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case60,plateau); 
 } 

if (pos==61 && joueuractuel=="rouge") { 
 case61 = load_image("rouge.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case61,plateau); 
 } 
if (pos==61 && joueuractuel="bleu") { 
 case61 = load_image("bleu.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case61,plateau); 
 } 

if (pos==62 && joueuractuel=="rouge") { 
 case62 = load_image("rouge.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case62,plateau); 
 } 
if (pos==62 && joueuractuel="bleu") { 
 case62 = load_image("bleu.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case62,plateau); 
 } 

if (pos==63 && joueuractuel=="rouge") { 
 case63 = load_image("rouge.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case63,plateau); 
 } 
if (pos==63 && joueuractuel="bleu") { 
 case63 = load_image("bleu.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case63,plateau); 
 } 

if (pos==64 && joueuractuel=="rouge") { 
 case64 = load_image("rouge.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case64,plateau); 
 } 
if (pos==64 && joueuractuel="bleu") { 
 case64 = load_image("bleu.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case64,plateau); 
 } 

if (pos==65 && joueuractuel=="rouge") { 
 case65 = load_image("rouge.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case65,plateau); 
 } 
if (pos==65 && joueuractuel="bleu") { 
 case65 = load_image("bleu.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case65,plateau); 
 } 

if (pos==66 && joueuractuel=="rouge") { 
 case66 = load_image("rouge.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case66,plateau); 
 } 
if (pos==66 && joueuractuel="bleu") { 
 case66 = load_image("bleu.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case66,plateau); 
 } 

if (pos==67 && joueuractuel=="rouge") { 
 case67 = load_image("rouge.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case67,plateau); 
 } 
if (pos==67 && joueuractuel="bleu") { 
 case67 = load_image("bleu.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case67,plateau); 
 } 

if (pos==68 && joueuractuel=="rouge") { 
 case68 = load_image("rouge.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case68,plateau); 
 } 
if (pos==68 && joueuractuel="bleu") { 
 case68 = load_image("bleu.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case68,plateau); 
 } 

if (pos==69 && joueuractuel=="rouge") { 
 case69 = load_image("rouge.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case69,plateau); 
 } 
if (pos==69 && joueuractuel="bleu") { 
 case69 = load_image("bleu.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case69,plateau); 
 } 

if (pos==70 && joueuractuel=="rouge") { 
 case70 = load_image("rouge.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case70,plateau); 
 } 
if (pos==70 && joueuractuel="bleu") { 
 case70 = load_image("bleu.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case70,plateau); 
 } 

if (pos==71 && joueuractuel=="rouge") { 
 case71 = load_image("rouge.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case71,plateau); 
 } 
if (pos==71 && joueuractuel="bleu") { 
 case71 = load_image("bleu.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case71,plateau); 
 } 

if (pos==72 && joueuractuel=="rouge") { 
 case72 = load_image("rouge.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case72,plateau); 
 } 
if (pos==72 && joueuractuel="bleu") { 
 case72 = load_image("bleu.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case72,plateau); 
 } 

if (pos==73 && joueuractuel=="rouge") { 
 case73 = load_image("rouge.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case73,plateau); 
 } 
if (pos==73 && joueuractuel="bleu") { 
 case73 = load_image("bleu.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case73,plateau); 
 } 

if (pos==74 && joueuractuel=="rouge") { 
 case74 = load_image("rouge.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case74,plateau); 
 } 
if (pos==74 && joueuractuel="bleu") { 
 case74 = load_image("bleu.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case74,plateau); 
 } 

if (pos==75 && joueuractuel=="rouge") { 
 case75 = load_image("rouge.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case75,plateau); 
 } 
if (pos==75 && joueuractuel="bleu") { 
 case75 = load_image("bleu.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case75,plateau); 
 } 

if (pos==76 && joueuractuel=="rouge") { 
 case76 = load_image("rouge.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case76,plateau); 
 } 
if (pos==76 && joueuractuel="bleu") { 
 case76 = load_image("bleu.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case76,plateau); 
 } 

if (pos==77 && joueuractuel=="rouge") { 
 case77 = load_image("rouge.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case77,plateau); 
 } 
if (pos==77 && joueuractuel="bleu") { 
 case77 = load_image("bleu.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case77,plateau); 
 } 

if (pos==78 && joueuractuel=="rouge") { 
 case78 = load_image("rouge.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case78,plateau); 
 } 
if (pos==78 && joueuractuel="bleu") { 
 case78 = load_image("bleu.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case78,plateau); 
 } 

if (pos==79 && joueuractuel=="rouge") { 
 case79 = load_image("rouge.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case79,plateau); 
 } 
if (pos==79 && joueuractuel="bleu") { 
 case79 = load_image("bleu.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case79,plateau); 
 } 

if (pos==80 && joueuractuel=="rouge") { 
 case80 = load_image("rouge.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case80,plateau); 
 } 
if (pos==80 && joueuractuel="bleu") { 
 case80 = load_image("bleu.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case80,plateau); 
 } 

if (pos==81 && joueuractuel=="rouge") { 
 case81 = load_image("rouge.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case81,plateau); 
 } 
if (pos==81 && joueuractuel="bleu") { 
 case81 = load_image("bleu.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case81,plateau); 
 } 

if (pos==82 && joueuractuel=="rouge") { 
 case82 = load_image("rouge.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case82,plateau); 
 } 
if (pos==82 && joueuractuel="bleu") { 
 case82 = load_image("bleu.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case82,plateau); 
 } 

if (pos==83 && joueuractuel=="rouge") { 
 case83 = load_image("rouge.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case83,plateau); 
 } 
if (pos==83 && joueuractuel="bleu") { 
 case83 = load_image("bleu.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case83,plateau); 
 } 

if (pos==84 && joueuractuel=="rouge") { 
 case84 = load_image("rouge.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case84,plateau); 
 } 
if (pos==84 && joueuractuel="bleu") { 
 case84 = load_image("bleu.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case84,plateau); 
 } 

if (pos==85 && joueuractuel=="rouge") { 
 case85 = load_image("rouge.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case85,plateau); 
 } 
if (pos==85 && joueuractuel="bleu") { 
 case85 = load_image("bleu.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case85,plateau); 
 } 

if (pos==86 && joueuractuel=="rouge") { 
 case86 = load_image("rouge.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case86,plateau); 
 } 
if (pos==86 && joueuractuel="bleu") { 
 case86 = load_image("bleu.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case86,plateau); 
 } 

if (pos==87 && joueuractuel=="rouge") { 
 case87 = load_image("rouge.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case87,plateau); 
 } 
if (pos==87 && joueuractuel="bleu") { 
 case87 = load_image("bleu.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case87,plateau); 
 } 

if (pos==88 && joueuractuel=="rouge") { 
 case88 = load_image("rouge.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case88,plateau); 
 } 
if (pos==88 && joueuractuel="bleu") { 
 case88 = load_image("bleu.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case88,plateau); 
 } 

if (pos==89 && joueuractuel=="rouge") { 
 case89 = load_image("rouge.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case89,plateau); 
 } 
if (pos==89 && joueuractuel="bleu") { 
 case89 = load_image("bleu.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case89,plateau); 
 } 

if (pos==90 && joueuractuel=="rouge") { 
 case90 = load_image("rouge.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case90,plateau); 
 } 
if (pos==90 && joueuractuel="bleu") { 
 case90 = load_image("bleu.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case90,plateau); 
 } 

if (pos==91 && joueuractuel=="rouge") { 
 case91 = load_image("rouge.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case91,plateau); 
 } 
if (pos==91 && joueuractuel="bleu") { 
 case91 = load_image("bleu.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case91,plateau); 
 } 

if (pos==92 && joueuractuel=="rouge") { 
 case92 = load_image("rouge.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case92,plateau); 
 } 
if (pos==92 && joueuractuel="bleu") { 
 case92 = load_image("bleu.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case92,plateau); 
 } 

if (pos==93 && joueuractuel=="rouge") { 
 case93 = load_image("rouge.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case93,plateau); 
 } 
if (pos==93 && joueuractuel="bleu") { 
 case93 = load_image("bleu.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case93,plateau); 
 } 

if (pos==94 && joueuractuel=="rouge") { 
 case94 = load_image("rouge.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case94,plateau); 
 } 
if (pos==94 && joueuractuel="bleu") { 
 case94 = load_image("bleu.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case94,plateau); 
 } 

if (pos==95 && joueuractuel=="rouge") { 
 case95 = load_image("rouge.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case95,plateau); 
 } 
if (pos==95 && joueuractuel="bleu") { 
 case95 = load_image("bleu.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case95,plateau); 
 } 

if (pos==96 && joueuractuel=="rouge") { 
 case96 = load_image("rouge.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case96,plateau); 
 } 
if (pos==96 && joueuractuel="bleu") { 
 case96 = load_image("bleu.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case96,plateau); 
 } 

if (pos==97 && joueuractuel=="rouge") { 
 case97 = load_image("rouge.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case97,plateau); 
 } 
if (pos==97 && joueuractuel="bleu") { 
 case97 = load_image("bleu.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case97,plateau); 
 } 

if (pos==98 && joueuractuel=="rouge") { 
 case98 = load_image("rouge.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case98,plateau); 
 } 
if (pos==98 && joueuractuel="bleu") { 
 case98 = load_image("bleu.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case98,plateau); 
 } 

if (pos==99 && joueuractuel=="rouge") { 
 case99 = load_image("rouge.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case99,plateau); 
 } 
if (pos==99 && joueuractuel="bleu") { 
 case99 = load_image("bleu.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case99,plateau); 
 } 

if (pos==100 && joueuractuel=="rouge") { 
 case100 = load_image("rouge.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case100,plateau); 
 } 
if (pos==100 && joueuractuel="bleu") { 
 case100 = load_image("bleu.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case100,plateau); 
 } 

if (pos==101 && joueuractuel=="rouge") { 
 case101 = load_image("rouge.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case101,plateau); 
 } 
if (pos==101 && joueuractuel="bleu") { 
 case101 = load_image("bleu.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case101,plateau); 
 } 

if (pos==102 && joueuractuel=="rouge") { 
 case102 = load_image("rouge.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case102,plateau); 
 } 
if (pos==102 && joueuractuel="bleu") { 
 case102 = load_image("bleu.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case102,plateau); 
 } 

if (pos==103 && joueuractuel=="rouge") { 
 case103 = load_image("rouge.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case103,plateau); 
 } 
if (pos==103 && joueuractuel="bleu") { 
 case103 = load_image("bleu.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case103,plateau); 
 } 

if (pos==104 && joueuractuel=="rouge") { 
 case104 = load_image("rouge.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case104,plateau); 
 } 
if (pos==104 && joueuractuel="bleu") { 
 case104 = load_image("bleu.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case104,plateau); 
 } 

if (pos==105 && joueuractuel=="rouge") { 
 case105 = load_image("rouge.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case105,plateau); 
 } 
if (pos==105 && joueuractuel="bleu") { 
 case105 = load_image("bleu.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case105,plateau); 
 } 

if (pos==106 && joueuractuel=="rouge") { 
 case106 = load_image("rouge.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case106,plateau); 
 } 
if (pos==106 && joueuractuel="bleu") { 
 case106 = load_image("bleu.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case106,plateau); 
 } 

if (pos==107 && joueuractuel=="rouge") { 
 case107 = load_image("rouge.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case107,plateau); 
 } 
if (pos==107 && joueuractuel="bleu") { 
 case107 = load_image("bleu.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case107,plateau); 
 } 

if (pos==108 && joueuractuel=="rouge") { 
 case108 = load_image("rouge.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case108,plateau); 
 } 
if (pos==108 && joueuractuel="bleu") { 
 case108 = load_image("bleu.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case108,plateau); 
 } 

if (pos==109 && joueuractuel=="rouge") { 
 case109 = load_image("rouge.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case109,plateau); 
 } 
if (pos==109 && joueuractuel="bleu") { 
 case109 = load_image("bleu.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case109,plateau); 
 } 

if (pos==110 && joueuractuel=="rouge") { 
 case110 = load_image("rouge.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case110,plateau); 
 } 
if (pos==110 && joueuractuel="bleu") { 
 case110 = load_image("bleu.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case110,plateau); 
 } 

if (pos==111 && joueuractuel=="rouge") { 
 case111 = load_image("rouge.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case111,plateau); 
 } 
if (pos==111 && joueuractuel="bleu") { 
 case111 = load_image("bleu.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case111,plateau); 
 } 

if (pos==112 && joueuractuel=="rouge") { 
 case112 = load_image("rouge.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case112,plateau); 
 } 
if (pos==112 && joueuractuel="bleu") { 
 case112 = load_image("bleu.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case112,plateau); 
 } 

if (pos==113 && joueuractuel=="rouge") { 
 case113 = load_image("rouge.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case113,plateau); 
 } 
if (pos==113 && joueuractuel="bleu") { 
 case113 = load_image("bleu.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case113,plateau); 
 } 

if (pos==114 && joueuractuel=="rouge") { 
 case114 = load_image("rouge.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case114,plateau); 
 } 
if (pos==114 && joueuractuel="bleu") { 
 case114 = load_image("bleu.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case114,plateau); 
 } 

if (pos==115 && joueuractuel=="rouge") { 
 case115 = load_image("rouge.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case115,plateau); 
 } 
if (pos==115 && joueuractuel="bleu") { 
 case115 = load_image("bleu.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case115,plateau); 
 } 

if (pos==116 && joueuractuel=="rouge") { 
 case116 = load_image("rouge.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case116,plateau); 
 } 
if (pos==116 && joueuractuel="bleu") { 
 case116 = load_image("bleu.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case116,plateau); 
 } 

if (pos==117 && joueuractuel=="rouge") { 
 case117 = load_image("rouge.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case117,plateau); 
 } 
if (pos==117 && joueuractuel="bleu") { 
 case117 = load_image("bleu.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case117,plateau); 
 } 

if (pos==118 && joueuractuel=="rouge") { 
 case118 = load_image("rouge.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case118,plateau); 
 } 
if (pos==118 && joueuractuel="bleu") { 
 case118 = load_image("bleu.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case118,plateau); 
 } 

if (pos==119 && joueuractuel=="rouge") { 
 case119 = load_image("rouge.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case119,plateau); 
 } 
if (pos==119 && joueuractuel="bleu") { 
 case119 = load_image("bleu.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case119,plateau); 
 } 

if (pos==120 && joueuractuel=="rouge") { 
 case120 = load_image("rouge.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case120,plateau); 
 } 
if (pos==120 && joueuractuel="bleu") { 
 case120 = load_image("bleu.bmp"); 
 apply_surface(90+23+posx*27+posy*14,90+19+posy*24,case120,plateau); 
 } 
}


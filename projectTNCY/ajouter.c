#include "all.h"

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

int addcase(int pos, SDL_Surface *screen, char* joueuractuel) {

int modif =0;
int xPos = 14;
int yPos = 100;

//23,19
//+27,+0
//+14, +24


if (pos==0 && strcmp(joueuractuel, "rouge") == 0) {
    case0 = load_image("rouge.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case0,screen); 
     modif=1;
} 
if (pos==0 && strcmp(joueuractuel, "bleu") == 0) {
    case0 = load_image("bleu.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case0,screen);  
      modif=1; 
} 
if (pos==0 && strcmp(joueuractuel, "blanc") == 0) {
    case0 = load_image("blanc.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case0,screen); 
}
if (pos==1 && strcmp(joueuractuel, "rouge") == 0) {
    case1 = load_image("rouge.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case1,screen); 
     modif=1;
} 
if (pos==1 && strcmp(joueuractuel, "bleu") == 0) {
    case1 = load_image("bleu.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case1,screen);  
      modif=1; 
} 
if (pos==1 && strcmp(joueuractuel, "blanc") == 0) {
    case1 = load_image("blanc.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case1,screen); 
}
if (pos==2 && strcmp(joueuractuel, "rouge") == 0) {
    case2 = load_image("rouge.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case2,screen); 
     modif=1;
} 
if (pos==2 && strcmp(joueuractuel, "bleu") == 0) {
    case2 = load_image("bleu.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case2,screen);  
      modif=1; 
} 
if (pos==2 && strcmp(joueuractuel, "blanc") == 0) {
    case2 = load_image("blanc.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case2,screen); 
}
if (pos==3 && strcmp(joueuractuel, "rouge") == 0) {
    case3 = load_image("rouge.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case3,screen); 
     modif=1;
} 
if (pos==3 && strcmp(joueuractuel, "bleu") == 0) {
    case3 = load_image("bleu.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case3,screen);  
      modif=1; 
} 
if (pos==3 && strcmp(joueuractuel, "blanc") == 0) {
    case3 = load_image("blanc.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case3,screen); 
}
if (pos==4 && strcmp(joueuractuel, "rouge") == 0) {
    case4 = load_image("rouge.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case4,screen); 
     modif=1;
} 
if (pos==4 && strcmp(joueuractuel, "bleu") == 0) {
    case4 = load_image("bleu.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case4,screen);  
      modif=1; 
} 
if (pos==4 && strcmp(joueuractuel, "blanc") == 0) {
    case4 = load_image("blanc.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case4,screen); 
}
if (pos==5 && strcmp(joueuractuel, "rouge") == 0) {
    case5 = load_image("rouge.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case5,screen); 
     modif=1;
} 
if (pos==5 && strcmp(joueuractuel, "bleu") == 0) {
    case5 = load_image("bleu.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case5,screen);  
      modif=1; 
} 
if (pos==5 && strcmp(joueuractuel, "blanc") == 0) {
    case5 = load_image("blanc.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case5,screen); 
}
if (pos==6 && strcmp(joueuractuel, "rouge") == 0) {
    case6 = load_image("rouge.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case6,screen); 
     modif=1;
} 
if (pos==6 && strcmp(joueuractuel, "bleu") == 0) {
    case6 = load_image("bleu.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case6,screen);  
      modif=1; 
} 
if (pos==6 && strcmp(joueuractuel, "blanc") == 0) {
    case6 = load_image("blanc.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case6,screen); 
}
if (pos==7 && strcmp(joueuractuel, "rouge") == 0) {
    case7 = load_image("rouge.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case7,screen); 
     modif=1;
} 
if (pos==7 && strcmp(joueuractuel, "bleu") == 0) {
    case7 = load_image("bleu.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case7,screen);  
      modif=1; 
} 
if (pos==7 && strcmp(joueuractuel, "blanc") == 0) {
    case7 = load_image("blanc.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case7,screen); 
}
if (pos==8 && strcmp(joueuractuel, "rouge") == 0) {
    case8 = load_image("rouge.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case8,screen); 
     modif=1;
} 
if (pos==8 && strcmp(joueuractuel, "bleu") == 0) {
    case8 = load_image("bleu.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case8,screen);  
      modif=1; 
} 
if (pos==8 && strcmp(joueuractuel, "blanc") == 0) {
    case8 = load_image("blanc.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case8,screen); 
}
if (pos==9 && strcmp(joueuractuel, "rouge") == 0) {
    case9 = load_image("rouge.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case9,screen); 
     modif=1;
} 
if (pos==9 && strcmp(joueuractuel, "bleu") == 0) {
    case9 = load_image("bleu.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case9,screen);  
      modif=1; 
} 
if (pos==9 && strcmp(joueuractuel, "blanc") == 0) {
    case9 = load_image("blanc.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case9,screen); 
}
if (pos==10 && strcmp(joueuractuel, "rouge") == 0) {
    case10 = load_image("rouge.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case10,screen); 
     modif=1;
} 
if (pos==10 && strcmp(joueuractuel, "bleu") == 0) {
    case10 = load_image("bleu.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case10,screen);  
      modif=1; 
} 
if (pos==10 && strcmp(joueuractuel, "blanc") == 0) {
    case10 = load_image("blanc.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case10,screen); 
}
if (pos==11 && strcmp(joueuractuel, "rouge") == 0) {
    case11 = load_image("rouge.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case11,screen); 
     modif=1;
} 
if (pos==11 && strcmp(joueuractuel, "bleu") == 0) {
    case11 = load_image("bleu.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case11,screen);  
      modif=1; 
} 
if (pos==11 && strcmp(joueuractuel, "blanc") == 0) {
    case11 = load_image("blanc.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case11,screen); 
}
if (pos==12 && strcmp(joueuractuel, "rouge") == 0) {
    case12 = load_image("rouge.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case12,screen); 
     modif=1;
} 
if (pos==12 && strcmp(joueuractuel, "bleu") == 0) {
    case12 = load_image("bleu.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case12,screen);  
      modif=1; 
} 
if (pos==12 && strcmp(joueuractuel, "blanc") == 0) {
    case12 = load_image("blanc.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case12,screen); 
}
if (pos==13 && strcmp(joueuractuel, "rouge") == 0) {
    case13 = load_image("rouge.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case13,screen); 
     modif=1;
} 
if (pos==13 && strcmp(joueuractuel, "bleu") == 0) {
    case13 = load_image("bleu.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case13,screen);  
      modif=1; 
} 
if (pos==13 && strcmp(joueuractuel, "blanc") == 0) {
    case13 = load_image("blanc.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case13,screen); 
}
if (pos==14 && strcmp(joueuractuel, "rouge") == 0) {
    case14 = load_image("rouge.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case14,screen); 
     modif=1;
} 
if (pos==14 && strcmp(joueuractuel, "bleu") == 0) {
    case14 = load_image("bleu.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case14,screen);  
      modif=1; 
} 
if (pos==14 && strcmp(joueuractuel, "blanc") == 0) {
    case14 = load_image("blanc.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case14,screen); 
}
if (pos==15 && strcmp(joueuractuel, "rouge") == 0) {
    case15 = load_image("rouge.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case15,screen); 
     modif=1;
} 
if (pos==15 && strcmp(joueuractuel, "bleu") == 0) {
    case15 = load_image("bleu.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case15,screen);  
      modif=1; 
} 
if (pos==15 && strcmp(joueuractuel, "blanc") == 0) {
    case15 = load_image("blanc.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case15,screen); 
}
if (pos==16 && strcmp(joueuractuel, "rouge") == 0) {
    case16 = load_image("rouge.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case16,screen); 
     modif=1;
} 
if (pos==16 && strcmp(joueuractuel, "bleu") == 0) {
    case16 = load_image("bleu.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case16,screen);  
      modif=1; 
} 
if (pos==16 && strcmp(joueuractuel, "blanc") == 0) {
    case16 = load_image("blanc.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case16,screen); 
}
if (pos==17 && strcmp(joueuractuel, "rouge") == 0) {
    case17 = load_image("rouge.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case17,screen); 
     modif=1;
} 
if (pos==17 && strcmp(joueuractuel, "bleu") == 0) {
    case17 = load_image("bleu.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case17,screen);  
      modif=1; 
} 
if (pos==17 && strcmp(joueuractuel, "blanc") == 0) {
    case17 = load_image("blanc.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case17,screen); 
}
if (pos==18 && strcmp(joueuractuel, "rouge") == 0) {
    case18 = load_image("rouge.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case18,screen); 
     modif=1;
} 
if (pos==18 && strcmp(joueuractuel, "bleu") == 0) {
    case18 = load_image("bleu.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case18,screen);  
      modif=1; 
} 
if (pos==18 && strcmp(joueuractuel, "blanc") == 0) {
    case18 = load_image("blanc.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case18,screen); 
}
if (pos==19 && strcmp(joueuractuel, "rouge") == 0) {
    case19 = load_image("rouge.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case19,screen); 
     modif=1;
} 
if (pos==19 && strcmp(joueuractuel, "bleu") == 0) {
    case19 = load_image("bleu.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case19,screen);  
      modif=1; 
} 
if (pos==19 && strcmp(joueuractuel, "blanc") == 0) {
    case19 = load_image("blanc.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case19,screen); 
}
if (pos==20 && strcmp(joueuractuel, "rouge") == 0) {
    case20 = load_image("rouge.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case20,screen); 
     modif=1;
} 
if (pos==20 && strcmp(joueuractuel, "bleu") == 0) {
    case20 = load_image("bleu.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case20,screen);  
      modif=1; 
} 
if (pos==20 && strcmp(joueuractuel, "blanc") == 0) {
    case20 = load_image("blanc.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case20,screen); 
}
if (pos==21 && strcmp(joueuractuel, "rouge") == 0) {
    case21 = load_image("rouge.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case21,screen); 
     modif=1;
} 
if (pos==21 && strcmp(joueuractuel, "bleu") == 0) {
    case21 = load_image("bleu.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case21,screen);  
      modif=1; 
} 
if (pos==21 && strcmp(joueuractuel, "blanc") == 0) {
    case21 = load_image("blanc.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case21,screen); 
}
if (pos==22 && strcmp(joueuractuel, "rouge") == 0) {
    case22 = load_image("rouge.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case22,screen); 
     modif=1;
} 
if (pos==22 && strcmp(joueuractuel, "bleu") == 0) {
    case22 = load_image("bleu.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case22,screen);  
      modif=1; 
} 
if (pos==22 && strcmp(joueuractuel, "blanc") == 0) {
    case22 = load_image("blanc.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case22,screen); 
}
if (pos==23 && strcmp(joueuractuel, "rouge") == 0) {
    case23 = load_image("rouge.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case23,screen); 
     modif=1;
} 
if (pos==23 && strcmp(joueuractuel, "bleu") == 0) {
    case23 = load_image("bleu.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case23,screen);  
      modif=1; 
} 
if (pos==23 && strcmp(joueuractuel, "blanc") == 0) {
    case23 = load_image("blanc.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case23,screen); 
}
if (pos==24 && strcmp(joueuractuel, "rouge") == 0) {
    case24 = load_image("rouge.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case24,screen); 
     modif=1;
} 
if (pos==24 && strcmp(joueuractuel, "bleu") == 0) {
    case24 = load_image("bleu.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case24,screen);  
      modif=1; 
} 
if (pos==24 && strcmp(joueuractuel, "blanc") == 0) {
    case24 = load_image("blanc.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case24,screen); 
}
if (pos==25 && strcmp(joueuractuel, "rouge") == 0) {
    case25 = load_image("rouge.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case25,screen); 
     modif=1;
} 
if (pos==25 && strcmp(joueuractuel, "bleu") == 0) {
    case25 = load_image("bleu.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case25,screen);  
      modif=1; 
} 
if (pos==25 && strcmp(joueuractuel, "blanc") == 0) {
    case25 = load_image("blanc.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case25,screen); 
}
if (pos==26 && strcmp(joueuractuel, "rouge") == 0) {
    case26 = load_image("rouge.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case26,screen); 
     modif=1;
} 
if (pos==26 && strcmp(joueuractuel, "bleu") == 0) {
    case26 = load_image("bleu.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case26,screen);  
      modif=1; 
} 
if (pos==26 && strcmp(joueuractuel, "blanc") == 0) {
    case26 = load_image("blanc.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case26,screen); 
}
if (pos==27 && strcmp(joueuractuel, "rouge") == 0) {
    case27 = load_image("rouge.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case27,screen); 
     modif=1;
} 
if (pos==27 && strcmp(joueuractuel, "bleu") == 0) {
    case27 = load_image("bleu.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case27,screen);  
      modif=1; 
} 
if (pos==27 && strcmp(joueuractuel, "blanc") == 0) {
    case27 = load_image("blanc.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case27,screen); 
}
if (pos==28 && strcmp(joueuractuel, "rouge") == 0) {
    case28 = load_image("rouge.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case28,screen); 
     modif=1;
} 
if (pos==28 && strcmp(joueuractuel, "bleu") == 0) {
    case28 = load_image("bleu.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case28,screen);  
      modif=1; 
} 
if (pos==28 && strcmp(joueuractuel, "blanc") == 0) {
    case28 = load_image("blanc.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case28,screen); 
}
if (pos==29 && strcmp(joueuractuel, "rouge") == 0) {
    case29 = load_image("rouge.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case29,screen); 
     modif=1;
} 
if (pos==29 && strcmp(joueuractuel, "bleu") == 0) {
    case29 = load_image("bleu.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case29,screen);  
      modif=1; 
} 
if (pos==29 && strcmp(joueuractuel, "blanc") == 0) {
    case29 = load_image("blanc.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case29,screen); 
}
if (pos==30 && strcmp(joueuractuel, "rouge") == 0) {
    case30 = load_image("rouge.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case30,screen); 
     modif=1;
} 
if (pos==30 && strcmp(joueuractuel, "bleu") == 0) {
    case30 = load_image("bleu.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case30,screen);  
      modif=1; 
} 
if (pos==30 && strcmp(joueuractuel, "blanc") == 0) {
    case30 = load_image("blanc.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case30,screen); 
}
if (pos==31 && strcmp(joueuractuel, "rouge") == 0) {
    case31 = load_image("rouge.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case31,screen); 
     modif=1;
} 
if (pos==31 && strcmp(joueuractuel, "bleu") == 0) {
    case31 = load_image("bleu.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case31,screen);  
      modif=1; 
} 
if (pos==31 && strcmp(joueuractuel, "blanc") == 0) {
    case31 = load_image("blanc.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case31,screen); 
}
if (pos==32 && strcmp(joueuractuel, "rouge") == 0) {
    case32 = load_image("rouge.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case32,screen); 
     modif=1;
} 
if (pos==32 && strcmp(joueuractuel, "bleu") == 0) {
    case32 = load_image("bleu.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case32,screen);  
      modif=1; 
} 
if (pos==32 && strcmp(joueuractuel, "blanc") == 0) {
    case32 = load_image("blanc.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case32,screen); 
}
if (pos==33 && strcmp(joueuractuel, "rouge") == 0) {
    case33 = load_image("rouge.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case33,screen); 
     modif=1;
} 
if (pos==33 && strcmp(joueuractuel, "bleu") == 0) {
    case33 = load_image("bleu.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case33,screen);  
      modif=1; 
} 
if (pos==33 && strcmp(joueuractuel, "blanc") == 0) {
    case33 = load_image("blanc.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case33,screen); 
}
if (pos==34 && strcmp(joueuractuel, "rouge") == 0) {
    case34 = load_image("rouge.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case34,screen); 
     modif=1;
} 
if (pos==34 && strcmp(joueuractuel, "bleu") == 0) {
    case34 = load_image("bleu.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case34,screen);  
      modif=1; 
} 
if (pos==34 && strcmp(joueuractuel, "blanc") == 0) {
    case34 = load_image("blanc.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case34,screen); 
}
if (pos==35 && strcmp(joueuractuel, "rouge") == 0) {
    case35 = load_image("rouge.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case35,screen); 
     modif=1;
} 
if (pos==35 && strcmp(joueuractuel, "bleu") == 0) {
    case35 = load_image("bleu.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case35,screen);  
      modif=1; 
} 
if (pos==35 && strcmp(joueuractuel, "blanc") == 0) {
    case35 = load_image("blanc.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case35,screen); 
}
if (pos==36 && strcmp(joueuractuel, "rouge") == 0) {
    case36 = load_image("rouge.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case36,screen); 
     modif=1;
} 
if (pos==36 && strcmp(joueuractuel, "bleu") == 0) {
    case36 = load_image("bleu.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case36,screen);  
      modif=1; 
} 
if (pos==36 && strcmp(joueuractuel, "blanc") == 0) {
    case36 = load_image("blanc.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case36,screen); 
}
if (pos==37 && strcmp(joueuractuel, "rouge") == 0) {
    case37 = load_image("rouge.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case37,screen); 
     modif=1;
} 
if (pos==37 && strcmp(joueuractuel, "bleu") == 0) {
    case37 = load_image("bleu.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case37,screen);  
      modif=1; 
} 
if (pos==37 && strcmp(joueuractuel, "blanc") == 0) {
    case37 = load_image("blanc.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case37,screen); 
}
if (pos==38 && strcmp(joueuractuel, "rouge") == 0) {
    case38 = load_image("rouge.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case38,screen); 
     modif=1;
} 
if (pos==38 && strcmp(joueuractuel, "bleu") == 0) {
    case38 = load_image("bleu.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case38,screen);  
      modif=1; 
} 
if (pos==38 && strcmp(joueuractuel, "blanc") == 0) {
    case38 = load_image("blanc.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case38,screen); 
}
if (pos==39 && strcmp(joueuractuel, "rouge") == 0) {
    case39 = load_image("rouge.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case39,screen); 
     modif=1;
} 
if (pos==39 && strcmp(joueuractuel, "bleu") == 0) {
    case39 = load_image("bleu.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case39,screen);  
      modif=1; 
} 
if (pos==39 && strcmp(joueuractuel, "blanc") == 0) {
    case39 = load_image("blanc.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case39,screen); 
}
if (pos==40 && strcmp(joueuractuel, "rouge") == 0) {
    case40 = load_image("rouge.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case40,screen); 
     modif=1;
} 
if (pos==40 && strcmp(joueuractuel, "bleu") == 0) {
    case40 = load_image("bleu.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case40,screen);  
      modif=1; 
} 
if (pos==40 && strcmp(joueuractuel, "blanc") == 0) {
    case40 = load_image("blanc.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case40,screen); 
}
if (pos==41 && strcmp(joueuractuel, "rouge") == 0) {
    case41 = load_image("rouge.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case41,screen); 
     modif=1;
} 
if (pos==41 && strcmp(joueuractuel, "bleu") == 0) {
    case41 = load_image("bleu.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case41,screen);  
      modif=1; 
} 
if (pos==41 && strcmp(joueuractuel, "blanc") == 0) {
    case41 = load_image("blanc.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case41,screen); 
}
if (pos==42 && strcmp(joueuractuel, "rouge") == 0) {
    case42 = load_image("rouge.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case42,screen); 
     modif=1;
} 
if (pos==42 && strcmp(joueuractuel, "bleu") == 0) {
    case42 = load_image("bleu.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case42,screen);  
      modif=1; 
} 
if (pos==42 && strcmp(joueuractuel, "blanc") == 0) {
    case42 = load_image("blanc.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case42,screen); 
}
if (pos==43 && strcmp(joueuractuel, "rouge") == 0) {
    case43 = load_image("rouge.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case43,screen); 
     modif=1;
} 
if (pos==43 && strcmp(joueuractuel, "bleu") == 0) {
    case43 = load_image("bleu.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case43,screen);  
      modif=1; 
} 
if (pos==43 && strcmp(joueuractuel, "blanc") == 0) {
    case43 = load_image("blanc.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case43,screen); 
}
if (pos==44 && strcmp(joueuractuel, "rouge") == 0) {
    case44 = load_image("rouge.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case44,screen); 
     modif=1;
} 
if (pos==44 && strcmp(joueuractuel, "bleu") == 0) {
    case44 = load_image("bleu.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case44,screen);  
      modif=1; 
} 
if (pos==44 && strcmp(joueuractuel, "blanc") == 0) {
    case44 = load_image("blanc.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case44,screen); 
}
if (pos==45 && strcmp(joueuractuel, "rouge") == 0) {
    case45 = load_image("rouge.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case45,screen); 
     modif=1;
} 
if (pos==45 && strcmp(joueuractuel, "bleu") == 0) {
    case45 = load_image("bleu.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case45,screen);  
      modif=1; 
} 
if (pos==45 && strcmp(joueuractuel, "blanc") == 0) {
    case45 = load_image("blanc.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case45,screen); 
}
if (pos==46 && strcmp(joueuractuel, "rouge") == 0) {
    case46 = load_image("rouge.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case46,screen); 
     modif=1;
} 
if (pos==46 && strcmp(joueuractuel, "bleu") == 0) {
    case46 = load_image("bleu.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case46,screen);  
      modif=1; 
} 
if (pos==46 && strcmp(joueuractuel, "blanc") == 0) {
    case46 = load_image("blanc.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case46,screen); 
}
if (pos==47 && strcmp(joueuractuel, "rouge") == 0) {
    case47 = load_image("rouge.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case47,screen); 
     modif=1;
} 
if (pos==47 && strcmp(joueuractuel, "bleu") == 0) {
    case47 = load_image("bleu.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case47,screen);  
      modif=1; 
} 
if (pos==47 && strcmp(joueuractuel, "blanc") == 0) {
    case47 = load_image("blanc.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case47,screen); 
}
if (pos==48 && strcmp(joueuractuel, "rouge") == 0) {
    case48 = load_image("rouge.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case48,screen); 
     modif=1;
} 
if (pos==48 && strcmp(joueuractuel, "bleu") == 0) {
    case48 = load_image("bleu.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case48,screen);  
      modif=1; 
} 
if (pos==48 && strcmp(joueuractuel, "blanc") == 0) {
    case48 = load_image("blanc.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case48,screen); 
}
if (pos==49 && strcmp(joueuractuel, "rouge") == 0) {
    case49 = load_image("rouge.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case49,screen); 
     modif=1;
} 
if (pos==49 && strcmp(joueuractuel, "bleu") == 0) {
    case49 = load_image("bleu.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case49,screen);  
      modif=1; 
} 
if (pos==49 && strcmp(joueuractuel, "blanc") == 0) {
    case49 = load_image("blanc.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case49,screen); 
}
if (pos==50 && strcmp(joueuractuel, "rouge") == 0) {
    case50 = load_image("rouge.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case50,screen); 
     modif=1;
} 
if (pos==50 && strcmp(joueuractuel, "bleu") == 0) {
    case50 = load_image("bleu.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case50,screen);  
      modif=1; 
} 
if (pos==50 && strcmp(joueuractuel, "blanc") == 0) {
    case50 = load_image("blanc.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case50,screen); 
}
if (pos==51 && strcmp(joueuractuel, "rouge") == 0) {
    case51 = load_image("rouge.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case51,screen); 
     modif=1;
} 
if (pos==51 && strcmp(joueuractuel, "bleu") == 0) {
    case51 = load_image("bleu.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case51,screen);  
      modif=1; 
} 
if (pos==51 && strcmp(joueuractuel, "blanc") == 0) {
    case51 = load_image("blanc.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case51,screen); 
}
if (pos==52 && strcmp(joueuractuel, "rouge") == 0) {
    case52 = load_image("rouge.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case52,screen); 
     modif=1;
} 
if (pos==52 && strcmp(joueuractuel, "bleu") == 0) {
    case52 = load_image("bleu.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case52,screen);  
      modif=1; 
} 
if (pos==52 && strcmp(joueuractuel, "blanc") == 0) {
    case52 = load_image("blanc.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case52,screen); 
}
if (pos==53 && strcmp(joueuractuel, "rouge") == 0) {
    case53 = load_image("rouge.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case53,screen); 
     modif=1;
} 
if (pos==53 && strcmp(joueuractuel, "bleu") == 0) {
    case53 = load_image("bleu.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case53,screen);  
      modif=1; 
} 
if (pos==53 && strcmp(joueuractuel, "blanc") == 0) {
    case53 = load_image("blanc.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case53,screen); 
}
if (pos==54 && strcmp(joueuractuel, "rouge") == 0) {
    case54 = load_image("rouge.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case54,screen); 
     modif=1;
} 
if (pos==54 && strcmp(joueuractuel, "bleu") == 0) {
    case54 = load_image("bleu.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case54,screen);  
      modif=1; 
} 
if (pos==54 && strcmp(joueuractuel, "blanc") == 0) {
    case54 = load_image("blanc.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case54,screen); 
}
if (pos==55 && strcmp(joueuractuel, "rouge") == 0) {
    case55 = load_image("rouge.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case55,screen); 
     modif=1;
} 
if (pos==55 && strcmp(joueuractuel, "bleu") == 0) {
    case55 = load_image("bleu.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case55,screen);  
      modif=1; 
} 
if (pos==55 && strcmp(joueuractuel, "blanc") == 0) {
    case55 = load_image("blanc.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case55,screen); 
}
if (pos==56 && strcmp(joueuractuel, "rouge") == 0) {
    case56 = load_image("rouge.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case56,screen); 
     modif=1;
} 
if (pos==56 && strcmp(joueuractuel, "bleu") == 0) {
    case56 = load_image("bleu.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case56,screen);  
      modif=1; 
} 
if (pos==56 && strcmp(joueuractuel, "blanc") == 0) {
    case56 = load_image("blanc.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case56,screen); 
}
if (pos==57 && strcmp(joueuractuel, "rouge") == 0) {
    case57 = load_image("rouge.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case57,screen); 
     modif=1;
} 
if (pos==57 && strcmp(joueuractuel, "bleu") == 0) {
    case57 = load_image("bleu.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case57,screen);  
      modif=1; 
} 
if (pos==57 && strcmp(joueuractuel, "blanc") == 0) {
    case57 = load_image("blanc.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case57,screen); 
}
if (pos==58 && strcmp(joueuractuel, "rouge") == 0) {
    case58 = load_image("rouge.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case58,screen); 
     modif=1;
} 
if (pos==58 && strcmp(joueuractuel, "bleu") == 0) {
    case58 = load_image("bleu.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case58,screen);  
      modif=1; 
} 
if (pos==58 && strcmp(joueuractuel, "blanc") == 0) {
    case58 = load_image("blanc.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case58,screen); 
}
if (pos==59 && strcmp(joueuractuel, "rouge") == 0) {
    case59 = load_image("rouge.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case59,screen); 
     modif=1;
} 
if (pos==59 && strcmp(joueuractuel, "bleu") == 0) {
    case59 = load_image("bleu.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case59,screen);  
      modif=1; 
} 
if (pos==59 && strcmp(joueuractuel, "blanc") == 0) {
    case59 = load_image("blanc.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case59,screen); 
}
if (pos==60 && strcmp(joueuractuel, "rouge") == 0) {
    case60 = load_image("rouge.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case60,screen); 
     modif=1;
} 
if (pos==60 && strcmp(joueuractuel, "bleu") == 0) {
    case60 = load_image("bleu.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case60,screen);  
      modif=1; 
} 
if (pos==60 && strcmp(joueuractuel, "blanc") == 0) {
    case60 = load_image("blanc.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case60,screen); 
}
if (pos==61 && strcmp(joueuractuel, "rouge") == 0) {
    case61 = load_image("rouge.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case61,screen); 
     modif=1;
} 
if (pos==61 && strcmp(joueuractuel, "bleu") == 0) {
    case61 = load_image("bleu.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case61,screen);  
      modif=1; 
} 
if (pos==61 && strcmp(joueuractuel, "blanc") == 0) {
    case61 = load_image("blanc.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case61,screen); 
}
if (pos==62 && strcmp(joueuractuel, "rouge") == 0) {
    case62 = load_image("rouge.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case62,screen); 
     modif=1;
} 
if (pos==62 && strcmp(joueuractuel, "bleu") == 0) {
    case62 = load_image("bleu.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case62,screen);  
      modif=1; 
} 
if (pos==62 && strcmp(joueuractuel, "blanc") == 0) {
    case62 = load_image("blanc.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case62,screen); 
}
if (pos==63 && strcmp(joueuractuel, "rouge") == 0) {
    case63 = load_image("rouge.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case63,screen); 
     modif=1;
} 
if (pos==63 && strcmp(joueuractuel, "bleu") == 0) {
    case63 = load_image("bleu.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case63,screen);  
      modif=1; 
} 
if (pos==63 && strcmp(joueuractuel, "blanc") == 0) {
    case63 = load_image("blanc.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case63,screen); 
}
if (pos==64 && strcmp(joueuractuel, "rouge") == 0) {
    case64 = load_image("rouge.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case64,screen); 
     modif=1;
} 
if (pos==64 && strcmp(joueuractuel, "bleu") == 0) {
    case64 = load_image("bleu.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case64,screen);  
      modif=1; 
} 
if (pos==64 && strcmp(joueuractuel, "blanc") == 0) {
    case64 = load_image("blanc.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case64,screen); 
}
if (pos==65 && strcmp(joueuractuel, "rouge") == 0) {
    case65 = load_image("rouge.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case65,screen); 
     modif=1;
} 
if (pos==65 && strcmp(joueuractuel, "bleu") == 0) {
    case65 = load_image("bleu.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case65,screen);  
      modif=1; 
} 
if (pos==65 && strcmp(joueuractuel, "blanc") == 0) {
    case65 = load_image("blanc.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case65,screen); 
}
if (pos==66 && strcmp(joueuractuel, "rouge") == 0) {
    case66 = load_image("rouge.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case66,screen); 
     modif=1;
} 
if (pos==66 && strcmp(joueuractuel, "bleu") == 0) {
    case66 = load_image("bleu.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case66,screen);  
      modif=1; 
} 
if (pos==66 && strcmp(joueuractuel, "blanc") == 0) {
    case66 = load_image("blanc.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case66,screen); 
}
if (pos==67 && strcmp(joueuractuel, "rouge") == 0) {
    case67 = load_image("rouge.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case67,screen); 
     modif=1;
} 
if (pos==67 && strcmp(joueuractuel, "bleu") == 0) {
    case67 = load_image("bleu.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case67,screen);  
      modif=1; 
} 
if (pos==67 && strcmp(joueuractuel, "blanc") == 0) {
    case67 = load_image("blanc.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case67,screen); 
}
if (pos==68 && strcmp(joueuractuel, "rouge") == 0) {
    case68 = load_image("rouge.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case68,screen); 
     modif=1;
} 
if (pos==68 && strcmp(joueuractuel, "bleu") == 0) {
    case68 = load_image("bleu.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case68,screen);  
      modif=1; 
} 
if (pos==68 && strcmp(joueuractuel, "blanc") == 0) {
    case68 = load_image("blanc.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case68,screen); 
}
if (pos==69 && strcmp(joueuractuel, "rouge") == 0) {
    case69 = load_image("rouge.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case69,screen); 
     modif=1;
} 
if (pos==69 && strcmp(joueuractuel, "bleu") == 0) {
    case69 = load_image("bleu.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case69,screen);  
      modif=1; 
} 
if (pos==69 && strcmp(joueuractuel, "blanc") == 0) {
    case69 = load_image("blanc.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case69,screen); 
}
if (pos==70 && strcmp(joueuractuel, "rouge") == 0) {
    case70 = load_image("rouge.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case70,screen); 
     modif=1;
} 
if (pos==70 && strcmp(joueuractuel, "bleu") == 0) {
    case70 = load_image("bleu.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case70,screen);  
      modif=1; 
} 
if (pos==70 && strcmp(joueuractuel, "blanc") == 0) {
    case70 = load_image("blanc.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case70,screen); 
}
if (pos==71 && strcmp(joueuractuel, "rouge") == 0) {
    case71 = load_image("rouge.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case71,screen); 
     modif=1;
} 
if (pos==71 && strcmp(joueuractuel, "bleu") == 0) {
    case71 = load_image("bleu.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case71,screen);  
      modif=1; 
} 
if (pos==71 && strcmp(joueuractuel, "blanc") == 0) {
    case71 = load_image("blanc.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case71,screen); 
}
if (pos==72 && strcmp(joueuractuel, "rouge") == 0) {
    case72 = load_image("rouge.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case72,screen); 
     modif=1;
} 
if (pos==72 && strcmp(joueuractuel, "bleu") == 0) {
    case72 = load_image("bleu.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case72,screen);  
      modif=1; 
} 
if (pos==72 && strcmp(joueuractuel, "blanc") == 0) {
    case72 = load_image("blanc.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case72,screen); 
}
if (pos==73 && strcmp(joueuractuel, "rouge") == 0) {
    case73 = load_image("rouge.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case73,screen); 
     modif=1;
} 
if (pos==73 && strcmp(joueuractuel, "bleu") == 0) {
    case73 = load_image("bleu.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case73,screen);  
      modif=1; 
} 
if (pos==73 && strcmp(joueuractuel, "blanc") == 0) {
    case73 = load_image("blanc.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case73,screen); 
}
if (pos==74 && strcmp(joueuractuel, "rouge") == 0) {
    case74 = load_image("rouge.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case74,screen); 
     modif=1;
} 
if (pos==74 && strcmp(joueuractuel, "bleu") == 0) {
    case74 = load_image("bleu.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case74,screen);  
      modif=1; 
} 
if (pos==74 && strcmp(joueuractuel, "blanc") == 0) {
    case74 = load_image("blanc.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case74,screen); 
}
if (pos==75 && strcmp(joueuractuel, "rouge") == 0) {
    case75 = load_image("rouge.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case75,screen); 
     modif=1;
} 
if (pos==75 && strcmp(joueuractuel, "bleu") == 0) {
    case75 = load_image("bleu.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case75,screen);  
      modif=1; 
} 
if (pos==75 && strcmp(joueuractuel, "blanc") == 0) {
    case75 = load_image("blanc.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case75,screen); 
}
if (pos==76 && strcmp(joueuractuel, "rouge") == 0) {
    case76 = load_image("rouge.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case76,screen); 
     modif=1;
} 
if (pos==76 && strcmp(joueuractuel, "bleu") == 0) {
    case76 = load_image("bleu.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case76,screen);  
      modif=1; 
} 
if (pos==76 && strcmp(joueuractuel, "blanc") == 0) {
    case76 = load_image("blanc.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case76,screen); 
}
if (pos==77 && strcmp(joueuractuel, "rouge") == 0) {
    case77 = load_image("rouge.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case77,screen); 
     modif=1;
} 
if (pos==77 && strcmp(joueuractuel, "bleu") == 0) {
    case77 = load_image("bleu.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case77,screen);  
      modif=1; 
} 
if (pos==77 && strcmp(joueuractuel, "blanc") == 0) {
    case77 = load_image("blanc.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case77,screen); 
}
if (pos==78 && strcmp(joueuractuel, "rouge") == 0) {
    case78 = load_image("rouge.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case78,screen); 
     modif=1;
} 
if (pos==78 && strcmp(joueuractuel, "bleu") == 0) {
    case78 = load_image("bleu.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case78,screen);  
      modif=1; 
} 
if (pos==78 && strcmp(joueuractuel, "blanc") == 0) {
    case78 = load_image("blanc.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case78,screen); 
}
if (pos==79 && strcmp(joueuractuel, "rouge") == 0) {
    case79 = load_image("rouge.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case79,screen); 
     modif=1;
} 
if (pos==79 && strcmp(joueuractuel, "bleu") == 0) {
    case79 = load_image("bleu.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case79,screen);  
      modif=1; 
} 
if (pos==79 && strcmp(joueuractuel, "blanc") == 0) {
    case79 = load_image("blanc.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case79,screen); 
}
if (pos==80 && strcmp(joueuractuel, "rouge") == 0) {
    case80 = load_image("rouge.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case80,screen); 
     modif=1;
} 
if (pos==80 && strcmp(joueuractuel, "bleu") == 0) {
    case80 = load_image("bleu.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case80,screen);  
      modif=1; 
} 
if (pos==80 && strcmp(joueuractuel, "blanc") == 0) {
    case80 = load_image("blanc.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case80,screen); 
}
if (pos==81 && strcmp(joueuractuel, "rouge") == 0) {
    case81 = load_image("rouge.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case81,screen); 
     modif=1;
} 
if (pos==81 && strcmp(joueuractuel, "bleu") == 0) {
    case81 = load_image("bleu.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case81,screen);  
      modif=1; 
} 
if (pos==81 && strcmp(joueuractuel, "blanc") == 0) {
    case81 = load_image("blanc.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case81,screen); 
}
if (pos==82 && strcmp(joueuractuel, "rouge") == 0) {
    case82 = load_image("rouge.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case82,screen); 
     modif=1;
} 
if (pos==82 && strcmp(joueuractuel, "bleu") == 0) {
    case82 = load_image("bleu.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case82,screen);  
      modif=1; 
} 
if (pos==82 && strcmp(joueuractuel, "blanc") == 0) {
    case82 = load_image("blanc.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case82,screen); 
}
if (pos==83 && strcmp(joueuractuel, "rouge") == 0) {
    case83 = load_image("rouge.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case83,screen); 
     modif=1;
} 
if (pos==83 && strcmp(joueuractuel, "bleu") == 0) {
    case83 = load_image("bleu.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case83,screen);  
      modif=1; 
} 
if (pos==83 && strcmp(joueuractuel, "blanc") == 0) {
    case83 = load_image("blanc.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case83,screen); 
}
if (pos==84 && strcmp(joueuractuel, "rouge") == 0) {
    case84 = load_image("rouge.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case84,screen); 
     modif=1;
} 
if (pos==84 && strcmp(joueuractuel, "bleu") == 0) {
    case84 = load_image("bleu.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case84,screen);  
      modif=1; 
} 
if (pos==84 && strcmp(joueuractuel, "blanc") == 0) {
    case84 = load_image("blanc.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case84,screen); 
}
if (pos==85 && strcmp(joueuractuel, "rouge") == 0) {
    case85 = load_image("rouge.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case85,screen); 
     modif=1;
} 
if (pos==85 && strcmp(joueuractuel, "bleu") == 0) {
    case85 = load_image("bleu.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case85,screen);  
      modif=1; 
} 
if (pos==85 && strcmp(joueuractuel, "blanc") == 0) {
    case85 = load_image("blanc.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case85,screen); 
}
if (pos==86 && strcmp(joueuractuel, "rouge") == 0) {
    case86 = load_image("rouge.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case86,screen); 
     modif=1;
} 
if (pos==86 && strcmp(joueuractuel, "bleu") == 0) {
    case86 = load_image("bleu.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case86,screen);  
      modif=1; 
} 
if (pos==86 && strcmp(joueuractuel, "blanc") == 0) {
    case86 = load_image("blanc.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case86,screen); 
}
if (pos==87 && strcmp(joueuractuel, "rouge") == 0) {
    case87 = load_image("rouge.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case87,screen); 
     modif=1;
} 
if (pos==87 && strcmp(joueuractuel, "bleu") == 0) {
    case87 = load_image("bleu.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case87,screen);  
      modif=1; 
} 
if (pos==87 && strcmp(joueuractuel, "blanc") == 0) {
    case87 = load_image("blanc.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case87,screen); 
}
if (pos==88 && strcmp(joueuractuel, "rouge") == 0) {
    case88 = load_image("rouge.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case88,screen); 
     modif=1;
} 
if (pos==88 && strcmp(joueuractuel, "bleu") == 0) {
    case88 = load_image("bleu.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case88,screen);  
      modif=1; 
} 
if (pos==88 && strcmp(joueuractuel, "blanc") == 0) {
    case88 = load_image("blanc.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case88,screen); 
}
if (pos==89 && strcmp(joueuractuel, "rouge") == 0) {
    case89 = load_image("rouge.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case89,screen); 
     modif=1;
} 
if (pos==89 && strcmp(joueuractuel, "bleu") == 0) {
    case89 = load_image("bleu.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case89,screen);  
      modif=1; 
} 
if (pos==89 && strcmp(joueuractuel, "blanc") == 0) {
    case89 = load_image("blanc.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case89,screen); 
}
if (pos==90 && strcmp(joueuractuel, "rouge") == 0) {
    case90 = load_image("rouge.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case90,screen); 
     modif=1;
} 
if (pos==90 && strcmp(joueuractuel, "bleu") == 0) {
    case90 = load_image("bleu.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case90,screen);  
      modif=1; 
} 
if (pos==90 && strcmp(joueuractuel, "blanc") == 0) {
    case90 = load_image("blanc.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case90,screen); 
}
if (pos==91 && strcmp(joueuractuel, "rouge") == 0) {
    case91 = load_image("rouge.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case91,screen); 
     modif=1;
} 
if (pos==91 && strcmp(joueuractuel, "bleu") == 0) {
    case91 = load_image("bleu.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case91,screen);  
      modif=1; 
} 
if (pos==91 && strcmp(joueuractuel, "blanc") == 0) {
    case91 = load_image("blanc.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case91,screen); 
}
if (pos==92 && strcmp(joueuractuel, "rouge") == 0) {
    case92 = load_image("rouge.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case92,screen); 
     modif=1;
} 
if (pos==92 && strcmp(joueuractuel, "bleu") == 0) {
    case92 = load_image("bleu.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case92,screen);  
      modif=1; 
} 
if (pos==92 && strcmp(joueuractuel, "blanc") == 0) {
    case92 = load_image("blanc.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case92,screen); 
}
if (pos==93 && strcmp(joueuractuel, "rouge") == 0) {
    case93 = load_image("rouge.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case93,screen); 
     modif=1;
} 
if (pos==93 && strcmp(joueuractuel, "bleu") == 0) {
    case93 = load_image("bleu.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case93,screen);  
      modif=1; 
} 
if (pos==93 && strcmp(joueuractuel, "blanc") == 0) {
    case93 = load_image("blanc.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case93,screen); 
}
if (pos==94 && strcmp(joueuractuel, "rouge") == 0) {
    case94 = load_image("rouge.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case94,screen); 
     modif=1;
} 
if (pos==94 && strcmp(joueuractuel, "bleu") == 0) {
    case94 = load_image("bleu.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case94,screen);  
      modif=1; 
} 
if (pos==94 && strcmp(joueuractuel, "blanc") == 0) {
    case94 = load_image("blanc.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case94,screen); 
}
if (pos==95 && strcmp(joueuractuel, "rouge") == 0) {
    case95 = load_image("rouge.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case95,screen); 
     modif=1;
} 
if (pos==95 && strcmp(joueuractuel, "bleu") == 0) {
    case95 = load_image("bleu.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case95,screen);  
      modif=1; 
} 
if (pos==95 && strcmp(joueuractuel, "blanc") == 0) {
    case95 = load_image("blanc.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case95,screen); 
}
if (pos==96 && strcmp(joueuractuel, "rouge") == 0) {
    case96 = load_image("rouge.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case96,screen); 
     modif=1;
} 
if (pos==96 && strcmp(joueuractuel, "bleu") == 0) {
    case96 = load_image("bleu.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case96,screen);  
      modif=1; 
} 
if (pos==96 && strcmp(joueuractuel, "blanc") == 0) {
    case96 = load_image("blanc.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case96,screen); 
}
if (pos==97 && strcmp(joueuractuel, "rouge") == 0) {
    case97 = load_image("rouge.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case97,screen); 
     modif=1;
} 
if (pos==97 && strcmp(joueuractuel, "bleu") == 0) {
    case97 = load_image("bleu.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case97,screen);  
      modif=1; 
} 
if (pos==97 && strcmp(joueuractuel, "blanc") == 0) {
    case97 = load_image("blanc.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case97,screen); 
}
if (pos==98 && strcmp(joueuractuel, "rouge") == 0) {
    case98 = load_image("rouge.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case98,screen); 
     modif=1;
} 
if (pos==98 && strcmp(joueuractuel, "bleu") == 0) {
    case98 = load_image("bleu.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case98,screen);  
      modif=1; 
} 
if (pos==98 && strcmp(joueuractuel, "blanc") == 0) {
    case98 = load_image("blanc.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case98,screen); 
}
if (pos==99 && strcmp(joueuractuel, "rouge") == 0) {
    case99 = load_image("rouge.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case99,screen); 
     modif=1;
} 
if (pos==99 && strcmp(joueuractuel, "bleu") == 0) {
    case99 = load_image("bleu.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case99,screen);  
      modif=1; 
} 
if (pos==99 && strcmp(joueuractuel, "blanc") == 0) {
    case99 = load_image("blanc.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case99,screen); 
}
if (pos==100 && strcmp(joueuractuel, "rouge") == 0) {
    case100 = load_image("rouge.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case100,screen); 
     modif=1;
} 
if (pos==100 && strcmp(joueuractuel, "bleu") == 0) {
    case100 = load_image("bleu.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case100,screen);  
      modif=1; 
} 
if (pos==100 && strcmp(joueuractuel, "blanc") == 0) {
    case100 = load_image("blanc.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case100,screen); 
}
if (pos==101 && strcmp(joueuractuel, "rouge") == 0) {
    case101 = load_image("rouge.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case101,screen); 
     modif=1;
} 
if (pos==101 && strcmp(joueuractuel, "bleu") == 0) {
    case101 = load_image("bleu.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case101,screen);  
      modif=1; 
} 
if (pos==101 && strcmp(joueuractuel, "blanc") == 0) {
    case101 = load_image("blanc.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case101,screen); 
}
if (pos==102 && strcmp(joueuractuel, "rouge") == 0) {
    case102 = load_image("rouge.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case102,screen); 
     modif=1;
} 
if (pos==102 && strcmp(joueuractuel, "bleu") == 0) {
    case102 = load_image("bleu.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case102,screen);  
      modif=1; 
} 
if (pos==102 && strcmp(joueuractuel, "blanc") == 0) {
    case102 = load_image("blanc.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case102,screen); 
}
if (pos==103 && strcmp(joueuractuel, "rouge") == 0) {
    case103 = load_image("rouge.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case103,screen); 
     modif=1;
} 
if (pos==103 && strcmp(joueuractuel, "bleu") == 0) {
    case103 = load_image("bleu.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case103,screen);  
      modif=1; 
} 
if (pos==103 && strcmp(joueuractuel, "blanc") == 0) {
    case103 = load_image("blanc.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case103,screen); 
}
if (pos==104 && strcmp(joueuractuel, "rouge") == 0) {
    case104 = load_image("rouge.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case104,screen); 
     modif=1;
} 
if (pos==104 && strcmp(joueuractuel, "bleu") == 0) {
    case104 = load_image("bleu.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case104,screen);  
      modif=1; 
} 
if (pos==104 && strcmp(joueuractuel, "blanc") == 0) {
    case104 = load_image("blanc.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case104,screen); 
}
if (pos==105 && strcmp(joueuractuel, "rouge") == 0) {
    case105 = load_image("rouge.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case105,screen); 
     modif=1;
} 
if (pos==105 && strcmp(joueuractuel, "bleu") == 0) {
    case105 = load_image("bleu.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case105,screen);  
      modif=1; 
} 
if (pos==105 && strcmp(joueuractuel, "blanc") == 0) {
    case105 = load_image("blanc.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case105,screen); 
}
if (pos==106 && strcmp(joueuractuel, "rouge") == 0) {
    case106 = load_image("rouge.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case106,screen); 
     modif=1;
} 
if (pos==106 && strcmp(joueuractuel, "bleu") == 0) {
    case106 = load_image("bleu.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case106,screen);  
      modif=1; 
} 
if (pos==106 && strcmp(joueuractuel, "blanc") == 0) {
    case106 = load_image("blanc.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case106,screen); 
}
if (pos==107 && strcmp(joueuractuel, "rouge") == 0) {
    case107 = load_image("rouge.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case107,screen); 
     modif=1;
} 
if (pos==107 && strcmp(joueuractuel, "bleu") == 0) {
    case107 = load_image("bleu.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case107,screen);  
      modif=1; 
} 
if (pos==107 && strcmp(joueuractuel, "blanc") == 0) {
    case107 = load_image("blanc.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case107,screen); 
}
if (pos==108 && strcmp(joueuractuel, "rouge") == 0) {
    case108 = load_image("rouge.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case108,screen); 
     modif=1;
} 
if (pos==108 && strcmp(joueuractuel, "bleu") == 0) {
    case108 = load_image("bleu.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case108,screen);  
      modif=1; 
} 
if (pos==108 && strcmp(joueuractuel, "blanc") == 0) {
    case108 = load_image("blanc.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case108,screen); 
}
if (pos==109 && strcmp(joueuractuel, "rouge") == 0) {
    case109 = load_image("rouge.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case109,screen); 
     modif=1;
} 
if (pos==109 && strcmp(joueuractuel, "bleu") == 0) {
    case109 = load_image("bleu.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case109,screen);  
      modif=1; 
} 
if (pos==109 && strcmp(joueuractuel, "blanc") == 0) {
    case109 = load_image("blanc.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case109,screen); 
}
if (pos==110 && strcmp(joueuractuel, "rouge") == 0) {
    case110 = load_image("rouge.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case110,screen); 
     modif=1;
} 
if (pos==110 && strcmp(joueuractuel, "bleu") == 0) {
    case110 = load_image("bleu.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case110,screen);  
      modif=1; 
} 
if (pos==110 && strcmp(joueuractuel, "blanc") == 0) {
    case110 = load_image("blanc.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case110,screen); 
}
if (pos==111 && strcmp(joueuractuel, "rouge") == 0) {
    case111 = load_image("rouge.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case111,screen); 
     modif=1;
} 
if (pos==111 && strcmp(joueuractuel, "bleu") == 0) {
    case111 = load_image("bleu.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case111,screen);  
      modif=1; 
} 
if (pos==111 && strcmp(joueuractuel, "blanc") == 0) {
    case111 = load_image("blanc.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case111,screen); 
}
if (pos==112 && strcmp(joueuractuel, "rouge") == 0) {
    case112 = load_image("rouge.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case112,screen); 
     modif=1;
} 
if (pos==112 && strcmp(joueuractuel, "bleu") == 0) {
    case112 = load_image("bleu.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case112,screen);  
      modif=1; 
} 
if (pos==112 && strcmp(joueuractuel, "blanc") == 0) {
    case112 = load_image("blanc.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case112,screen); 
}
if (pos==113 && strcmp(joueuractuel, "rouge") == 0) {
    case113 = load_image("rouge.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case113,screen); 
     modif=1;
} 
if (pos==113 && strcmp(joueuractuel, "bleu") == 0) {
    case113 = load_image("bleu.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case113,screen);  
      modif=1; 
} 
if (pos==113 && strcmp(joueuractuel, "blanc") == 0) {
    case113 = load_image("blanc.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case113,screen); 
}
if (pos==114 && strcmp(joueuractuel, "rouge") == 0) {
    case114 = load_image("rouge.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case114,screen); 
     modif=1;
} 
if (pos==114 && strcmp(joueuractuel, "bleu") == 0) {
    case114 = load_image("bleu.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case114,screen);  
      modif=1; 
} 
if (pos==114 && strcmp(joueuractuel, "blanc") == 0) {
    case114 = load_image("blanc.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case114,screen); 
}
if (pos==115 && strcmp(joueuractuel, "rouge") == 0) {
    case115 = load_image("rouge.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case115,screen); 
     modif=1;
} 
if (pos==115 && strcmp(joueuractuel, "bleu") == 0) {
    case115 = load_image("bleu.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case115,screen);  
      modif=1; 
} 
if (pos==115 && strcmp(joueuractuel, "blanc") == 0) {
    case115 = load_image("blanc.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case115,screen); 
}
if (pos==116 && strcmp(joueuractuel, "rouge") == 0) {
    case116 = load_image("rouge.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case116,screen); 
     modif=1;
} 
if (pos==116 && strcmp(joueuractuel, "bleu") == 0) {
    case116 = load_image("bleu.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case116,screen);  
      modif=1; 
} 
if (pos==116 && strcmp(joueuractuel, "blanc") == 0) {
    case116 = load_image("blanc.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case116,screen); 
}
if (pos==117 && strcmp(joueuractuel, "rouge") == 0) {
    case117 = load_image("rouge.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case117,screen); 
     modif=1;
} 
if (pos==117 && strcmp(joueuractuel, "bleu") == 0) {
    case117 = load_image("bleu.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case117,screen);  
      modif=1; 
} 
if (pos==117 && strcmp(joueuractuel, "blanc") == 0) {
    case117 = load_image("blanc.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case117,screen); 
}
if (pos==118 && strcmp(joueuractuel, "rouge") == 0) {
    case118 = load_image("rouge.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case118,screen); 
     modif=1;
} 
if (pos==118 && strcmp(joueuractuel, "bleu") == 0) {
    case118 = load_image("bleu.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case118,screen);  
      modif=1; 
} 
if (pos==118 && strcmp(joueuractuel, "blanc") == 0) {
    case118 = load_image("blanc.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case118,screen); 
}
if (pos==119 && strcmp(joueuractuel, "rouge") == 0) {
    case119 = load_image("rouge.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case119,screen); 
     modif=1;
} 
if (pos==119 && strcmp(joueuractuel, "bleu") == 0) {
    case119 = load_image("bleu.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case119,screen);  
      modif=1; 
} 
if (pos==119 && strcmp(joueuractuel, "blanc") == 0) {
    case119 = load_image("blanc.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case119,screen); 
}
if (pos==120 && strcmp(joueuractuel, "rouge") == 0) {
    case120 = load_image("rouge.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case120,screen); 
     modif=1;
} 
if (pos==120 && strcmp(joueuractuel, "bleu") == 0) {
    case120 = load_image("bleu.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case120,screen);  
      modif=1; 
} 
if (pos==120 && strcmp(joueuractuel, "blanc") == 0) {
    case120 = load_image("blanc.bmp"); 
    apply_surface(xPos+49+(pos%11)*26+(pos/11)*13,yPos+57+(pos/11)*19,case120,screen); 
}

return modif;
}

void free_cases() {

	SDL_FreeSurface( case0 );

	SDL_FreeSurface( case1 );

	SDL_FreeSurface( case2 );

	SDL_FreeSurface( case3 );

	SDL_FreeSurface( case4 );

	SDL_FreeSurface( case5 );

	SDL_FreeSurface( case6 );

	SDL_FreeSurface( case7 );

	SDL_FreeSurface( case8 );

	SDL_FreeSurface( case9 );

	SDL_FreeSurface( case10 );

	SDL_FreeSurface( case11 );

	SDL_FreeSurface( case12 );

	SDL_FreeSurface( case13 );

	SDL_FreeSurface( case14 );

	SDL_FreeSurface( case15 );

	SDL_FreeSurface( case16 );

	SDL_FreeSurface( case17 );

	SDL_FreeSurface( case18 );

	SDL_FreeSurface( case19 );

	SDL_FreeSurface( case20 );

	SDL_FreeSurface( case21 );

	SDL_FreeSurface( case22 );

	SDL_FreeSurface( case23 );

	SDL_FreeSurface( case24 );

	SDL_FreeSurface( case25 );

	SDL_FreeSurface( case26 );

	SDL_FreeSurface( case27 );

	SDL_FreeSurface( case28 );

	SDL_FreeSurface( case29 );

	SDL_FreeSurface( case30 );

	SDL_FreeSurface( case31 );

	SDL_FreeSurface( case32 );

	SDL_FreeSurface( case33 );

	SDL_FreeSurface( case34 );

	SDL_FreeSurface( case35 );

	SDL_FreeSurface( case36 );

	SDL_FreeSurface( case37 );

	SDL_FreeSurface( case38 );

	SDL_FreeSurface( case39 );

	SDL_FreeSurface( case40 );

	SDL_FreeSurface( case41 );

	SDL_FreeSurface( case42 );

	SDL_FreeSurface( case43 );

	SDL_FreeSurface( case44 );

	SDL_FreeSurface( case45 );

	SDL_FreeSurface( case46 );

	SDL_FreeSurface( case47 );

	SDL_FreeSurface( case48 );

	SDL_FreeSurface( case49 );

	SDL_FreeSurface( case50 );

	SDL_FreeSurface( case51 );

	SDL_FreeSurface( case52 );

	SDL_FreeSurface( case53 );

	SDL_FreeSurface( case54 );

	SDL_FreeSurface( case55 );

	SDL_FreeSurface( case56 );

	SDL_FreeSurface( case57 );

	SDL_FreeSurface( case58 );

	SDL_FreeSurface( case59 );

	SDL_FreeSurface( case60 );

	SDL_FreeSurface( case61 );

	SDL_FreeSurface( case62 );

	SDL_FreeSurface( case63 );

	SDL_FreeSurface( case64 );

	SDL_FreeSurface( case65 );

	SDL_FreeSurface( case66 );

	SDL_FreeSurface( case67 );

	SDL_FreeSurface( case68 );

	SDL_FreeSurface( case69 );

	SDL_FreeSurface( case70 );

	SDL_FreeSurface( case71 );

	SDL_FreeSurface( case72 );

	SDL_FreeSurface( case73 );

	SDL_FreeSurface( case74 );

	SDL_FreeSurface( case75 );

	SDL_FreeSurface( case76 );

	SDL_FreeSurface( case77 );

	SDL_FreeSurface( case78 );

	SDL_FreeSurface( case79 );

	SDL_FreeSurface( case80 );

	SDL_FreeSurface( case81 );

	SDL_FreeSurface( case82 );

	SDL_FreeSurface( case83 );

	SDL_FreeSurface( case84 );

	SDL_FreeSurface( case85 );

	SDL_FreeSurface( case86 );

	SDL_FreeSurface( case87 );

	SDL_FreeSurface( case88 );

	SDL_FreeSurface( case89 );

	SDL_FreeSurface( case90 );

	SDL_FreeSurface( case91 );

	SDL_FreeSurface( case92 );

	SDL_FreeSurface( case93 );

	SDL_FreeSurface( case94 );

	SDL_FreeSurface( case95 );

	SDL_FreeSurface( case96 );

	SDL_FreeSurface( case97 );

	SDL_FreeSurface( case98 );

	SDL_FreeSurface( case99 );

	SDL_FreeSurface( case100 );

	SDL_FreeSurface( case101 );

	SDL_FreeSurface( case102 );

	SDL_FreeSurface( case103 );

	SDL_FreeSurface( case104 );

	SDL_FreeSurface( case105 );

	SDL_FreeSurface( case106 );

	SDL_FreeSurface( case107 );

	SDL_FreeSurface( case108 );

	SDL_FreeSurface( case109 );

	SDL_FreeSurface( case110 );

	SDL_FreeSurface( case111 );

	SDL_FreeSurface( case112 );

	SDL_FreeSurface( case113 );

	SDL_FreeSurface( case114 );

	SDL_FreeSurface( case115 );

	SDL_FreeSurface( case116 );

	SDL_FreeSurface( case117 );

	SDL_FreeSurface( case118 );

	SDL_FreeSurface( case119 );

	SDL_FreeSurface( case120 );
}

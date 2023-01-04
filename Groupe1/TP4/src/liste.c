#include <stdio.h>
#include "liste.h"


void parcours(struct couleur liste_couleurs){
    
    for (int i = 0; i < 10; i++)
    {
        printf("r: %X g: %X b: %X a: %X \n", liste_couleurs[i].rouge, liste_couleurs[i].vert, liste_couleurs[i].bleu, liste_couleurs[i].alpha);
    };
};

int main()  
{
    struct couleur{
        unsigned int rouge;
        unsigned int vert;
        unsigned int bleu;
        unsigned int alpha;
    };

    //définition de la composition des couleurs
    struct couleur blue = {0x00, 0x00, 0xff, 0x01};
    struct couleur brown = {0xa5, 0x2a, 0x2a, 0x01};
    struct couleur coral = {0xff, 0x7f, 0x50, 0x01};
    struct couleur crimson = {0xdc, 0x14, 0x3c, 0x01};
    struct couleur cyan = {0x00, 0xff, 0xff, 0x01};
    struct couleur fuchsia = {0xff, 0x00, 0xff, 0x01};
    struct couleur gainsboro = {0xdc, 0xdc, 0xdc, 0x01};
    struct couleur gold = {0xff, 0xd7, 0x00, 0x01};
    struct couleur green = {0x00, 0x80, 0x00, 0x01};
    struct couleur indigo = {0x4b, 0x00, 0x82, 0x01};

    //définition du tableau
    struct couleur liste_couleurs[10] = {blue, brown, coral, crimson, cyan, fuchsia, gainsboro, gold, green, indigo};

    parcours(liste_couleurs[1]);
};

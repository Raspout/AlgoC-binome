#include <stdio.h>
#include "fichier.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

void lire_fichier(char *nom_de_fichier){
    char content; 
    int fichier, taille;
    fichier = open(nom_de_fichier, O_RDONLY);
    while (1){
        taille = read(fichier, &content, 1);
        if (taille < 1){
            break;
        }
        printf("%c", content);
    }
    printf("\n");
    close(fichier);
}

void ecrire_dans_fichier(char *nom_de_fichier, char *message){
    int fichier;
    fichier = open(nom_de_fichier, O_CREAT|O_WRONLY, S_IRUSR|S_IWUSR);
    write(fichier, message, sizeof(message));
    close(fichier);
}


#include <stdio.h>
#include <dirent.h>
#include "repertoire.h"

void lire_dossier (char * chemin)
{
    //ouverture du dossier indiqué dans chemin
    DIR *rep = opendir (chemin); 
    
    //Si rep n'est pas nul, on continue de lister
    if (rep != NULL) 
    {
        struct dirent *ent;
        
        //Parcours de dossier tant qu'ils existent
        while ((ent = readdir (rep)) != NULL) 
        {
            //Liste les dossiers
            printf ("%s\n", ent->d_name); 
        }
        
        //fermeture du repertoire
        closedir (rep);
    }
    return 0;
}

void lire_dossier_recursif(char * chemin){
    DIR *rep;
    struct dirent *ent;
    rep = opendir(chemin);
    if (rep) {
        while ((ent = readdir(rep)) != NULL) {

            //Instancie le chemin
            char chemin[200];
            
            //compteur dans le print
            snprintf(chemin, sizeof(chemin), "%s/%s", nom, ent->d_name);
            struct stat s;

            // Affiche le répertoire récursivement
            if (stat(chemin, &s) == 0 && S_ISDIR(s.st_mode)) {
                
                //liste le nom du repertoire et appelle la fonction lire_dossier
                printf("%s/%s\n", nom, ent->d_name);
                    lire_dossier_recursif(chemin);
            }
            else {
                // L'élément est un fichier, on l'affiche seulement
                printf("%s/%s\n", nom, ent->d_name);
            }
        }
        //fermeture du répertoire
        closedir(rep);
    }
}

void lire_dossier_iteratif(char * chemin) {
    DIR *rep;
    struct dirent *ent;
    struct stat s;
    char chemin[200];
    const int MAX_TAILLE_PILE = 100;

    // Initialisation de la pile
    char *pile[MAX_TAILLE_PILE];
    int indice_pile = 0;

    pile[indice_pile] = chemin;
    indice_pile++;

    // Association du chemin avec la pile
    while (indice_pile > 0) {
        char *repertoire_courant = pile[indice_pile - 1];
        indice_pile--;

        
        rep = opendir(repertoire_courant);
        if (rep) {
            
            //Parcours le chemin tant qu'il y a du contenu 
            while ((ent = readdir(rep)) != NULL) {
                
                snprintf(chemin, sizeof(chemin), "%s/%s", repertoire_courant, ent->d_name);
                stat(chemin, &s);

                // Ajout de l'élément à la pile 
                if (S_ISDIR(s.st_mode)) {
                        printf("%s/%s\n", chemin, ent->d_name);
                        pile[indice_pile] = strdup(chemin);
                        indice_pile++;
                    }
                }
                else {
                    // L'élément est un fichier, on l'affiche seulement
                    printf("%s/%s\n", repertoire_courant, ent->d_name);
                }
            }
            closedir(rep);
        }
    }
}




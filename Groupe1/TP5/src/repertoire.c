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




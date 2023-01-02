#include <stdio.h>
#include <dirent.h>
#include "repertoire.h"

void lire_dossier (char * chemin)
{
    DIR * rep = opendir (chemin); //ouverture du dossier indiqué dans chemin
    
    if (rep != NULL) //Si rep n'est pas nul, on continue de lister
    {
        struct dirent *ent;
        
        while ((ent = readdir (rep)) != NULL) //Parcours de dossier tant qu'ils existent
        {
            printf ("%s\n", ent->d_name); //Liste les dossiers
        }
        closedir (rep);
    }
    return 0;
}




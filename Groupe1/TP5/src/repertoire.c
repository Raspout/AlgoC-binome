#include <stdio.h>
#include <dirent.h>
#include "repertoire.h"

void lire_dossier (char * chemin)
{
    //ouverture du dossier indiqué dans chemin
    DIR * rep = opendir (chemin); 
    
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




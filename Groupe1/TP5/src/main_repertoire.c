#include <stdio.h>
#include <dirent.h>
#include "repertoire.h"


int main(int argc, char *argv[]){
    char *chemin = argv[1];
    lire_dossier(chemin);
    return 0; 
}

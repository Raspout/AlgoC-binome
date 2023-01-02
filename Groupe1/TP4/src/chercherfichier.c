#include <stdio.h>
#include <string.h>

int recherche(char *motCherche, char *nomFichier) {

    //ouvre le fichier "r" --> read
    FILE* fichier = fopen(nomFichier, "r"); 

    //Si le fichier est nul, retourne une erreur
    if (fichier == NULL) {
        perror("Erreur lors de l'ouverture du fichier");
        return 1;
    }

    //instancie le nombre de ligne
    char ligne[200];
    int nombreLignes = 0;

    // parcours le fichier ligne par ligne en commençant par la ligne 1
    while (fgets(ligne, sizeof(ligne), fichier)) {
        nombreLignes++;

        //créer un compteur à 0
        int count = 0;

        //cherche le mot dans la ligne
        char* p = strstr(ligne, motCherche);

        //compte le nombre de fois où le mot est présent dans la ligne
        while (p) {
        count++;
        p = strstr(p + 1, motCherche);
        }

        //Affichage du résultat si le mot est présent
        if (count > 0) {
        printf("Ligne %d, %d fois\n", nombreLignes, count);
        }
    }

    //fermeture du fichier 
    fclose(fichier);
}

int main(int argc, char * argv[]) {
    
    //on vérifie si on a bien nos 3 arguments
    if(argc != 3){
        printf("erreur: les arguments sont invalides"); 
        return 1; 
    }
    
    char *motCherche = argv[1];
    char *nomFichier = argv[2]; 
    
    recherche(motCherche, nomFichier); 
    
}

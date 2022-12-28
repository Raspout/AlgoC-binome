#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

void ecrire_dans_fichier(char *nom_de_fichier, char *message){
    int fichier, compteur, taille;
    fichier = open(nom_de_fichier, O_CREAT|O_APPEND|O_WRONLY, S_IRUSR|S_IWUSR);
    taille = write(fichier, message, sizeof(message));
    close(fichier);
};

struct etudiant {
    char nom[50];
    char prenom[50];
    char adresse[100];
    char note_C[8];
    char note_sys[8];
};


int main() {
    struct etudiant etudiant[5]; 
    for(int i = 0; i < 5; i++){
        char content[50];
        printf("Nom: "); 
        fgets(content, sizeof(content), stdin);
        int len_content;
        len_content = strlen(content);
        content[(len_content - 1)] = '\0';
        strcpy(etudiant[i].nom, strcat(content, ", "));
        strcpy(etudiant[i].nom, content);
        printf("Prénom: ");
        fgets(content, sizeof(content), stdin);
        strcpy(etudiant[i].prenom, content);
        printf("Adresse: ");
        fgets(content, sizeof(content), stdin);
        strcpy(etudiant[i].adresse, content);
        printf("Note C: ");
        fgets(content, sizeof(content), stdin);
        strcpy(etudiant[i].note_C, content);
        printf("Note Système: ");
        fgets(content, sizeof(content), stdin);
        strcpy(etudiant[i].note_sys, content); 

        printf("%s %s %s %s %s", etudiant[i].nom, etudiant[i].prenom, etudiant[i].adresse, etudiant[i].note_C, etudiant[i].note_sys);

    }
    
    for(int i = 0; i < 5; i++){
        ecrire_dans_fichier("etudiant.txt", etudiant[i].nom);
        ecrire_dans_fichier("etudiant.txt", etudiant[i].prenom);
        ecrire_dans_fichier("etudiant.txt", etudiant[i].adresse);
        ecrire_dans_fichier("etudiant.txt", etudiant[i].note_C);
        ecrire_dans_fichier("etudiant.txt", etudiant[i].note_sys);
    }
    

}

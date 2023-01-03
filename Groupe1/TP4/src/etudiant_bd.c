#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>


void ecrire_dans_fichier(char *nom_de_fichier, char *message){
    int fichier; 
    
    //ouvre le fichier 
    fichier = open(nom_de_fichier, O_CREAT|O_APPEND|O_WRONLY, S_IRUSR|S_IWUSR);
    write(fichier, message, sizeof(message));
    close(fichier);
};

//initialise la structure étudiant
struct etudiant {
    char nom[50];
    char prenom[50];
    char adresse[100];
    char note_C[8];
    char note_sys[8];
};


int main() {
    struct etudiant etudiant[5]; 
    //boucle pour les 5 étudiants
    for(int i = 0; i < 5; i++){
        char content[50];
        
        //entrée de l'utilisateur
        printf("Nom: "); 
        fgets(content, sizeof(content), stdin);
        
        //empêche le "\n"
        int len_content;
        len_content = strlen(content);
        content[(len_content - 1)] = '\0';
        
        //copie l'entrée dans le contenu
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

        //affiche les entrées
        printf("%s %s %s %s %s", etudiant[i].nom, etudiant[i].prenom, etudiant[i].adresse, etudiant[i].note_C, etudiant[i].note_sys);

    }
    
    //pour chaque étudiant, le contenu est copié dans le fichier
    for(int i = 0; i < 5; i++){
        ecrire_dans_fichier("etudiant.txt", etudiant[i].nom);
        ecrire_dans_fichier("etudiant.txt", etudiant[i].prenom);
        ecrire_dans_fichier("etudiant.txt", etudiant[i].adresse);
        ecrire_dans_fichier("etudiant.txt", etudiant[i].note_C);
        ecrire_dans_fichier("etudiant.txt", etudiant[i].note_sys);
    }
    

}

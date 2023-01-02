#include <stdio.h>


//déclaration tableau 

char tableau[10][200] = {
        {"Lorem ipsum dolor sit amet"},
        {"Consectetur adipiscing elit"},
        {"Sed do eiusmod tempor incididunt ut labore et dolore magna aliqua"},
        {"Ut enim ad minim veniam"}, 
        {"Quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat"},
        {"Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur"},
        {"Excepteur sint occaecat cupidatat non proident"},
        {"Sunt in culpa qui officia deserunt mollit anim id est laborum"},
        {"Hello world"}, 
        {"Ceci est une phrase"},
        };
        
//fonction de hash 
unsigned long hash(char *str)
{
    unsigned int hash = 0;
    int c;

    while (c = *str++)
        hash += c;

    return hash;
}

//Parcours et affiche le tableau

int affichageTableau() {
    for (int i = 0; i < 10; i++) {
        printf("%s \n", tableau[i]);
    }

    return 0;
}

//Parcours le tableau et compare le hash avec le paramètre utilisateur

int recherche(unsigned long phraseHash){
    
    for (int i = 0; i < 10; i++) {
        unsigned long tabHash = hash(tableau[i]); 
        if(tabHash == phraseHash){
            printf("Votre phrase est incluse dans le tableau"); 
            return 0;
        }
    }
    
    printf("Votre phrase n'est pas dans le tableau"); 
    
    return 0;
    
}

int main(){

    affichageTableau(); 
    
    char phrase[200]; 
    
    //entrée de l'utilisateur
    printf ("Entrez votre phrase: ");
    fgets(phrase, sizeof(phrase), stdin);
    //empêche le "\n"
    int len_phrase;
    len_phrase = strlen(phrase);
    phrase[(len_phrase - 1)] = '\0';
    
    unsigned long phraseHash = hash(phrase); 
    
    recherche(phraseHash); 
  
}

#include <stdio.h>

int main()
{
    int nombre1 = 0; 
    int nombre2 = 0;
    int nombre3 = 0;
    printf("condition ET : \n");
    while (nombre1 != 1000){
        //calcul si le nombre est divisible par 2 et 15
       if( (nombre1 % 2 == 0) && (nombre1 % 15 == 0)) {
        printf("%d\n", nombre1);
        }
        nombre1 = nombre1 + 1; 
    }
    printf("contion OU : \n");
    while (nombre2 != 1000){
        //calcul si le nombre est divisible par 103 ou 107
       if( (nombre2 % 103 == 0) || (nombre2 % 107 == 0)) {
        printf("%d\n", nombre2);
        }
        nombre2 = nombre2 + 1; 
    }
    printf("condition OU,NON : \n");
    while (nombre3 != 1000){
        //calcul si le nombre est divisible par 7 ou 5 mais pas par 3
        if( ((nombre3 % 7 == 0) || (nombre3 % 5 == 0)) && (nombre3 % 3 !=0)) {
        printf("%d\n", nombre3);
        }
        nombre3 = nombre3 + 1;
    }
    return 0;
}

#include <stdio.h>
#include "operator.h"

int main()
{
    char op; 
    int num1, num2;
   
    //entrée de l'utilisateur
    printf("Calcule: ");
    scanf("%c", &op);
   
    printf("Numéro1 : ");
    scanf("%d", &num1);
      
    printf("Numéro2 : ");
    scanf("%d", &num2);
   
    //opérations en utilisant "op" opération à utiliser et "num1", "num2" donné par l'utilisateur
    switch (op)
    {
    case '+':
        printf("addition : %i \n", somme(num1, num2));
        break;

    case '-':
        printf("soustraction : %i \n", difference(num1, num2));
        break;
    
    case '*':
        printf("multiplication : %i \n", produit(num1, num2));
        break;

    case '/':
        printf("division : %i \n", quotient(num1, num2));
        break;

    case '%':
        printf("modulo : %i \n", modulo(num1, num2));
        break;

    case '&':
        printf("et : %i \n", et(num1, num2));
        break;

    case '|':
        printf("ou : %i \n", ou(num1, num2));
        break;

    case '~':
        printf("négation : %i \n", negation(num1));
        break;

    default:
        break;
    }
   
    return 0;
}

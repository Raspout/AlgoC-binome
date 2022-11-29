#include <stdio.h>

int num1 = 3;
int num2 = 4;

int somme(){
    printf("addition : %u \n", num1+num2);
}

int difference(){
    printf("soustraction : %u \n", num1-num2);
}

int produit(){
    printf("multiplication : %u\n", num1*num2);
}

int quotient(){
    printf("quotient : %u\n", num1/num2);
}

int modulo(){
    printf("modulo : %u\n", num1%num2);
}

int et(){
    printf("ET : %u\n", num1 && num2);
}

int ou(){
    printf("OU : %u\n", num1 || num2);
}

int negation(){
    printf("négation : %u\n", - num1); 
}

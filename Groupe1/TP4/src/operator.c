#include <stdio.h>
#include "operator.h"

int main()
{

    char op = '&';
    
    switch (op)
    {
    case '+':
        somme();
        break;

    case '-':
        difference();
        break;
    
    case '*':
        produit();
        break;

    case '/':
        quotient();
        break;

    case '%':
        modulo();
        break;

    case '&':
        et();
        break;

    case '|':
        ou();
        break;

    case '~':
        negation();
        break;

    default:
        break;
    }
}

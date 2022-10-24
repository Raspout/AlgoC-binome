#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num1 = 16;
    int num2 = 0;
    char op = '~';
    switch (op)
    {
    case '+':
        printf("addition : %u \n", num1+num2);
        break;
    case '-':
        printf("soustraction : %u \n", num1-num2);
        break;
    case '*':
        printf("multiplication : %u\n", num1*num2);
        break;
    case '/':
        printf("division : %u\n", num1/num2);
        break;
    case '%':
        printf("modulo : %u\n", num1%num2);
        break;
    case '&':
        printf("ET : %u\n", num1 && num2);
        break;
    case '|':
        printf("OU : %u\n", num1 || num2);
        break;
    case '~':
        printf("negation num1 : %u\n", num1 =! num2);
        break;
    default:
        break;
    }
    return 0;
}

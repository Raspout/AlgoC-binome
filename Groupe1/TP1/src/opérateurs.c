#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a = 16;
    int b = 3;

    printf("a = %u\n", a);
    printf("b = %u\n\n", b);

    printf("addition : %u \n", a+b);
    printf("soustraction : %u \n", a-b);
    printf("multiplication : %u\n", a*b);
    printf("division : %u\n", a/b);
    printf("modulo : %u\n", a%b);
    return 0;
}


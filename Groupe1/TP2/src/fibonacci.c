#include <stdio.h>

int main()
{
    int n = 14;
    int U0 = 0;
    int U1 = 1;
    int Un;
    int i;

    printf("%d\n", U0);
    printf("%d\n", U1);

    for (i = 0; i < (n - 1); i++)
    {
        Un = U1 + U0;
        U0 = U1;
        U1 = Un;
        printf("%d\n", Un);
    }
    
    
    return 0;
}

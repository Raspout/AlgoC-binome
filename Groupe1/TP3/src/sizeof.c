#include <stdio.h>

int main()
{
    printf("sizeof(int)         : %ld\n", sizeof(int));
    printf("sizeof(int *)       : %ld\n", sizeof(int *));
    printf("sizeof(int **)      : %ld\n", sizeof(int **));
    printf("sizeof(char *)      : %ld\n", sizeof(char *));
    printf("sizeof(char **)     : %ld\n", sizeof(char **));
    printf("sizeof(char ***)    : %ld\n", sizeof(char ***));
    printf("sizeof(float *)     : %ld\n", sizeof(float *));
    printf("sizeof(float **)    : %ld\n", sizeof(float **));
    printf("sizeof(float ***)   : %ld\n", sizeof(float ***));
    return 0;
}

#include <stdio.h>

int main()
{
    printf(" ----- Unsigned ----- \n");
    printf("size of a unsigned char : %lu bytes \n", sizeof(unsigned char));
    printf("size of a unsigned short : %lu bytes \n", sizeof(unsigned short));
    printf("size of a unsigned int : %lu bytes \n", sizeof(unsigned int));
    printf("size of a unsigned long int : %lu bytes \n", sizeof(unsigned long int));
    printf("size of a unsigned long long int : %lu bytes \n", sizeof(unsigned long long int));
    printf("size of a unsigned float : %lu bytes \n", sizeof(float));
    printf("size of a unsigned double : %lu bytes \n", sizeof(double));
    printf("size of a unsigned long double : %lu bytes \n", sizeof(long double));
    printf("\n ----- Signed -----\n");
    printf("size of a signed char : %lu bytes \n", sizeof(signed char));
    printf("size of a signed short : %lu bytes \n", sizeof(signed short));
    printf("size of a signed int : %lu bytes \n", sizeof(signed int));
    printf("size of a signed long int : %lu bytes \n", sizeof(signed long int));
    printf("size of a signed long long int : %lu bytes \n", sizeof(signed long long int));
    return 0;
}

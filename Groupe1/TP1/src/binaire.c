#include <stdio.h>

// Function that tells how long will be the binary number

int binary_lenght(int bin){
    int n=1;
    int count = 0;
    while (n <= bin){
        n = n*2;
        count++;
    }
    return count;
}

// Function that converts and print the binary

int binary(int num, int len){
    int bin[len];
    for (int i = 0; i < len; i++)
    {
        int bit = num%2;
        bin[len-i-1] = bit;
        num = num/2;
    }
    for (int i = 0; i < len; i++)
    {
        if ((len-i)%4 == 0)
        {
            printf(" ");
        }
        printf("%d", bin[i]);
    }
    return 0;
}

int main(){
    int a = 4096;
    int len = binary_lenght(a);
    printf("decimal = %d\n\n", a);
    printf("binaire = ");
    binary(a, len);
    printf("\n");
    return 0;
}

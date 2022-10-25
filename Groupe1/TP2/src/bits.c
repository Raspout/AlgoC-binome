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

    if (bin[len-4] && bin[len-20]){
        printf("1");
    }

    else{
        printf("0");
    }
}

int main(){
    // 1 with 
    int a = 528552;
    int len = binary_lenght(a);
    binary(a, len);
    printf("\n");
    return 0;
}
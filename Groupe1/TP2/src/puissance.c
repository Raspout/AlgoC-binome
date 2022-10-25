#include <stdio.h>

int square(int a,int b){
    //int a = 2;
    //int b = 3;
    int aa = a;
    for (int i = 0; i < b-1; i++)
    {
        a = a*aa;
    }
    printf("%u\n", a);
}

int main(int argc, char const *argv[])
{
    square(2,3);
    return 0;
}

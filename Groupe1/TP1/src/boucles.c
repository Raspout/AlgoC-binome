#include <stdio.h>

int main(int argc, char const *argv[])
{
    // counter variable
    int compteur = 5;

    // for y axis
    for(int i; i < compteur; i++){
        // for x axis
        for (int y = 0; y < i+1; y++)
        {
            if ((y==0) || (y==i))
            {
                printf("*");
            }
            else if (i==compteur-1)
            {
                printf("*");
            }
            else
            {
                printf("#");
            }
        }
        printf("\n");
    }
    return 0;
}

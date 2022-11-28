#include <stdio.h>

int main(){

    int tableau[100] = {
        145, 2, 3, 4, 5, 6, 7, 8, 9, 10,
        11, 125, 13, 14, 15, 106, 17, 118, 19,
        20, 21, 22, 23, 24, 25, 26, 27, 228, 29, 
        30, 31, 32, 33, 634, 35, 36, 737, 38, 39, 
        40, 41, 424, 43, 44, 45, 46, 47, 48, 49, 
        50, 51, 52, 53, 54, 455, 56, 57, 58, 59, 
        60, 61, 62, 63, 64,  65, 66, 667, 68, 69, 
        70, 71, 772, 73, 74, 75, 76, 737, 78, 79, 
        80, 81,  82, 83, 84, 85, 86, 87, 88, 89, 
        90, 91, 902, 93, 994, 95, 96, 917, 98, 99, 100
    };

    int remplace;

    for (int i = 0; i < 100; i++)
    {
        for (int j = 0; j < 99; j++)
        {
            if (*(tableau + j) > *(tableau + (j+1))) {
                remplace = *(tableau + j);
                *(tableau + j) = *(tableau + (j + 1));
                *(tableau+ (j + 1)) = remplace; 
            };
        }
        printf("%d\n", *(tableau + i)); 
    };
};
    
//utilisation du site (tri a bulle)
//http://langage-info.blogspot.com/2014/05/trois-algorithmes-du-tri-en-c.html

#include <stdio.h>

int main()  
{
    char tableau [][5][30] ={
    {"Prénom1", "Nom1", "Adresse1", "Note1.1", "Note1.2" },
    {"Prénom2", "Nom2", "Adresse2", "Note2.1", "Note2.2" },
    {"Prénom3", "Nom3", "Adresse3", "Note3.1", "Note3.2" },
    {"Prénom4", "Nom4", "Adresse4", "Note4.1", "Note4.2" },
    {"Prénom5", "Nom5", "Adresse5", "Note5.1", "Note5.2" }
    };

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%s ", tableau[i][j]);
        };
        printf("\n");

    };
}

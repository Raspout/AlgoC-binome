#include <stdio.h>

int main()  
{
    //définition tableau

    int tableau1[5]={
         3, 7, 16, 88, 92
    }; 

    float tableau2 [5] = {
        2.7, 17.3, 255.55, 88.01, 3.14
    }; 

    //définition des tableaux pour valeurs modifiées
    int tableau1modif [5];

    float tableau2modif [5]; 

    //parcours du tableau par les pointeurs pour calculer chaque nouvelles valeurs
    for (int i = 0; i < 5; i++)
    {
        if (i%2 == 0){
           tableau1modif[i] = *(tableau1+i)*3;
           tableau2modif[i] = *(tableau2+i)*3; 
        }
        else{
            tableau1modif[i] = *(tableau1+i);
            tableau2modif[i] = *(tableau2+i);
        }
    };

    //affichage
    for (int i = 0; i < 5; i++)
    {
        printf("tableau int:%d \t | \t tableau int modifié %d \n", *(tableau1+i), *(tableau1modif+i));
        
    };

    for (int i = 0; i < 5; i++)
    {
        printf("tableau float:%f \t | \t tableau float modifié %f \n", *(tableau2+i), *(tableau2modif+i));
    };
    
    
};

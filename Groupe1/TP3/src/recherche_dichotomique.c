#include <stdio.h>

int main(){

    int tab[100] = {
        0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 
        10, 11, 12, 13, 14, 15, 16, 17, 18, 19,
        20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 
        30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 
        40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 
        50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 
        60, 61, 62, 63, 64,  65, 66, 67, 68, 69, 
        70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 
        80, 81,  82, 83, 84, 85, 86, 87, 88, 89, 
        90, 91, 92, 93, 94, 95, 96, 97, 98, 99
    };
    
    int i = 0;
    int j = 0;
    int finish = 0;
    int N = 100;
    int mil;
    int first = tab[0];
    int last = 100;
    int value = 58;

	// value finish
    while ((finish != 1) && (first <= last))
	{
		mil = ((first + last)/2);
		if (tab[mil] == value)
		{
			finish = 1;
		}
		else{
			if (value > tab[mil])
			{
				first = mil+1;
			}
			else{
				last = mil-1;
			}
		}

		if (finish == 1)
		{
			printf("La valeur %d est présente au rang %d\n", value, mil);
		}

	} 
}
#include <stdio.h>

int main(){
    char my_char_var = 'a';
    short my_short_var = 0xfffa;
    int my_int_var= 12;
    long my_long_var = -1234553L;
    float my_float_var = 3.14;
    double my_double_var = 3.14E-12;
    long double my_long_double_var = 3.14E-22;

//float

//définit un pointeur de charact_re
    char *ptr_short = (char *)&my_short_var; 
    printf("short : \n");

//Boucle pour lire chaque octet (nombre donné par size of)
    for (int i = 0; i < sizeof(short); i++)
    {   
        printf("%hhx \n", *(ptr_short +i)); 
    };

//char
    char *ptr_char = (char *)&my_char_var;
    printf("char : \n");
    for (int i = 0; i < sizeof(char); i++)
    {   
        printf("%hhx \n", *(ptr_char +i)); 
    };

//int
    char *ptr_int = (char *)&my_int_var;
    printf("int : \n");
    for (int i = 0; i < sizeof(int); i++)
    {   
        printf("%hhx \n", *(ptr_int +i)); 
    };

//long
    char *ptr_long = (char *)&my_long_var;
    printf("long : \n");
    for (int i = 0; i < sizeof(long); i++)
    {   
        printf("%hhx \n", *(ptr_long +i)); 
    };

//float
    char *ptr_float = (char *)&my_float_var;
    printf("float : \n");
    for (int i = 0; i < sizeof(float); i++)
    {   
        printf("%hhx \n", *(ptr_float +i)); 
    };

//double
    char *ptr_double = (char *)&my_double_var;
    printf("double : \n");
    for (int i = 0; i < sizeof(double); i++)
    {   
        printf("%hhx \n", *(ptr_double +i)); 
    };

//long double
    char *ptr_long_double = (char *)&my_long_double_var;
    printf("long double :  \n");
    for (int i = 0; i < sizeof(long double); i++)
    {   
        printf("%hhx \n", *(ptr_long_double +i)); 
    };
}

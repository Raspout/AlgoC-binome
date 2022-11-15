#include <stdio.h>

int main() {
    char my_char_var;
    unsigned char my_uchar_var;
    short my_short_var;
    unsigned short my_ushort_var;
    int my_int_var;
    unsigned int my_uint_var;
    long my_long_var;
    unsigned long my_ulong_var;
    long long my_llong_var;
    unsigned long long my_ullong_var;
    float my_float_var;
    double my_double_var;
    long double my_long_double_var; 

    char *char_var = &my_char_var;
    unsigned char *uchar_var = &my_uchar_var;
    short *short_var = &my_short_var;
    unsigned short *ushort_var = &my_ushort_var;
    int *int_var = &my_int_var;
    unsigned int *uint_var = &my_uint_var;
    long *long_var = &my_long_var;
    unsigned long *ulong_var = &my_ulong_var;
    long long *llong_var = &my_llong_var;
    unsigned long long *ullong_var = &my_ullong_var;
    float *float_var = &my_float_var;
    double *double_var = &my_double_var;
    long double *long_double_var = &my_long_double_var;


    *char_var = 'a';
    *uchar_var = 'b';
    *short_var = -12;
    *ushort_var = 65535;
    *int_var = 12;
    *uint_var = 3456;
    *long_var = -1234553L;
    *ulong_var = 234556UL;
    *llong_var = 1123345LL;
    *ullong_var = 1234567ULL;
    *float_var = 3.14;
    *double_var = 3.14E-12;
    *long_double_var = 3.14E-22; 


    printf("char : %p\n", (void*)char_var);
    printf("unsigned char : %p\n", (void*)uchar_var);
    printf("short : %p\n", (void*)short_var);
    printf("unsigned short : %p\n", (void*)ushort_var);
    printf("int : %p\n", (void*)int_var);
    printf("unsigned int : %p\n", (void*)uint_var);
    printf("long:  %p\n", (void*)long_var); 
    printf("unsigned long : %p\n", (void*)ulong_var);
    printf("long long : %p\n", (void*)long_var);
    printf("unsigned long long : %p\n", (void*)ullong_var);
    printf("float : %p\n", (void*)float_var);
    printf("double : %p\n", (void*)double_var);
    printf("long double : %p\n", (void*)long_double_var);

    return 0;
}

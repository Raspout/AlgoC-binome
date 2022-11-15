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
    *short_var = -1456;
    *ushort_var = 65535;
    *int_var = 12;
    *uint_var = 3456;
    *long_var = -422356363457354553L;
    *ulong_var = 7744523454343634356UL;
    *llong_var = 153823756357457435LL;
    *ullong_var = 1234533534567ULL;
    *float_var = 3.14;
    *double_var = -1;
    *long_double_var = -1; 


    printf("adresse : %p, my_char %x\n", (void*)char_var, *((unsigned char*)&my_char_var));
    printf("adresse : %p, my_unsigned char : %x\n", (void*)uchar_var, *((unsigned char*)&my_uchar_var));
    printf("adresse : %p, my_short : %x:%x\n", (void*)short_var, *((unsigned char*)&my_short_var+1), *((unsigned char*)&my_short_var));
    printf("adresse : %p, my_unsigned short : %x:%x\n", (void*)ushort_var, *((unsigned char*)&my_ushort_var+1) ,*((unsigned char*)&my_ushort_var));
    printf("adresse : %p, my_int : %x\n", (void*)int_var, *((unsigned char*)&my_int_var));
    printf("adresse : %p, my_unsigned int : %x:%x\n", (void*)uint_var, *((unsigned char*)&my_uint_var+1) ,*((unsigned char*)&my_uint_var));
    printf("adresse : %p, my_long:  %x:%x:%x:%x:%x:%x:%x:%x\n", (void*)long_var, *((unsigned char*)&my_long_var+7), *((unsigned char*)&my_long_var+6), *((unsigned char*)&my_long_var+5), *((unsigned char*)&my_long_var+4), *((unsigned char*)&my_long_var+3), *((unsigned char*)&my_long_var+2), *((unsigned char*)&my_long_var+1), *((unsigned char*)&my_long_var)); 
    printf("adresse : %p, my_ulong:  %x:%x:%x:%x:%x:%x:%x:%x\n", (void*)ulong_var, *((unsigned char*)&my_ulong_var+7), *((unsigned char*)&my_ulong_var+6), *((unsigned char*)&my_ulong_var+5), *((unsigned char*)&my_ulong_var+4), *((unsigned char*)&my_ulong_var+3), *((unsigned char*)&my_ulong_var+2), *((unsigned char*)&my_ulong_var+1), *((unsigned char*)&my_ulong_var)); 
    printf("adresse : %p, my_llong:  %x:%x:%x:%x:%x:%x:%x:%x\n", (void*)llong_var, *((unsigned char*)&my_llong_var+7), *((unsigned char*)&my_llong_var+6), *((unsigned char*)&my_llong_var+5), *((unsigned char*)&my_llong_var+4), *((unsigned char*)&my_llong_var+3), *((unsigned char*)&my_llong_var+2), *((unsigned char*)&my_llong_var+1), *((unsigned char*)&my_llong_var)); 
    printf("adresse : %p, my_unsigned long long : %x:%x:%x:%x:%x:%x:%x:%x\n", (void*)ullong_var, *((unsigned char*)&my_ullong_var+7), *((unsigned char*)&my_ullong_var+6), *((unsigned char*)&my_ullong_var+5), *((unsigned char*)&my_ullong_var+4), *((unsigned char*)&my_ullong_var+3), *((unsigned char*)&my_ullong_var+2), *((unsigned char*)&my_ullong_var+1), *((unsigned char*)&my_ullong_var)); 
    printf("adresse : %p, my_float : %x:%x:%x:%x\n", (void*)float_var, *((unsigned char*)&my_float_var+3), *((unsigned char*)&my_float_var+2),*((unsigned char*)&my_float_var+1) ,*((unsigned char*)&my_float_var));
    printf("adresse : %p, my_double : %x:%x:%x:%x:%x:%x:%x:%x\n", (void*)double_var, *((unsigned char*)&my_double_var+7), *((unsigned char*)&my_double_var+6), *((unsigned char*)&my_double_var+5), *((unsigned char*)&my_double_var+4), *((unsigned char*)&my_double_var+3), *((unsigned char*)&my_double_var+2), *((unsigned char*)&my_double_var+1), *((unsigned char*)&my_double_var)); 
    printf("adresse : %p, my_long double : %x:%x:%x:%x:%x:%x:%x:%x:%x:%x\n", (void*)long_double_var, *((unsigned char*)&my_long_double_var+9), *((unsigned char*)&my_long_double_var+8), *((unsigned char*)&my_long_double_var+7), *((unsigned char*)&my_long_double_var+6), *((unsigned char*)&my_long_double_var+5), *((unsigned char*)&my_long_double_var+4), *((unsigned char*)&my_long_double_var+3), *((unsigned char*)&my_long_double_var+2), *((unsigned char*)&my_long_double_var+1), *((unsigned char*)&my_long_double_var)); 

    return 0;
}

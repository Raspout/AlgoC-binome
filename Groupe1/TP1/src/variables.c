#include <stdio.h>

int main() {
    char my_char_var = 'a';
    unsigned char my_uchar_var = 234;
    short my_short_var = -12;
    unsigned short my_ushort_var = 65535;
    int my_int_var= 12;
    unsigned int my_uint_var = 3456;
    long my_long_var = -1234553L;
    unsigned long my_ulong_var = 234556UL;
    long long my_llong_var = 1123345LL;
    unsigned long long my_ullong_var = 1234567ULL;
    float my_float_var = 3.14;
    double my_double_var = 3.14E-12;
    long double my_long_double_var = 3.14E-22; 

    printf("char %c\n", my_char_var);
    printf("unsigned char %hhu\n", my_uchar_var);
    printf("short %hd\n", my_short_var);
    printf("unsigned short %hu\n", my_ushort_var);
    printf("int %d\n", my_int_var);
    printf("unsigned int %u\n", my_uint_var);
    printf("long %ld\n", my_long_var); 
    printf("unsigned long  %lu\n", my_ulong_var);
    printf("long long %lld\n", my_llong_var);
    printf("unsigned long long %llu\n", my_ullong_var);
    printf("float %f\n", my_float_var);
    printf("double %g\n", my_double_var);
    printf("long double %Lg\n", my_long_double_var);

    return 0; 
}

#include <stdio.h>

int main()
{
    char str[] = "hello, I am bruno";
    int i;
    for(i = 0; str[i] > '\0'; i++);
    printf("%d\n", i);
    return 0;
}
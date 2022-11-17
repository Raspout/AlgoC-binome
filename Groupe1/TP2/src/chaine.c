#include <stdio.h>

int main()
{
    char str[] = "I am a monkey";
    int i;
    for(i = 0; str[i] > '\0'; i++);
    printf("Il y a %d caractères dans \"%s\"\n", i, str);

    int len = i;

    printf("str2 copie de str :\n");

    char str2[50];
    for (int y = 0; y <= len; y++)
    {
        str2[y] = str[y];
    }
    printf("%s\n", str2);

    int j = 0;
    printf("str et str2 concatene:\n"); 

    while(str2[j]!='\0')
    {
      str[i]=str2[j];
      j++;
      i++;
    }
    str[i]='\0';
    printf("%s\n",str);
    return 0;
}

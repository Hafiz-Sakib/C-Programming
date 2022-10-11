#include <stdio.h>
#include <string.h>
int main()
{

    char string1[100];
    printf("Enter String 1 : ");
    gets(string1);
    strlwr(string1);
    printf("%s ", string1);
    return 0;
}
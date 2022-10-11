#include <stdio.h>
#include <string.h>
int main()
{

    char string1[100], string2[100];
    printf("Enter String 1 : ");
    gets(string1);
    strupr(string1);
    printf("%s ", string1);
    return 0;
}
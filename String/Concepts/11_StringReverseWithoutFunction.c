#include <stdio.h>
#include <string.h>
int main()
{

    char string1[100];
    printf("Enter The Word : ");
    gets(string1);
    int length, i;
    length = strlen(string1), i;

    printf("Reversed string is : \n");

    for (i = (length - 1); i >= 0; i--)
    {
        printf("%c", string1[i]);
    }

    return 0;
}
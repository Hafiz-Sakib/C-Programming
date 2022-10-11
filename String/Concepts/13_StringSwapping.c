#include <stdio.h>
#include <string.h>
int main()
{

    char string1[100], string2[100], temp[100];
    printf("Enter String 1 : ");
    gets(string1);
    printf("Enter String 2 : ");
    gets(string2);
    printf("\nBefore Swap String 1 : %s\n", string1);
    printf("Before Swap String 2 : %s\n\n\n", string2);
    strcpy(temp, string1);
    strcpy(string1, string2);
    strcpy(string2, temp);
    printf("After Swap String 1 : %s\n", string1);
    printf("After Swap String 2 : %s\n", string2);

    return 0;
}
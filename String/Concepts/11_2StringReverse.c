#include <stdio.h>
#include <string.h>
int main()
{

    char string1[100], string2[100];
    printf("Enter The Word: ");
    gets(string1);
    int len = strlen(string1), j = 0, i;

    for (i = (len - 1); i >= 0; i--)
    {
        string2[j] = string1[i];
        j++;
    }

    printf("%s", string2);

    return 0;
}
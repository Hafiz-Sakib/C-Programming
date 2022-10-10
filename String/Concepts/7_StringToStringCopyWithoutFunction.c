#include <stdio.h>
int main()
{
    char name[100], copiedName[100], i;
    printf("Enter string name: ");
    gets(name);

    for (i = 0; name[i] != '\0'; i++)
    {
        copiedName[i] = name[i];
    }

    copiedName[i] = '\0';

    printf("String copiedName: %s", copiedName);
    return 0;
}
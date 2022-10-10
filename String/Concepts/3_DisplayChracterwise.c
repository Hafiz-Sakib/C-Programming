#include <stdio.h>
#include <string.h>
int main()
{
    char name[100];
    gets(name);

    for (int i = 0; i < strlen(name); i++)
    {
        printf("%c\n", name[i]);
    }

    return 0;
}
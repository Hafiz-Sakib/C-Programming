#include <stdio.h>
#include <string.h>
int main()
{
    char name[100];
    int i;
    for (i = 0; i < 5; i++)
    {
        scanf("%s", &name[i]);
    }

    printf(name);

    return 0;
}
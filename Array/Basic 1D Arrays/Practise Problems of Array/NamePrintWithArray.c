#include <stdio.h>
#include <string.h>
int main()
{

    // name print with array
    int n;
    printf("How Many Characters in your name?\n");
    scanf("%d", &n);
    char name[n];
    int i;
    printf("Enter The Characters One By One :\n");
    for (i = 0; i < n; i++)
    {
        scanf("%s", &name[i]);
    }

    printf("Your name is :%s", name);

    return 0;
}
#include <stdio.h>
int main()
{
    int marks[5];
    int i;
    for (i = 0; i <= 4; i++)
    {
        scanf("%d", &marks[i]);
    }
    for (i = 0; i <= 4; i++)
    {
        printf("%d", marks[i]);
    }
    return 0;
}
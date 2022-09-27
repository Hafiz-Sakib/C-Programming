#include <stdio.h>
int main()
{
    int myArray[5];
    int i;
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &myArray[i]);
    }
    for (i = 0; i < 5; i++)
    {
        printf("\n%d\n", myArray[i]);
    }
    return 0;
}
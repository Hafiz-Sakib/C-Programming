#include <stdio.h>
int main()
{

    int n, x = 1;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = n - i; j > 1; j--)
        {
            printf(" ");
        }
        for (int j = 0; j < x; j++)
        {
            printf("*");
        }
        x += 2;
        printf("\n");
    }
    x -= 2;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j > 0; j--)
        {
            printf(" ");
        }
        for (int j = 0; j < x; j++)
        {
            printf("*");
        }
        x -= 2;
        printf("\n");
    }

    return 0;
}
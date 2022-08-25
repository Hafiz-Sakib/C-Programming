

/*

For 10 Row, Output Shoulb be like that :

10 9 8 7 6 5 4 3 2 1
10 9 8 7 6 5 4 3 2
10 9 8 7 6 5 4 3
10 9 8 7 6 5 4
10 9 8 7 6 5
10 9 8 7 6
10 9 8 7
10 9 8
10 9
10


 */

#include <stdio.h>
int main()
{

    int i, j, k, n;
    printf("Enter the Number of rows you want to print\n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = n; j >= i; j--)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}
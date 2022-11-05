#include <stdio.h>
int main()
{
    int row, column;
    printf("Enter Row size : \n", &row);
    scanf("%d", &row);

    printf("Enter Column Size :\n");
    scanf("%d", &column);

    int a[row][column];

    printf("Enter elements of matrix\n");

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }

        printf("\n");
    }
    printf("A = ");
    for (int i = 0; i < row; i++)
    {
        printf("\t");
        for (int j = 0; j < column; j++)
        {
            printf("%d ", a[i][j]);
        }

        printf("\n");
    }

    printf("\n");

    return 0;
}
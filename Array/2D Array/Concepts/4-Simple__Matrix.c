#include <stdio.h>
int main()
{
    int row, column;
    printf("Enter Row And Column size of Matrix A : \n");
    scanf("%d %d", &row, &column);

    int a[row][column];

    // scanning A Matrix

    printf("Enter elements of Matrix A :\n");

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }

        printf("\n");
    }

    // Printing A Matrix

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

    printf("Enter Row And Column size of Matrix B : \n");
    scanf("%d %d", &row, &column);

    int b[row][column];

    // scanning B Matrix

    printf("Enter elements of Matrix B :\n");

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("B[%d][%d] = ", i, j);
            scanf("%d", &b[i][j]);
        }

        printf("\n");
    }

    // Printing B Matrix

    printf("B = ");

    for (int i = 0; i < row; i++)
    {
        printf("\t");
        for (int j = 0; j < column; j++)
        {
            printf("%d ", b[i][j]);
        }

        printf("\n");
    }

    printf("\n");

    return 0;
}
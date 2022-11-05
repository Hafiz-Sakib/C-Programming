#include <stdio.h>
int main()
{
    int row, column;
    printf("Enter Row size : \n", &row);
    scanf("%d", &row);

    printf("Enter Column Size :\n");
    scanf("%d", &column);

    int a[row][column], c[100][100];

    // scanning A Matrix

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

    // Printing A Matrix

    printf("A =");

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

    printf("Enter Row size : \n", &row);
    scanf("%d", &row);

    printf("Enter Column Size :\n");
    scanf("%d", &column);

    int b[row][column];

    // scanning B Matrix

    printf("Enter elements of matrix\n");

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

    printf("B =");

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
    // Printing C Matrix after Addition

    printf("A - B = ");

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            c[i][j] = a[i][j] - b[i][j];
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("%d ", c[i][j]);
        }

        printf("\n");
        printf("\t");
    }

    printf("\n");

    return 0;
}
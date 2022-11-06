#include <stdio.h>
int main()
{
    int row, column;
    printf("Enter Row And Column size of Matrix A : \n");
    scanf("%d %d", &row, &column);

    int a[row][column], transpose[100][100];

    // Scanning A Matrix

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

    // Do Transpose Matrix meanse -- Transfering the row values into column or column values into rows

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {

            transpose[j][i] = a[i][j];
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

    // Printing Transpose Matrix

    printf("Transpose = ");

    for (int i = 0; i < column; i++)
    {
        for (int j = 0; j < row; j++)
        {
            printf("%d ", transpose[i][j]);
        }

        printf("\n");
        printf("\t");
    }

    printf("\n");

    return 0;
}
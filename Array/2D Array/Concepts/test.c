#include <stdio.h>
int main()
{
    int row1, column1, row2, column2;
    printf("Enter Row And Column size of Matrix A : \n");
    scanf("%d %d", &row1, &column1);

    printf("Enter Row And Column size of Matrix B : \n");
    scanf("%d %d", &row2, &column2);

    int a[row1][column1], b[row2][column2], c[100][100];

    // The number of columns in M and the number of rows in N must be the same. Then you can multiply the matrices, and the values of x and z will determine the size of the resultant. So, if matrix A is 3 × 4 and matrix B is a 4 × 2, then AB is possible since 4 = 4, and the size of the resultant matrix is 3 × 2.

    while (column1 != row2)
    {
        printf("Error!!\nMake Sure to 1st Matrix Columns and 2nd Matrix Rows are Same for Matrix Multiplication!!\nPut the Values Again Please :\n");

        printf("Enter Row And Column size of Matrix A : \n");
        scanf("%d %d", &row1, &column1);

        printf("Enter Row And Column size of Matrix B : \n");
        scanf("%d %d", &row2, &column2);
    }

    // Scanning A Matrix

    printf("Enter elements of Matrix A :\n");

    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < column1; j++)
        {
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }

        printf("\n");
    }

    // Scanning B Matrix

    printf("Enter elements of Matrix B :\n");

    for (int i = 0; i < row2; i++)
    {
        for (int j = 0; j < column2; j++)
        {
            printf("B[%d][%d] = ", i, j);
            scanf("%d", &b[i][j]);
        }

        printf("\n");
    }

    // Printing A Matrix

    printf("A =");

    for (int i = 0; i < row1; i++)
    {
        printf("\t");
        for (int j = 0; j < column1; j++)
        {
            printf("%d ", a[i][j]);
        }

        printf("\n");
    }

    printf("\n");

    // Printing B Matrix

    printf("B =");

    for (int i = 0; i < row2; i++)
    {
        printf("\t");
        for (int j = 0; j < column2; j++)
        {
            printf("%d ", b[i][j]);
        }

        printf("\n");
    }

    printf("\n");
    // Printing C Matrix after Multiplication

    // The number of columns in M and the number of rows in N must be the same. Then you can multiply the matrices, and the values of x and z will determine the size of the resultant. So, if matrix A is 3 × 4 and matrix B is a 4 × 2, then AB is possible since 4 = 4, and the size of the resultant matrix is 3 × 2.

    printf("A * B = ");

    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < column2; j++)
        {
            c[i][j] = a[i][j] * b[i][j];
        }
    }
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < column2; j++)
        {
            printf("%d ", c[i][j]);
        }

        printf("\n");
        printf("\t");
    }

    printf("\n");

    return 0;
}
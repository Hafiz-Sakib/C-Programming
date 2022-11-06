#include <stdio.h>
int main()
{
    int row, column;
    printf("Enter Row And Column size of Matrix A : \n");
    scanf("%d %d", &row, &column);

    int a[row][column], Uppersum = 0, LowerSum = 0;

    while (row != column)
    {
        printf("Make Sure that Your Matrix has a 3 x 3 Matrix \n");
        printf("Enter Row And Column size of Matrix A : \n");
        scanf("%d %d", &row, &column);
    }

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

    // Printing A Matrix

    printf("\n\nA =");

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

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            if (i < j)
            {
                Uppersum = Uppersum + a[i][j];
            }
            if (i > j)
            {
                LowerSum = LowerSum + a[i][j];
            }
        }
    }

    // Printing Lower and Upper Triangle  Sum

    printf("Upper Triangle Sum is = %d\n", Uppersum);
    printf("Lower Triangle Sum is = %d\n", LowerSum);

    printf("\n");

    return 0;
}
/*
Name : Hafiz Sakib
Id : 0222210005101118

*/

// Problem : Show Row and Column Sum of A 2D array

#include <stdio.h>
int main()
{
    int a[100][100], csum, rsum, i, j, row, column, k = 0, idx = 0;
    printf("Enter the row and the column\n");
    scanf("%d %d", &row, &column);
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < row; i++)
    {
        rsum = 0;
        for (j = 0; j < column; j++)
        {
            rsum += a[i][j];
        }
        printf("Sum of %d Row is = %d\n", (i + 1), rsum);
    }

    printf("\n");

    for (i = 0; i < column; i++)
    {
        csum = 0;
        for (j = 0; j < row; j++)
        {
            csum += a[j][i];
        }
        printf("Sum of %d Column is = %d\n", (i + 1), csum);
    }

    printf("\n");

    return 0;
}
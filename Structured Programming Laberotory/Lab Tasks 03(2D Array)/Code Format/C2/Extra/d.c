/*
Name : Hafiz Sakib
Id : 0222210005101118

*/

// Problem : Show Row and Column Sum of A 2D array

#include <stdio.h>
int main()
{
    int a[100][100], csum[100], rsum[100], i, j, row, column, k = 0, idx = 0;
    printf("Enter the row and the column\n");
    scanf("%d %d", &row, &column);
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    int sum = 0, tmp = 0;
    for (i = 0; i < row; i++)
    {
        sum = 0;
        for (j = 0; j < column; j++)
        {
            sum += a[i][j];
        }
        rsum[k] = sum;
        k++;
    }

    for (i = 0; i < column; i++)
    {
        tmp = 0;
        for (j = 0; j < row; j++)
        {
            tmp += a[j][i];
        }
        csum[idx] += tmp;
        idx++;
    }

    printf("\nColumn Sums Are : \n");

    for (int i = 0; i < idx; i++)
    {
        printf("%d ", csum[i]);
    }

    printf("\nRow Sums Are : \n");

    for (int i = 0; i < k; i++)
    {
        printf("%d ", rsum[i]);
    }

    printf("\n");

    return 0;
}
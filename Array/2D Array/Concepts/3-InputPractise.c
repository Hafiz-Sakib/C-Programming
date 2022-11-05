#include <stdio.h>
int main()
{
    int row, column, i, j;
    printf("Enter Row And Column size of Matrix : \n");
    scanf("%d %d", &row, &column);
    int Array[row][column];
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            scanf("%d", &Array[i][j]);
        }
    }

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            printf("%d ", Array[i][j]);
        }
        printf("\n");
    }

    return 0;
}
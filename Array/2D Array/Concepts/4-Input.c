#include <stdio.h>
int main()
{
    int row, column, i, j;
    printf("Enter Row Size :\n");
    scanf("%d", &row);
    printf("Enter Column Size :\n");
    scanf("%d", &column);
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
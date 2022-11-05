#include <stdio.h>
int main()
{
    int row, column, i, j;
    printf("Enter Row Size :\n");
    scanf("%d", &row);
    printf("Enter Column Size :\n");
    scanf("%d", &column);
    int Array[row][column];
    int number = row * column;
    printf("You Have To Enter Total %d numbers!\n", (row * column));
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            number--;
            printf("Enter %d no number :\n", ((row * column) - number));
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
#include <stdio.h>
int main()
{
    int row, column;
    printf("Enter Row And Column size of Matrix A : \n");
    scanf("%d %d", &row, &column);

    int a[row][column], sum = 0;

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

    // Do Diagonaal Sum means -- ৩ বাই  ৩ মেট্রিক্সের কোণাকুণি ভ্যালুগুলো যোগ করা ।

    printf("Diagonal elements are : ");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            if (i == j) // values of (0,0),(1,1),(2,2) গুলোই যোগ করবো শুধু এজন্য রো আর কলামের ইন্ডেক্স যখনি মিলবে  শুধুমাত্র তখনই যোগ করতে হবে
            {
                printf("%d ", a[i][j]);
                sum = sum + a[i][j];
            }
        }
    }

    // Printing Diagonal Sum

    printf("\nDiagonal Sum is = %d", sum);

    printf("\n");

    return 0;
}

/*
Name : Hafiz Sakib
Id : 0222210005101118

*/

// Problem : Write a C program to check if the first matrix is element-wise square of the second matrix. The matrices will have the same dimension.

#include <stdio.h>
int main()
{
    int r, c, f = 1, a[100][100], b[100][100];
    scanf("%d %d", &r, &c);

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if ((b[i][j] * b[i][j]) != a[i][j])
            {
                f = 0;
                break;
            }
        }
        if (f == 0)
        {
            break;
        }
    }

    if (f)
    {
        printf("First matrix is the element-wise square of the second matrix.\n");
    }
    else
    {
        printf("First matrix is not the element-wise square of the second matrix.\n");
    }

    return 0;
}

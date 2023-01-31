/*
Name : Hafiz-Sakib
Id : 0222210005101118
 */

// Problem 06 : Write a C program that read n number of values and prints the maximum sum of 2 values.

#include <stdio.h>
int main()
{
    int n, currentSumSum = 0, maxSum = 0;
    scanf("%d", &n);
    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int currentSum = a[i] + a[j];
            if (currentSum > maxSum)
            {
                maxSum = currentSum;
            }
        }
    }

    printf("%d\n", maxSum);

    return 0;
}

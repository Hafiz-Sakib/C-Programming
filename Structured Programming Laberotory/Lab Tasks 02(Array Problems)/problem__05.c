/*
Name : Hafiz-Sakib
Id : 0222210005101118
 */

// Problem 05 : Write a C program that read n number of values and prints the maximum consecutive sum of 2 values.

#include <stdio.h>
int main()
{
    int n, currentSum = 0, maxSum = 0;
    scanf("%d", &n);
    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n - 1; i++)
    {
        currentSum = a[i] + a[i + 1];
        if (currentSum > maxSum)
        {
            maxSum = currentSum;
        }
    }

    printf("%d\n", maxSum);

    return 0;
}

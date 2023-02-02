/*
Name : Hafiz-Sakib
Id : 0222210005101118
 */

// Problem 04 : Write a C program to read n number of values and print the second largest value.

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int max = a[0], second_largest = a[0], idx = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
            idx = i;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if ((a[i] > second_largest) && idx != i)
        {
            second_largest = a[i];
        }
    }

    printf("%d\n", second_largest);

    return 0;
}
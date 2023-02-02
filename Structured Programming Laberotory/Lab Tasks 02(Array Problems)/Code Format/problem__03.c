/*
Name : Hafiz-Sakib
Id : 0222210005101118
 */

// Problem 03 : Write a C program to read n number of values and print the maximum and minimum value among them.

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

    int min = a[0], max = a[0];

    for (int i = 0; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
        if (a[i] < min)
        {
            min = a[i];
        }
    }

    printf("Maximum = %d\nMinimum = %d\n", max, min);

    return 0;
}
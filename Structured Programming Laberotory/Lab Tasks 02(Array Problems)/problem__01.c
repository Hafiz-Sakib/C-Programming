/*
Name : Hafiz-Sakib
Id : 0222210005101118
 */

// Problem 01 : Write a C program to read n number of values in an array and print it in reverse order.

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];

    for (int i = (n - 1); i >= 0; i--)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
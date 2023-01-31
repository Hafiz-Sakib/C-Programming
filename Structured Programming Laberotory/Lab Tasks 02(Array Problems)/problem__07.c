/*
Name : Hafiz-Sakib
Id : 0222210005101118
 */

// Problem 07 : Write a C program to read n number of values and print the duplicate values.

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

    for (int i = 0; i < n; i++)
    {
        for (int j = (i + 1); j < n; j++)
        {
            if ((a[i] == a[j]) && (a[i] != -1))
            {
                printf("%d ", a[i]);
                a[i] = -1;
                a[j] = -1;
                break;
            }
        }
    }

    return 0;
}

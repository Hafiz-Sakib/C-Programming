/*
Name : Hafiz-Sakib
Id : 0222210005101118
 */

// Problem 08 : Write a C program to read n number of values and print the unique values.

#include <stdio.h>
int main()
{
    int n, ok;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        ok = 1;
        for (int j = 0; j < i; j++)
        {
            if (a[i] == a[j])
            {
                ok = 0;
                break;
            }
        }
        if (ok)
        {
            printf("%d ", a[i]);
        }
    }

    return 0;
}

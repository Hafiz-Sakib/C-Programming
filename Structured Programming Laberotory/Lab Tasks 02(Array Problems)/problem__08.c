/*
Name : Hafiz-Sakib
Id : 0222210005101118
 */

// Problem 08 : Write a C program to read n number of values and print the unique values.

#include <stdio.h>
int main()
{
    int n, k = 0, ok;
    scanf("%d", &n);
    int a[n], uq[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        ok = 0;
        for (int j = 0; j < n; j++)
        {
            if (a[j] == a[i])
            {
                ok++;
            }
        }
        if (ok)
        {
            uq[k] = a[i];
            k++;
        }
    }

    for (int i = 0; i < k; i++)
    {
        printf("%d ", uq[i]);
    }

    return 0;
}

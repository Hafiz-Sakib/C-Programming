/*
Name : Hafiz-Sakib
Id : 0222210005101118
 */

// Problem 07 : Write a C program to read n number of values and print the duplicate values.

#include <stdio.h>
int main()
{
    int n, k = 0, ok;
    scanf("%d", &n);
    int a[n], dp[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        ok = 0;
        for (int j = (i + 1); j < n - 1; j++)
        {
            if ((a[i] == a[j]) && (a[j] != -1))
            {
                a[j] = -1;
                ok = 1;
            }
        }
        if (ok)
        {
            dp[k] = a[i];
            k++;
        }
    }
    for (int i = 0; i < k; i++)
    {
        printf("%d ", dp[i]);
    }

    return 0;
}

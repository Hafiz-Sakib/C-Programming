/*
Name : Hafiz-Sakib
Id : 0222210005101118
 */

// Problem 02 : Write a C program to read n number of values in an array and a value ‘x’.Print “Yes” if x is in the array else print “No”.

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

    int x, not_found = 1;
    scanf("%d", &x);

    for (int i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            printf("YES\n");
            not_found = 0;
            break;
        }
    }

    if (not_found)
    {
        printf("NO\n");
    }

    return 0;
}
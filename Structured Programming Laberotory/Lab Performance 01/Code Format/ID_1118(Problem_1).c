/*

ID : 0222210005101118
Name : Sakib

 */

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    if (n == 2)
    {
        printf("This Month has 28 Days\n");
    }
    else
    {
        if (n == 1 || n == 3 || n == 5 || n == 7 || n == 8 || n == 10 || n == 12)
        {
            printf("This Month has 31 Days\n");
        }
        else
        {
            printf("This Month has 30 Days\n");
        }
    }

    return 0;
}

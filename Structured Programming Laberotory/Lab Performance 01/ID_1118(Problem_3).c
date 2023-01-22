/*

ID : 0222210005101118
Name : Sakib

 */

#include <stdio.h>
int main()
{
    int d = 0, y = 0, m = 0, w = 0, nd = 0, t;

    scanf("%d", &d);

    if (d == 365)
    {
        y = 1;
    }
    else
    {
        if (d < 365)
        {
            m = d / 30;
            t = d - (m * 30);
            w = t / 7;
            t = t - (w * 7);
            nd = t;
        }
        else if (d > 365)
        {
            y = d / 365;
            t = d - (365 * y);
            m = t / 30;
            t = t - (m * 30);
            if (t >= 7)
            {
                w = t / 7;
                nd = t - (w * 7);
            }
            else
            {
                w = 0;
                nd = t;
            }
        }
    }

    if (y != 0)
    {
        printf("%d Years ", y);
    }
    if (m != 0)
    {
        printf("%d Months ", m);
    }
    if (w != 0)
    {
        printf("%d Weeks ", w);
    }
    if (d != 0)
    {
        printf("%d Days\n", nd);
    }

    return 0;
}

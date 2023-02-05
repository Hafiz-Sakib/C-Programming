#include <stdio.h>
int main()
{
    int r, c, f = 1, a[100][100], b[100][100];
    scanf("%d %d", &r, &c);

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (a[i][j] != b[i][j])
            {
                f = 0;
                break;
            }
        }
        if (f == 0)
        {
            break;
        }
    }

    if (f)
    {
        printf("Both Matrices are equal\n");
    }
    else
    {
        printf("Both Matrices are not equal\n");
    }

    return 0;
}

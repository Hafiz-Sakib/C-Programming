#include <stdio.h>
int main()
{
    int n, a = 0, b = 1, c;
    printf("Enter The limit :\n");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
    return 0;
}

/* Enter The limit :
15

0 1 1 2 3 5 8 13 21 34 55 89 144 233 377 */
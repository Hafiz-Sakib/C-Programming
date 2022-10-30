#include <stdio.h>
int main()
{
    int x, y, sum;
    scanf("%d %d", &x, &y);

    int *X, *Y;
    X = &x;
    Y = &y;

    sum = *X + *Y;

    printf("Sum = %d", sum);

    return 0;
}
#include <stdio.h>
void Swapping(int *X, int *Y);

void Swapping(int *X, int *Y)
{

    int temp = *X;
    *X = *Y;
    *Y = temp;

    printf("After Swapping x is  = %d\n", *X);
    printf("After Swapping y is  = %d\n", *Y);
}

int main()
{
    int x, y, temp;
    scanf("%d %d", &x, &y);

    printf("Before Swapping x is  = %d\n", x);
    printf("Before Swapping y is  = %d\n", y);

    Swapping(&x, &y);

    return 0;
}
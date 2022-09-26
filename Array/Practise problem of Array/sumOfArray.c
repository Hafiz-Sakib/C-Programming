#include <stdio.h>
int main()
{
    int numbers[10], i;
    int size = sizeof numbers / sizeof numbers[0];
    int sum = 0;
    for (i = 0; i <= (size - 1); i++)
    {
        scanf("%d", &numbers[i]);
        sum = sum + numbers[i];
    }

    printf("%d", sum);
    return 0;
}
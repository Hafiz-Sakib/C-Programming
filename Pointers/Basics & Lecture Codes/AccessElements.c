#include <stdio.h>
int main()
{
    int a[500], n;

    printf("How many numbers you want to input?\n");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int *ptr;

    printf("Your Array Elements Are:\n");

    for (int i = 0; i < 5; i++)
    {
        ptr = &a[i];
        printf("%d\n", *ptr);
        ptr++;
    }

    return 0;
}
#include <stdio.h>
int main()
{
    int n, i;
    printf("Enter The Array Size :\n");
    scanf("%d", &n);
    int Array[n];

    for (i = 0; i < n; i++)
    {
        printf("Enter %d no number :\n", (i + 1));
        scanf("%d", &Array[i]);
    }

    int max = Array[0];
    int min = Array[0];

    for (i = 0; i < n; i++)
    {
        if (Array[i] > max)
        {
            max = Array[i];
        }

        if (Array[i] < min)
        {
            min = Array[i];
        }
    }
    printf("Max Number of Your Array is : %d\n", max);
    printf("Min Number of Your Array is : %d\n", min);

    return 0;
}
#include <stdio.h>
int main()
{
    int n, i;
    printf("Enter The Array Size :\n");
    scanf("%d", &n);
    int array[n];

    for (i = 0; i < n; i++)
    {
        printf("Enter %d no number :\n", (i + 1));
        scanf("%d", &array[i]);
    }
    int negativeCounter = 0;
    for (i = 0; i < n; i++)
    {

        if (array[i] < 0)
        {
            negativeCounter++;
        }
    }

    printf("Numbers of Your Array are:\n");

    for (i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }

    printf("\n");

    printf("Total %d Negative numbers\n", negativeCounter);
    return 0;
}
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
    int oddCounter = 0, evenCounter = 0;

    for (i = 0; i < n; i++)
    {

        if (array[i] % 2 == 0)
        {
            evenCounter++;
        }
        else
        {
            oddCounter++;
        }
    }

    printf("Numbers of Your Array are:\n");

    for (i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }

    printf("\n");

    printf("Total %d even numbers\n", evenCounter);
    printf("Total %d odd numbers", oddCounter);
    return 0;
}
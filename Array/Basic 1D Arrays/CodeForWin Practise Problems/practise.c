#include <stdio.h>
int main()
{
    int size, MAX = 1000, i, j, temp;
    int array[MAX];

    printf("Enter The Array Size :\n");
    scanf("%d", &size);

    for (i = 0; i < size; i++)
    {
        printf("Enter %d no number :\n", (i + 1));
        scanf("%d", &array[i]);
    }
    printf("Numbers of Your Array Are:\n");
    for (i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }

    int arr[size];
    j = 0;
    for (i = size - 1; i >= 0; i--)
    {
        arr[j] = array[i];
        j++;
    }

    printf("\nAfter Reverse:\n");
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
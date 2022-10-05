#include <stdio.h>
int main()
{
    int size, MAX = 1000, i, j, temp;
    int Array[MAX];

    printf("Enter The Array Size :\n");
    scanf("%d", &size);

    for (i = 0; i < size; i++)
    {
        printf("Enter %d no number :\n", (i + 1));
        scanf("%d", &Array[i]);
    }
    printf("Numbers of Your Array Are:\n");
    for (i = 0; i < size; i++)
    {
        printf("%d ", Array[i]);
    }

    int newArray[size];
    j = 0;
    for (i = size - 1; i >= 0; i--)
    {
        newArray[j] = Array[i];
        j++;
    }

    printf("\nAfter Reverse:\n");

    for (i = 0; i < size; i++)
    {
        printf("%d ", newArray[i]);
    }

    return 0;
}
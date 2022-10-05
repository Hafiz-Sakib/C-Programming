#include <stdio.h>
int IncrementalSort(int arr[], int size);
int main()
{
    int size1, size2, MAX = 1000, i, j, temp;
    int array1[MAX];
    int array2[MAX];

    printf("Enter The Array 1 Size :\n");
    scanf("%d", &size1);

    for (i = 0; i < size1; i++)
    {
        printf("Enter %d no number of Array 1 :\n", (i + 1));
        scanf("%d", &array1[i]);
    }

    printf("Enter The Array 2 Size :\n");
    scanf("%d", &size2);

    for (i = 0; i < size2; i++)
    {
        printf("Enter %d no number of Array 2 :\n", (i + 1));
        scanf("%d", &array2[i]);
    }

    printf("Numbers of Your Array 1 Are:\n");
    for (i = 0; i < size1; i++)
    {
        printf("%d ", array1[i]);
    }

    printf("\nNumbers of Your Array 2 Are:\n");
    for (i = 0; i < size2; i++)
    {
        printf("%d ", array2[i]);
    }

    array1[size1] = IncrementalSort(array1, size1);
    array2[size2] = IncrementalSort(array2, size2);

    printf("\nAfter Sort Your Array 1 is:\n");

    for (i = 0; i < size1; i++)
    {
        printf("%d ", array1[i]);
    }

    printf("\nAfter Sort Your Array 2 is:\n");

    for (i = 0; i < size2; i++)
    {
        printf("%d ", array2[i]);
    }

    return 0;
}
int IncrementalSort(int arr[], int size)
{
    int i, j, temp;
    for (i = 0; i < size; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    return arr[size];
}
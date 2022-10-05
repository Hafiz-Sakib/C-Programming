#include <stdio.h>
int IncrementalSort(int arr[], int size);

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
    printf("Numbers of Your Array are:\n");
    for (i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }

    // Calling the Function for Sort

    array[size] = IncrementalSort(array, size);

    printf("\nUniqe Elements are:\n");
    for (i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
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
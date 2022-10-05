#include <stdio.h>
int IncrementalSort(int arr[], int size);
int DeleteDuplicates(int arr[], int size);

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
    printf("Numbers of Your Array With Duplicate Elements:\n");
    for (i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }

    // Calling the Function for Sort

    array[size] = IncrementalSort(array, size);

    // Calling Function for Delete Duplicate Elements

    DeleteDuplicates(array, size);

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

int DeleteDuplicates(int arr[], int size)
{
    int i, j = 0;
    for (i = 0; i < size - 1; i++)
    {
        if (arr[i] != arr[i + 1])
        {
            arr[j] = arr[i];
            j++;
        }
    }
    arr[j] = arr[size - 1];

    printf("\nAfter Remove Duplicate Elements :\n");

    for (i = 0; i <= j; i++)
    {
        printf("%d ", arr[i]);
    }
}

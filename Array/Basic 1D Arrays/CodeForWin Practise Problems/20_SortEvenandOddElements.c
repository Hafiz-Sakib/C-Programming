#include <stdio.h>

void printArray(int arr[], int size);
void InputArrayElements(int arr[], int size);
int IncrementalSort(int arr[], int size);
void displaySortedEvenOdd(int arr[], int size);

int main()
{
    int size, MAX = 1000, i;
    int array[MAX];

    printf("Enter The Array     Size :\n");
    scanf("%d", &size);

    InputArrayElements(array, size);

    printf("Numbers of Your Array Are:\n");
    printArray(array, size);

    // Calling Sorting Function and Store the Sorted Elements In the Same Array

    array[size] = IncrementalSort(array, size);
    printf("\nAfter Sort Your Array  is:\n");

    for (i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }

    displaySortedEvenOdd(array, size);

    return 0;
}
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}
void InputArrayElements(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("Enter %d no number of Array 1 :\n", (i + 1));
        scanf("%d", &arr[i]);
    }
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

void displaySortedEvenOdd(int a[], int size)
{
    int i, j, temp;
    j = size - 1;
    while (i < j)
    {
        while (a[i] % 2 == 0)
        {
            i++;
        }

        while (a[j] % 2 != 0)
        {

            j--;
        }
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        i++;
        j--;
    }
    printf("\nFinal Result :\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }
}

/* Logic From :

https://www.youtube.com/watch?v=HDcIsAHvqis */
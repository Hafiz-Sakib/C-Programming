#include <stdio.h>
int IncrementalSort(int arr[], int size);
void DisplayMergedArray(int arr1[], int arr2[], int size1, int size2);
int main()
{
    int size1, size2, MAX = 1000, i;
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

    DisplayMergedArray(array1, array2, size1, size2);

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

void DisplayMergedArray(int arr1[], int arr2[], int size1, int size2)
{
    int newSize = size1 + size2;
    int array3[newSize];
    int i, j, k;
    i = j = k = 0;

    while (i < size1 && j < size2)
    {
        if (arr1[i] < arr2[j])
        {
            array3[k] = arr1[i];
            i++;
            k++;
        }
        else
        {
            array3[k] = arr2[j];
            j++;
            k++;
        }
    }

    while (i < size1)
    {
        array3[k++] = arr1[i++];
    }
    while (j < size2)
    {
        array3[k++] = arr2[j++];
    }

    printf("\nNew Merged Sorted Array is :\n");

    for (i = 0; i < newSize; i++)
    {
        printf("%d ", array3[i]);
    }
}
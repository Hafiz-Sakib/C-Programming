#include <stdio.h>
void duplicateElements(int arr[], int size);
int main()
{
    int size, i, j;

    printf("Enter The Array Size :\n");
    scanf("%d", &size);
    int array[size];
    int uniqeArray[size];

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

    duplicateElements(array, size);

    return 0;
}
void duplicateElements(int arr[], int size)
{
    int i, j, count;

    for (i = 0; i < size; i++)
    {
        for (j = (i + 1); j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
                break;
            }
        }
    }

    printf("\nTotal number of duplicate elements found in array = %d", count);
}
#include <stdio.h>
#include <stdbool.h>
void uniqeElements(int arr[], int size);
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

    printf("\nUniqe Numbers of Your Array are:\n");

    uniqeElements(array, size);

    return 0;
}
void uniqeElements(int arr[], int size)
{
    int i, j;
    for (i = 0; i < size; i++)
    {
        bool matchFound = false;

        for (j = 0; j < size; j++)

        {
            if (arr[i] == arr[j] && i != j) //প্রত্যেকবার সব এলিমেন্টের সাথে চেক করে দেখা লাগবে
            {
                matchFound = true;
            }
        }

        if (!matchFound)
        {
            printf("%d ", arr[i]);
        }
    }
}
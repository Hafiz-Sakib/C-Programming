#include <stdio.h>
void printArray(int arr[], int size);
int main()
{
    int size, i;

    printf("Enter The Array Size :\n");
    scanf("%d", &size);
    int array[size];

    for (i = 0; i < size; i++)
    {
        printf("Enter %d no number :\n", (i + 1));
        scanf("%d", &array[i]);
    }
    printf("Numbers of Your Array are:\n");

    printArray(array, size);

    int max = 100, oddCounter = 0, evenCounter = 0;
    int oddNumbers[max];
    int evenNumbers[max];

    for (i = 0; i < size; i++)
    {
        if (array[i] % 2 == 0)
        {
            evenNumbers[evenCounter] = array[i];
            evenCounter++;
        }
        else
        {
            oddNumbers[oddCounter] = array[i];
            oddCounter++;
        }
    }

    printf("\nEven Numbers of Your Array\n");
    printArray(evenNumbers, evenCounter);

    printf("\nOdd Numbers of Your Array\n");
    printArray(oddNumbers, oddCounter);

    return 0;
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}
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

        // 1 1 2 3 4 => Jodi j=(i+1) use kori tahole jokhn i er man 1 hbe tokon se 0 index er sathe compare korbena jar karone 1 index ke unique hishebe count korbe.otchocho 1 index er element 0 index eo ase.Jar karone amaderke inner loop e j er man always 0 theke shuru korte hbe jaate amra sob element er sathe compare kore dekhte pari

        {
            if (arr[i] == arr[j] && i != j) //প্রত্যেকবার সব এলিমেন্টের সাথে চেক করে দেখা লাগবে
            {
                matchFound = true;
            }
        }

        if (matchFound == false)
        {
            printf("%d ", arr[i]);
        }
    }
}
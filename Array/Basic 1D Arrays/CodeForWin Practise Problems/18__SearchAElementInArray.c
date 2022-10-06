#include <stdio.h>
int main()
{
    int size, i, element, found = -1;

    printf("Enter The Array Size :\n");
    scanf("%d", &size);
    int array[size];

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

    printf("\nEnter the Element you want to find in the array :\n");
    scanf("%d", &element);

    for (i = 0; i < size; i++)
    {
        if (array[i] == element)
        {
            found = i;
            break;
        }
    }

    if (found != -1)
    {
        printf("Your Searched element %d is Found and It locates in %d position!", element, (found + 1));
    }
    else
    {
        printf("Sorry! Your Searched element %d is not found!\n", element);
    }

    return 0;
}
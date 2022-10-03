#include <stdio.h>
int main()
{
    // Just a boilerplate for Array Input and Output
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
    for (i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }

    return 0;
}
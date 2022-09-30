#include <stdio.h>
int main()
{
    int n, i;
    printf("Enter The Array Size :\n");
    scanf("%d", &n);
    int array1[n], array2[n];

    for (i = 0; i < n; i++)
    {
        printf("Enter %d no number :\n", (i + 1));
        scanf("%d", &array1[i]);
        array2[i] = array1[i];
    }
    printf("Array 1 Elements Are: ");

    for (i = 0; i < n; i++)
    {
        printf("%d ", array1[i]);
    }

    printf("\nArray 2 Elements Are: ");

    for (i = 0; i < n; i++)
    {
        printf("%d ", array2[i]);
    }
    return 0;
}
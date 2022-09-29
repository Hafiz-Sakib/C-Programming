#include <stdio.h>
#include <limits.h>
int main()
{
    int n, i;
    printf("Enter The array Size :\n");
    scanf("%d", &n);
    int array[n];
    for (i = 0; i < n; i++)
    {
        printf("Enter %d no number :\n", (i + 1));
        scanf("%d", &array[i]);
    }
    printf("Your Array is : ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }

    printf("\n");

    int maximum, secondLarge;
    maximum = secondLarge = INT_MIN;
    for (i = 0; i < n; i++)
    {
        if (array[i] > maximum)
        {
            secondLarge = maximum;
            maximum = array[i];
        }
        else if (array[i] > secondLarge && array[i] < maximum)
        {
            secondLarge = array[i];
        }
    }

    printf("%d is the second large", secondLarge);

    return 0;
}
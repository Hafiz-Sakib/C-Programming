#include <stdio.h>
int main()
{
    int size, i, j, count = 0;

    printf("Enter The Array Size :\n");
    scanf("%d", &size);

    int array[size], frequency[size];

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

    printf("\n");

    for (i = 0; i < size; i++)
    {
        count = 1;
        if (array[i] != -1)
        {
            for (j = (i + 1); j < size; j++)
            {
                if (array[i] == array[j])
                {
                    count++;
                    array[j] = -1;
                }
            }
            frequency[i] = count;
        }
    }

    for (i = 0; i < size; i++)
    {
        if (array[i] != -1)
        {
            printf("%d is present %d times\n", array[i], frequency[i]);
        }
    }

    return 0;
}
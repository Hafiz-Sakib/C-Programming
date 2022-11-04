#include <stdio.h>
#include <limits.h>
int main()
{
    int size, i, j, count, min = INT_MIN;

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
        if (array[i] != min)
        {
            for (j = 0; j < size; j++)
            {
                if (array[i] == array[j] && i != j)
                {
                    count++;
                    array[j] = min;
                }
            }
            frequency[i] = count;
        }
    }

    for (i = 0; i < size; i++)
    {
        if (array[i] != min)
        {
            printf("%d is present %d times\n", array[i], frequency[i]);
        }
    }

    return 0;
}

/* if needed to reawatch the logic https://youtu.be/jKFsTTctXF0 */
#include <stdio.h>
#include <limits.h>
int main()
{
    printf("Enter How many numbers you want to Compare : \n");
    int n;
    scanf("%d", &n);
    int array[n], max = INT_MIN, size = sizeof array / sizeof array[0];
    for (int i = 0; i <= (size - 1); i++)
    {
        printf("Enter %d no number\n", (i + 1));
        scanf("%d", &array[i]);
        if (array[i] > max)
        {
            max = array[i];
        }
    }
    printf("\n%d", max);
    return 0;
}
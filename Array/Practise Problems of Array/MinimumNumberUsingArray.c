#include <stdio.h>
#include <limits.h>
int main()
{
    printf("Enter How many numbers you want to Compare : \n");
    int n;
    scanf("%d", &n);
    int array[n], min = INT_MAX, size = sizeof array / sizeof array[0];
    for (int i = 0; i <= (size - 1); i++)
    {
        printf("Enter %d no number\n", (i + 1));
        scanf("%d", &array[i]);
        if (array[i] < min)
        {
            min = array[i];
        }
    }
    printf("\n%d", min);
    return 0;
}
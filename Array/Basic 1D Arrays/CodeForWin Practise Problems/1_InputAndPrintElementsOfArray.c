#include <stdio.h>
int main()
{
    int n, i;
    printf("Enter The Array Size :\n");
    scanf("%d", &n);
    int Array[n];
    for (i = 0; i < n; i++)
    {
        printf("Enter %d no number :\n", (i + 1));
        scanf("%d", &Array[i]);
    }
    printf("Numbers of Your Array are:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", Array[i]);
    }

    return 0;
}
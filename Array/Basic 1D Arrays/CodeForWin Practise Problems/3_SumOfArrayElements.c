#include <stdio.h>
int main()
{
    int n, i, sum = 0;
    printf("Enter The Array Size :\n");
    scanf("%d", &n);
    int Array[n];
    for (i = 0; i < n; i++)
    {
        printf("Enter %d no number :\n", (i + 1));
        scanf("%d", &Array[i]);
        sum = sum + Array[i];
    }
    printf("Sum of Your Array Elements is : %d", sum);

    return 0;
}
#include <stdio.h>
int main()
{
    int n;
    printf("Enter How Many Numbers you Want to Input?\n");
    scanf("%d", &n);
    int array1[n];
    int array2[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter %d no number:", (i + 1));
        scanf("%d", &array1[i]);
    }

    //এরে১ থেকে এরে২ তে এলিমেন্টগুলো কপি করে নিয়ে আসা লাগবে 🤞

    printf("Array1 :");
    for (int i = 0; i < n; i++)
    {

        printf("%d ", array1[i]);
    }
    printf("\nArray2 :");
    for (int i = 0; i < n; i++)
    {
        array2[i] = array1[i];
        printf("%d ", array2[i]);
    }

    return 0;
}
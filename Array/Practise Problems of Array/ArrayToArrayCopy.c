#include <stdio.h>
int main()
{
    int array1[5] = {10, 20, 30, 40, 50};
    int array2[5];
    //এরে১ থেকে এরে২ তে এলিমেন্টগুলো কপি করে নিয়ে আসা লাগবে 🤞
    printf("Array1 :");
    for (int i = 0; i < 5; i++)
    {

        printf("%d ", array1[i]);
    }
    printf("\nArray2 :");
    for (int i = 0; i < 5; i++)
    {
        array2[i] = array1[i];
        printf("%d ", array2[i]);
    }

    return 0;
}
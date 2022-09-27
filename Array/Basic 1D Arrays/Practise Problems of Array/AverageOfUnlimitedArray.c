#include <stdio.h>
int main()
{
    int n;
    printf("How many numbers you want to do average?\n");
    scanf("%d", &n);
    int numbers[n], i, count = 0, sum = 0, size = sizeof numbers / sizeof numbers[0];
    float average;
    for (i = 0; i <= (size - 1); i++)
    {
        count++;
        printf("Enter the %d number :\n", (i + 1));
        scanf("%d", &numbers[i]);
        sum = sum + numbers[i];
    }
    average = sum * 1.0 / count; // we can also use (n-1) instead of count variable & thats easy i must say!
    printf("Average of your numbers is :\n");
    printf("%.2f", average);
    return 0;
}
#include <stdio.h>
int main()
{
    int n, reminder, sum = 0, temp;
    printf("Enter the number : \n");
    scanf("%d", &n);
    temp = n;
    while (n > 0)
    {
        reminder = n % 10;
        sum = sum * 10 + reminder;
        n = n / 10;
    }
    n = temp;
    if (n == sum)
    {
        printf("It's a Palindrome number\n");
    }
    else
    {
        printf("It's not a Palindrome number\n");
    }
    return 0;
}
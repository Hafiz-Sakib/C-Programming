#include <stdio.h>
int main()
{
    int n, i, position = -1;
    printf("How many numbers you want to input?: \n");
    scanf("%d", &n);
    int numbers[n];
    for (i = 0; i <= (n - 1); i++)
    {
        printf("Enter %d no number : ", (i + 1));
        scanf("%d", &numbers[i]);
    }

    printf("What Number You Want to Find in Your Inputed Numbers?\n");
    int findOut;
    scanf("%d", &findOut);

    for (i = 0; i <= (n - 1); i++)
    {
        if (findOut == numbers[i])
        {
            printf("Yes!Your Desired Number %d is Present in the List\n", findOut);
            position = i + 1;
            break;
        }
    }
    if (position == -1)
    {
        printf("Sorry,Your Desired Number %d is not in the list!", findOut);
    }
    else
    {
        printf("The Position of your desired Number is %d", position);
    }

    return 0;
}
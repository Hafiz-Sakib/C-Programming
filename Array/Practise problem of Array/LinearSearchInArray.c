#include <stdio.h>
int main()
{
    int n, i, position;
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
            printf("Yes!Your Desired Number is Present in the List\n");
            position = i + 1;
            printf("The Position of your desired Number is %d", position);
            break;
        }
        else
        {
            printf("Sorry,Your Desired Number is not in the list!");
            break;
        }
    }

    return 0;
}
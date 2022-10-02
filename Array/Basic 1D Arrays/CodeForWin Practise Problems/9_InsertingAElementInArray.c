#include <stdio.h>
int main()
{
    int n, i;
    printf("Enter The Array Size :\n");
    scanf("%d", &n);
    int array[n];

    for (i = 0; i < n; i++)
    {
        printf("Enter %d no number :\n", (i + 1));
        scanf("%d", &array[i]);
    }
    printf("Numbers of Your Array are:\n");

    for (i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }

    printf("\n");

    int element, position;
    printf("Enter the Element You Want to Insert :\n");
    scanf("%d", &element);
    printf("Enter the Position You Want to Insert :\n");
    scanf("%d", &position);

    if (position > (n + 1) || position < 0)
    {
        printf("Invalid Position to Insert a Element");
    }
    else
    {
        //সবার ডানপাশ থেকে লুপ শুরু করতে হবে এবং পজিশন ১ বাড়িয়ে নতুন পজিশনে আগের এলিমেন্ট পাস করতে হবে ,নিচের লুপ টা মূলত এজন্যই চালানো হয়েছে..
        for (i = n - 1; i >= position; i--)
        {
            array[i + 1] = array[i];
        }

        array[position] = element;

        for (i = 0; i < n + 1; i++)
        {
            printf("%d ", array[i]);
        }
    }

    return 0;
}
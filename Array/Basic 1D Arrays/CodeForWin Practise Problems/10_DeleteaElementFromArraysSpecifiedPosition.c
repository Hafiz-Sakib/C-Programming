#include <stdio.h>
int main()
{
    int size, MAX = 1000, i, position;
    int array[MAX];

    printf("Enter The Array Size :\n");
    scanf("%d", &size);

    for (i = 0; i < size; i++)
    {
        printf("Enter %d no number :\n", (i + 1));
        scanf("%d", &array[i]);
    }
    printf("Numbers of Your Array are:\n");
    for (i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }

    printf("\n");

    printf("Which Position number you want to delete?\n");
    scanf("%d", &position);

    if (position < 0 || position > size)
    {
        printf("Invalid Position for delete a element!");
    }
    else
    {
        //যত পজিশন বলবে তার আগের ইনডেক্স থেকে লুপ শুরু করতে হবে কারণ,ইউজার যে পজিশন বলবে সেটা আসলে ইন্ডেক্স না! উদাহরণস্বরুপ ঃ ইউজার যদি চায় ২ নাম্বার পজিশনে থাকা এলিমেন্ট ডিলেট করবো,তার মানে সে আসলে ১ নং ইন্ডেক্সে থাকা এলিমেন্ট ডিলেট করতে চাচ্ছে!

        for (i = (position - 1); i < size; i++)
        {
            array[i] = array[i + 1];
        }

        size--;
    }

    printf("Numbers of Your Array After Delatation :\n");

    for (i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }

    return 0;
}
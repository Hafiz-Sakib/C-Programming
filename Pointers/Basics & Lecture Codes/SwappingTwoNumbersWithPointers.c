#include <stdio.h>
int main()
{
    int x, y, temp;
    scanf("%d %d", &x, &y);

    printf("Before Swapping x is  = %d\n", x);
    printf("Before Swapping y is  = %d\n", y);

    int *X, *Y;
    X = &x;
    Y = &y;

    temp = *X; //*X মানে X পয়েন্টার যে ভেরিয়েবল এর মেমোরি এড্রেস নির্দেশ করতেসে তার ভ্যালু।
    *X = *Y;
    *Y = temp;

    printf("After Swapping x is  = %d\n", *X);
    printf("After Swapping y is  = %d\n", *Y);

    return 0;
}
#include <stdio.h>
#include <string.h>
int main()
{

    char String1[100], String2[100];
    printf("Enter String 1 : ");
    gets(String1);
    printf("Enter String 2 : ");
    gets(String2);

    int result = strcmp(String1, String2);

    // It Will Provide result 0 or 1.We Have to Store it and Show Output as per result using conditional Stratement

    if (result = 1)
    {
        printf("Yes! Both String are Same!! ");
    }
    else
    {
        printf("No! Both String are not Same!! ");
    }

    return 0;
}
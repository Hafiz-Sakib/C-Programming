#include <stdio.h>

int main()
{
    char name[100];
    printf("Enter Your Name :\n");
    gets(name);
    int i = 0, count = 0;

    while (name[i] != '\0')
    {
        i++;
        count++;
    }
    printf("%d", count);
    return 0;
}
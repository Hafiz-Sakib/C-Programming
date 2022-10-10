#include <stdio.h>
#include <string.h>
int main()
{
    char name[100];
    printf("Enter Your Name :\n");
    gets(name);
    int x = strlen(name);
    printf("%d", x);
    return 0;
}
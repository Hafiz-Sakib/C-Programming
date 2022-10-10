#include <stdio.h>
#define line printf("\n")
int main()
{

    char name[1000];

    printf("Enter Your name : ");

    gets(name);

    line;

    printf("Hello Dear %s", name);

    return 0;
}
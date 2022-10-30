#include <stdio.h>
int main()
{
    int x = 5;
    int *ptr;
    ptr = &x;
    printf("%x", ptr);
    return 0;
}
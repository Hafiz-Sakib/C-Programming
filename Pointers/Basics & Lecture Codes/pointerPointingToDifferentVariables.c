#include <stdio.h>
int main()
{

    // Value Print Using Pointer

    int x = 5, y = 10, z = 15;
    int *ptr;

    ptr = &x;
    printf("x = %d\n", *ptr);

    ptr = &y;
    printf("y = %d\n", *ptr);

    ptr = &z;
    printf("z = %d\n", *ptr);

    return 0;
}
#include <stdio.h>

int main()
{
    int n;
    printf("Size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Created an array of size %lu\n", sizeof(arr) / sizeof(arr[0]));
    return 0;
}
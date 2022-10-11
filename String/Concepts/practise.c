#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100 // Maximum string size

/* Function declaration */
int indexOf(const char *str, const char toFind);

int main()
{
    char str[MAX_SIZE];
    char toFind;
    int index;

    /* Input string from user and character to be searched */
    printf("Enter any string: ");
    gets(str);
    printf("Enter character to be searched: ");
    toFind = getchar();

    index = indexOf(str, toFind);

    if (index == -1)
        printf("'%c' not found.", toFind);
    else
        printf("'%c' is found at index %d.", toFind, index);

    return 0;
}

/**
 * Returns the first index of the given character toFind in the string.
 * If returns -1 if the given character toFind does not exists in the string.
 */
int indexOf(const char *str, const char toFind)
{
    int i = 0;

    while (str[i] != '\0')
    {
        if (str[i] == toFind)
            return i;
        i++;
    }

    // Return -1 as character not found
    return -1;
}
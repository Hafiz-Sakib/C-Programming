#include <stdio.h>
#include <string.h>
int main()
{

    char string1[100], ch;
    int i, capital, small, digit;
    i = capital = small = digit = 0;

    printf("Enter String 1 : ");
    gets(string1);

    while ((ch = string1[i]) != '\0')
    {
        if (ch >= 65 && ch <= 90)
        {
            capital++;
        }
        else if (ch >= 97 && ch <= 122)
        {
            small++;
        }

        else if (ch >= 48 && ch <= 57)
        {
            digit++;
        }

        i++;
    }

    printf("Number of capitals %d\n", capital);
    printf("Number of smalls %d\n", small);
    printf("Number of Digit %d\n", digit);

    return 0;
}
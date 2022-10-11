#include <stdio.h>
#include <string.h>
int main()
{
    char str[30];
    printf("Enter your String(Upper case):");
    gets(str);
    int i = 0;
    // convert capital letter string to small letter string
    while (str[i] != '\0')
    {
        if (str[i] > 64 && str[i] < 91) // or if(str[i]>='A' && str[i]<='Z')
            str[i] += 32;
        i++;
    }
    printf("Lower case String is:%s", str);
}
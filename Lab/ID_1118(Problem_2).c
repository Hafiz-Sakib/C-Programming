/*

ID : 0222210005101118
Name : Sakib

 */
#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);

    switch (t / 10)
    {
    case 4:
    case 2:
    case 1:
    case 0:
    {
        printf("Very Cold Weather\n");
        break;
    }
    case 5:
    case 6:
    {
        printf("Cold Weather\n");
        break;
    }
    case 7:
    case 8:
    {
        printf("Normal in temp\n");
        break;
    }
    case 9:
    case 10:
    case 11:
    {
        printf("It's Hot\n");
        break;
    }
    default:
    {
        printf("It's Very Hot\n");
        break;
    }
    }

    return 0;
}

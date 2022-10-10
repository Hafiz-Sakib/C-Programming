#include <stdio.h>
#include <string.h>
int main()
{
    // concatenation means addition of two string

    char FirstName[100], LastName[100];
    printf("Enter Your First Name : ");
    gets(FirstName);
    printf("Enter Your Last Name : ");
    gets(LastName);
    strcat(FirstName, LastName);

    printf("Your Full Name is : %s \n", FirstName);

    return 0;
}
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

    //যুক্ত হবার পরে নতুন সংযুক্ত স্ট্রিং ১ম স্ট্রিং এ কপি হয়ে যাবে.
    // That's Why printed Firstname

    return 0;
}
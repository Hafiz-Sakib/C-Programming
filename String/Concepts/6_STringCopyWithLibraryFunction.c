#include <stdio.h>
#include <string.h>
int main()
{
    char name[100];
    char copyHere[100];
    printf("Enter Your Name :\n");
    gets(name);

    strcpy(copyHere, name); // char* strcpy(char* destination, const char* source);

    //প্রথম প্যারামিটার হবে টার্গেটের নাম,দ্বিতীয় প্যারামিটার হবে ভিক্টিম

    printf("Your Inputed Name : %s\n", name);
    printf("Your Copied Name : %s\n", copyHere);
    return 0;
}
#include <iostream>
#define read cin >>
#define write cout <<
using namespace std;
int main()
{
    char name[1000];
    write("Write Your Name :\n");

    // read(name);
    gets(name);

    write("Your name is ");

    write(name);

    return 0;
}
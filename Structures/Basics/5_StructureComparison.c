#include <stdio.h>

struct person
{
    int age;
    float salary;
};

int main()
{
    struct person ohid, yousha;

    ohid.age = 22;
    yousha.age = 22;
    ohid.salary = 2222.22;
    yousha.salary = 21511.22;

    struct person nawaz;

    nawaz = yousha;

    if (ohid.age == yousha.age && ohid.salary == yousha.salary)
    {
        printf("Ohid's and Yousha's Age and Salary are Same!\n");
    }
    else
    {
        printf("Ohid's and Yousha's Age and Salary are not Same!\n");
    }

    if (nawaz.age == yousha.age && nawaz.salary == yousha.salary)
    {
        printf("Nawaz's and Yousha's Age and Salary are Same!\n");
    }
    else
    {
        printf("Nawaz's and Yousha's Age and Salary are not Same!\n");
    }

    return 0;
}
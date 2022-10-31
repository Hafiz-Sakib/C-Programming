#include <stdio.h>

struct person
{
    int age;
    float salary;
};

int main()
{
    struct person sakib = {21, 21500.45};

    // element wise assignment  :

    struct person ohid, yousha;

    ohid.age = 22;
    yousha.age = 22;
    ohid.salary = 2222.22;
    yousha.salary = 21511.22;

    printf("Age of  Sakib : %d\n", sakib.age);
    printf("Salary of  Sakib : %.2f\n", sakib.salary);

    return 0;
}
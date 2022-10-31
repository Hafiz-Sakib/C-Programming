#include <stdio.h>
struct person sakib, ohid; // Global Variable
int main()
{

    // Global Structure can be accessed from any function but  local function can be accessed only in main function

    // Local Structure
    struct person
    {
        int age;
        float salary;
    };

    struct person sakib, ohid; // Local Variable

    sakib.age = 21;
    ohid.age = 22;
    sakib.salary = 20200.250;
    ohid.salary = 202000.250;

    printf("Age of  Sakib : %d\n", sakib.age);
    printf("Age of  Ohid : %d\n", ohid.age);
    printf("Salary of  Sakib : %.2f\n", sakib.salary);
    printf("Salary of  Ohid : %.2f\n", ohid.salary);

    return 0;
}
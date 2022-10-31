#include <stdio.h>

struct person
{
    int age;
    float salary;
};

int main()
{
    struct person sakib, ohid;

    printf("Enter Age : \n");
    scanf("%d", &sakib.age);
    printf("Enter Salary : \n");
    scanf("%f", &sakib.salary);

    printf("Enter Age : \n");
    scanf("%d", &ohid.age);
    printf("Enter Salary : \n");
    scanf("%f", &ohid.salary);

    printf("Age of  Sakib : %d\n", sakib.age);
    printf("Age of  Ohid : %d\n", ohid.age);
    printf("Salary of  Sakib : %.2f\n", sakib.salary);
    printf("Salary of  Ohid : %.2f\n", ohid.salary);

    return 0;
}
#include <stdio.h>

struct person
{
    int age;
    float salary;
};

int main()
{
    // element wise assignment way 01 :

    struct person sakib = {21, 21500.45};

    // element wise assignment way 02 :

    struct person ohid, yousha;

    ohid.age = 22;
    yousha.age = 22;
    ohid.salary = 2222.22;
    yousha.salary = 21511.22;

    // structure Variable Assignment

    struct person nawaz;

    nawaz = yousha; // Yousha এর ইনফরমেশনগুলো নওয়াজ ভেরিয়েবল এর মধ্যে চলে আসবে।এককথায়,এক স্ট্রাকচার ভেরিয়েবল থেকে অন্য স্ট্রাকচার ভেরিয়েবল এর মধ্যে কপি করা

    printf("Age of Nawaz : %d\n", nawaz.age);
    printf("Salary of  Nawaz : %.2f\n", nawaz.salary);

    return 0;
}
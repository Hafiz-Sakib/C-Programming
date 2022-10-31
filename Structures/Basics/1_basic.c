
// ** Structure is a Collection of Variables of Difgferent types under a Single name!

// A Structure is a User Defined Data Type in C/C++

// ** মোটকথা, স্ট্রাক্ট হলো নিজের মত করে তৈরী করা একটা কাস্টম ভেরিয়েবল যে ভেরিয়েবল এর ভিতরে আমি ইচ্ছামতো ভেরিয়েবল ক্রিয়েট করবো এবং পরবতীতে  (.) কিওয়ার্ড ব্যবহার করে ইচ্ছামত এক্সেস করা যাবে।

// It's Kinda Like Object From JavaScript 😁😁

#include <stdio.h>

struct person
{
    int age;
    float salary;
};

int main()
{
    struct person sakib, ohid;
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
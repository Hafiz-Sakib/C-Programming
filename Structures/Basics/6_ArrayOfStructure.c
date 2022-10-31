#include <stdio.h>
#include <string.h>

struct students
{
    char name[100];
    int age;
    int roll;
    float cgpa;
};

int main()
{
    int n;
    printf("Enter the numbers of students in your class : \n");
    scanf("%d", &n);
    struct students student[n];

    // This loop running for taking Input :

    for (int i = 0; i < n; i++)
    {
        printf("Enter information of Student %d : \n", (i + 1));
        printf("Enter the name of Student : \n");
        gets(student[0].name);
        printf("Enter the age of Student : \n");
        scanf("%d", &student[i].age);
        printf("Enter the roll of Student : \n");
        scanf("%d", &student[i].roll);
        printf("Enter the CGPA of Student : \n");
        scanf("%f", &student[i].cgpa);
    }

    // This loop running for Showing Outpus :

    for (int i = 0; i < n; i++)
    {
        printf("This is the Information About  %s : \n", student[i].name);
        printf(" Name of Student %s: \n", student[i].name);

        printf("Age of %s is : %d\n", student[i].name, student[i].age);

        printf("Roll of %s is : %d\n", student[i].name, student[i].roll);

        printf("CGPA of %s is : %.2f\n", student[i].name, student[i].cgpa);
    }

    return 0;
}
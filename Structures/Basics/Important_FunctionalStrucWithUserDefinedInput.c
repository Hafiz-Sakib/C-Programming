#include <stdio.h>
#include <string.h>

struct students
{
    char name[100];
    int age;
    int roll;
    float cgpa;
};

void ReadStudents(int n, struct students *student)
{

    for (int i = 0; i < n; i++)
    {
        printf("\nEnter information of Student %d : \n\n", (i + 1));

        printf("Enter the name of Student : \n");
        fflush(stdin);
        gets(student[i].name);

        printf("Enter the age of Student : \n");
        scanf("%d", &student[i].age);

        printf("Enter the roll of Student : \n");
        scanf("%d", &student[i].roll);

        printf("Enter the CGPA of Student : \n");
        scanf("%f", &student[i].cgpa);
    }
}

void WriteStudents(struct students student)
{
    printf("\nThis is the Information About : %s\n\n", student.name);

    printf("Name of Student : %s\n", student.name);

    printf("Age of %s is : %d\n", student.name, student.age);

    printf("Roll of %s is : %d\n", student.name, student.roll);

    printf("CGPA of %s is : %.2f\n", student.name, student.cgpa);
}

int main()
{
    int n;
    printf("Enter the numbers of students in your class : \n");
    scanf("%d", &n);
    struct students student[n];

    ReadStudents(n, student);

    for (int i = 0; i < n; i++)
    {
        WriteStudents(student[i]);
    }

    return 0;
}
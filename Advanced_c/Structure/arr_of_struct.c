#include <stdio.h>

struct student
{
    char name[10];
    int roll;
    float marks;
};

void main()
{
    struct student s[10];
    s[0] = (struct student){"Surya", 11, 99.5};

    printf("Name: %s\nRoll Number: %d\nMarks: %f\n", s[0].name, s[0].roll, s[0].marks);

    printf("Enter student's details:\nName\nRoll\nMarks\n");
    scanf("%s", s[1].name);
    scanf("%d", &s[1].roll);
    scanf("%f", &s[1].marks);
    printf("Name: %s\nRoll Number: %d\nMarks: %f\n", s[1].name, s[1].roll, s[1].marks);
}
#include <stdio.h>

struct Emp
{
    int eid;
    float salary;
    float experience;
};

struct Stud
{
    int roll;
    int class;
    float marks;
};

struct EmpStud
{
    struct Emp emp1;
    struct Stud stud1;
};

void main()
{
    struct EmpStud data;
    data.emp1 = (struct Emp){44, 44.65, 4.7};

    printf("%d\t%f\t%f\n", data.emp1.eid, data.emp1.salary, data.emp1.experience);

    printf("Enter employee id:");
    scanf("%d", &data.emp1.eid);
    printf("%d\n", data.emp1.eid);
    data.stud1.roll = 111;
    printf("%d\n", data.stud1.roll);
}
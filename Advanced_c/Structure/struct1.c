#include <stdio.h>

struct emp
{
    char name[10];
    int hiredate;
    float salary;
};

struct emp emp1;
void main()
{
    printf("Enter the employee name: ");
    scanf("%s", emp1.name);

    printf("Enter the hire date: ");
    scanf("%d", &emp1.hiredate);

    printf("Enter thye salary: ");
    scanf("%f", &emp1.salary);

    struct emp emp1 = {"Surya", 23, 34.2};

    printf("%s\n", emp1.name);
    printf("%d\n", emp1.hiredate);
    printf("%f\n", emp1.salary);
}
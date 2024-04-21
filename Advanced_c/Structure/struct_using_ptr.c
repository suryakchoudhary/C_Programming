#include <stdio.h>

struct member
{
    int roll;
    char name[10];
};

void main()
{
    struct member data, *stptr;
    stptr = &data;

    stptr->roll = 22;
    printf("Roll number: %d\n", stptr->roll);

    printf("Enter employee name: ");
    scanf("%s", stptr->name);
    printf("%s\n", stptr->name);
}
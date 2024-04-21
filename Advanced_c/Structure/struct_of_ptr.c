#include <stdio.h>

struct str
{
    int *ptr1;
    int *ptr2;
};

void main()
{
    struct str pointer;
    int roll = 34;
    pointer.ptr1 = &roll;
    int num;

    printf("Roll: %d\n", *pointer.ptr1);

    printf("Enter integer for ptr2: ");
    scanf("%d", &num);
    pointer.ptr2 = &num;
    printf("Integer for ptr2: %d\n", *pointer.ptr2);
}
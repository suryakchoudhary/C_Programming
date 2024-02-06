/*Write a program to demonstrate bitwise operators*/

#include<stdio.h>
int main()
{
    int A=1, B=3;
    int Result_AND, Result_OR, Result_NOT, Left_shift, Right_shift;

    Result_AND = A&B;

    Result_OR = A|B;

    Result_NOT = ~A;

    Left_shift = A<<2;

    Right_shift =B>>2;

    printf("Result_AND: %d\n", Result_AND);

    printf("Result_OR: %d\n", Result_OR);

    printf("Result_NOT: %d\n", Result_NOT);

    printf("Left_shift: %d\n", Left_shift);

    printf("Right_shift: %d\n", Right_shift);

    return 0;
}


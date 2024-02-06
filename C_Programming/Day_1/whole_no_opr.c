/*Develop a C program to perform operations (+,*,-, / and %) on two whole numbers.
Identify suitable data types to represent the numbers and resultant values*/

#include<stdio.h>
int main()
{
    int operand_1 ,operand_2;
    char operatorr;
    printf("Enter the number\n");
    scanf("%d%c%d",&operand_1, &operatorr, &operand_2);
    if(operatorr=='+')
        printf("%d",operand_1 + operand_2);

    else if(operatorr=='*')
        printf("%d",operand_1 * operand_2);

    else if(operatorr=='-')
        printf("%d",operand_1 - operand_2);

    else if(operatorr=='/')
        printf("%d",operand_1 / operand_2);

    else if(operatorr=='%')
        printf("%d",operand_1 % operand_2);

    return 0;

}


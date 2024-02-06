/*Develop a C program to calculate simple interest using the formula I=PTR/100. */
#include<stdio.h>
int main()
{
    float P, T, I, Simple_interest;
    printf("Enter the value for PRINCIPLE: ");
    scanf("%f", &P);

    printf("Enter the value for TIME: ");
    scanf("%f", &T);

    printf("Enter the value for INTEREST: ");
    scanf("%f", &I);

    Simple_interest = (P*T*I)/100;

    printf("The simple interest is: %f", Simple_interest);

    return 0;
}

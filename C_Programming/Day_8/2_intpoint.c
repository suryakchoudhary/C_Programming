//Write a C program to declare an integer and an integer pointer to it. Initialize the integer variable. Print the value of the int variable using pointer variable.


#include<stdio.h>
int main()
{
	int var1 = 100, var2 = 200, *ptr1, *ptr2;
	ptr1 = &var1;
	ptr2 = &var2;
	printf("Printing the value of the int variable using pointer variable\n");
	printf("The value: var1 = %d\nThe value: var2 = %d\n", *ptr1, *ptr2);
	return 0;
}

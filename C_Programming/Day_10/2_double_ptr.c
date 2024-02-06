//Write a C program to demonstrate double pointer.

#include<stdio.h>
int main(void)
{
	int num, *ptr1 = &num, **ptr2= &ptr1;
//	ptr1 = &num;
//	ptr2=&ptr1;
	printf("Enter any digit to find its address using double pointer.\n");
	scanf("%d", ptr1);
	printf("The ddress of %d is %p\n", **ptr2, *ptr2);
	return 0;
}




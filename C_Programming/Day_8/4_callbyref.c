//Write a swap function and use call by reference. 

#include<stdio.h>
int swap(int *ptr1, int *ptr2)
{
	int temp;
	temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;
//	printf("After swapping:\nX = %d and Y = %d\n",*ptr1, *ptr2);
}
int main()
{
	int X , Y, *ptr3 = &X, *ptr4 = &Y;
	printf("Enter the value of two numbers for swapping:\n");
	printf("Enter the value for X: ");
	scanf("%d", ptr3);
	printf("Enter the vakue for Y: ");
	scanf("%d", ptr4);
	printf("Before swapping:\nX = %d and Y = %d\n", *ptr3, *ptr4);
	swap(ptr3, ptr4);
	printf("After swapping:\nX = %d and Y = %d\n", *ptr3, *ptr4);
	return 0;
}




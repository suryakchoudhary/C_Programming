#include<stdio.h>
int main()
{
	int x=10, y=20;
	int * ptr1, * ptr2;

	ptr1 = &x;
	ptr2 = &y;

	printf("x = %d\t Y = %d\n", x, y);
	printf("*ptr1 = %d\t *ptr2 = %d\n", *ptr1, *ptr2);
	printf("ptr1 = %p\t ptr2 = %p\n", ptr1, ptr2);	
	printf("SIZE OF ptr1 = %ld\t ptr2 = %ld\n", sizeof(ptr1), sizeof(ptr2));
}


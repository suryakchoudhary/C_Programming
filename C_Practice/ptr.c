#include<stdio.h>
 
int main()
{
	int *ptr, num=10;
	ptr = &num;
	printf("num = %d\n", num);

	printf("add of num = %p\n", &num);

	printf("ptr = %p\n", ptr);

	printf("ptr store = %d\n", *ptr);

	printf("Add of ptr = %p\n", &ptr);

	return 0;
}

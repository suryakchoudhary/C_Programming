#include<stdio.h>
int sum(int, int);
int main()
{
	int x, y, fn;
	printf("Enter num\n");
	scanf("%d%d", &x, &y);
	fn = sum(x, y);
	printf("Sum = %d\n", sum(x, y));
	return 0;
}

int sum(int x, int y)
{
	int add=0;
	add = x+y;
//	printf("Inside fun %d\n", add);
	return add;
}


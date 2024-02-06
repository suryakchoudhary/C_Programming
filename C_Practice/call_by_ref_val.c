#include<stdio.h>
int num(int *, int *);
int val(int, int);
int main()
{
	int n1, n2;
	printf("Enter 2 num.\n");
	scanf("%d%d", &n1, &n2);

	num(&n1, &n2);
	printf("IN MAIN BY REFERENCE n1 = %d..............n2 = %d\n", n1, n2);
	val(n1, n2);
	printf("IN MAIN BY VALUE n1 = %d..............n2 = %d\n", n1, n2);
}

int num(int *x, int *y)
{
	*x = 1111;
	*y = 2222;
	printf("IN FUNCTION BY REFERENCE n1 = %d..............n2 = %d\n", *x, *y);

	return 0;
}

int val(int a, int b)
{
	a = 999;
	b = 888;
	printf("IN FUNCTION BY VALUE n1 = %d..............n2 = %d\n", a, b);
	return a, b;
}





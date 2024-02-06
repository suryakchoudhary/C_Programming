#include<stdio.h>
int fact(int);
int main()
{
	int x, fun;
	printf("Enter +ve no.\n");
	scanf("%d", &x);
	fun = fact(x);
	printf("Factorial = %d\n", fact(x)); // or fun
	return 0;
}


int fact(int y)
{
	int fac = 1;
	if(y == 0)
		return 1;
	if(y== 1)
		return 1;
	if(y>1)
	{
		fac = y * (fact(y-1));
	}
	return fac;
}


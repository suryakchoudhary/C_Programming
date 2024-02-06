#include<stdio.h>
int mul(int, int);
int main()
{
	int a, b;
	printf("Enter numner\n");
	scanf("%d%d", &a, &b);
	mul(a, b);
	printf("Mul = %d\n", mul(a, b));
	return 0;
}

int mul(int x, int y)
{

	if(y == 1)
		return x;
	return x+mul(x, y-1);
}




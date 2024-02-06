#include<stdio.h>
long int gcd(int, int);
int main()
{
	int n1, n2, div;
	printf("Enter 2 num\n");
	scanf("%d%d", &n1, &n2);
	div = gcd(n1, n2);
	printf("GCD = %ld\n", gcd(n1, n2));
	return 0;
}

long int gcd(int n1, int n2)
{
	if(n1==n2)
		return n1;
	if(n1 %n2 == 0)
		return n2;
	if(n2 % n1 == 0)
		return n1;
	if(n1>n2)
		return gcd(n1%n2, n2);
	if(n2>n1)
		return gcd(n2%n1, n1);
}


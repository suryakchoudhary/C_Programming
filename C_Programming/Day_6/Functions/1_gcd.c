//Write a program to find the GCD of two numbers

#include<stdio.h>
long int gcd(int , int );
int main()
{
	int num1, num2, div;
	printf("Enter two numbers for finding its GCD:\n");
	scanf("%d%d", &num1, &num2);
	div=gcd(num1, num2);
	printf("gcd of %d and %d is: %ld\n", num1, num2, gcd(num1, num2));
	return 0;
}

long int gcd(int num1, int num2)
{
	if(num1 == num2)
		return num1;

	if(num1 % num2 ==0)
		return (num2);

	if(num2 % num1 == 0)
		return (num1);

	if(num1>num2)
		return (gcd(num1 % num2, num2));

	if(num2>num1)
		return (gcd(num2 % num1, num1));
}



/*Develop a C program to find factorial of a number N using for loop.*/

#include<stdio.h>
int main()
{
	int num, i=1;
	unsigned long long int fact =1;
	printf("Enter a number: ");
	scanf("%d", &num);

	while(num>=i)
	{
		fact *=i;
		i++;
	}
	printf("The factorial of %d is %lld\n", num, fact);
	return 0;
}

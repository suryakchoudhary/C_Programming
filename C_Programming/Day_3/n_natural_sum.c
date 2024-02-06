/*Write a program to find out the sum of first n natural numbers.
Take n as input from the user.*/

#include<stdio.h>
int main()
{
	int n, count=0, sum=0;

	printf("Enter a natural number: ");

	scanf("%d", &n);
	
	if(n>0)
	{
		while(n>count++)

			sum+=count;	
		printf("sum = %d\n", sum);
		
	}
	else
		printf("Enter a valid natural number\n");
	

	return 0;
}
		


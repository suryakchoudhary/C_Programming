/*Write a program to check whether a given number is odd or even.*/

#include<stdio.h>
int main()
{
	int num;

	printf("Enter the number: ");
	scanf("%d",&num);

	if(num%2==0)
		printf("%d is an even number\n",num);

	else
		printf("%d is odd number\n",num);
	return 0;
}


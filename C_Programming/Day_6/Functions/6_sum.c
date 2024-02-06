//Write a program to find the sum of first n positive integers using a recursive function

#include<stdio.h>
long int sum(int num)
{
	if(num==0)
		return(0);
	if(num > 0)
	return(num + (sum(num-1)));

}

int main()
{
	int num;
	long int add;
	printf("Enter a number to find sum of 1st +ve integers: ");
	scanf("%d", &num);
	if(num>0)
	{
		add=sum(num);
		printf("The sum of first %d +ve number is: %ld\n", num, sum(num));
	}
	else
		printf("Enter a +ve numbre\n");
	return 0;
}

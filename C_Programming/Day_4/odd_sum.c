/*Develop a C program to find sum of all odd numbers upto N using while loop*/

#include<stdio.h>
int main()
{
	int num1, num2, i=1, sum=0;
	printf("Enter the range for odd number: ");
	scanf("%d%d",&num1, &num2);
	if(num2>= num1)
	{
		while(num2>= num1)
		{
			if(num2 % 2!=0)
			{	sum += num2;
				num2--;}
			else
				num2--;
			continue;
		}
		printf("The sum is %d\n", sum);
	}
	else
	{ while(num1>= num2)
		{
			if(num1 % 2!=0)
			{	sum += num1;
				num1--;}
			else
				num1--;
			continue;
		}
		printf("The sum is %d\n", sum);
	}

	return 0;
}



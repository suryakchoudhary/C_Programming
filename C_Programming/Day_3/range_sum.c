/*Write a program to find the sum of numbers in a given range.*/

#include<stdio.h>
int main()
{
	int num1, num2, sum=0;
	printf("Enter the range of number");
	scanf("%d%d",&num1, &num2);
	while(num2>=num1)
		{
		sum += num1;
		num1++;
		}
	printf("The sum is %d\n",sum);
	return 0;
}
		
		

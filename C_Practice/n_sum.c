//sum of 1st n natural number


#include<stdio.h>
int main()
{
	int num, sum=0, i;
	printf("Enter nth number for sum: ");
	scanf("%d", &num);
	if(num>0)
	{
		for(i=1; i<=num; i++)
		{
			sum+=i;
		}
		printf("The sum is: %d", sum);
	}
	else
		printf("Enter a valid number.\n");
	return 0;
}

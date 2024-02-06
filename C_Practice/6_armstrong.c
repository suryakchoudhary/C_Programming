//Armstrong number


#include<stdio.h>
#include<math.h>
int main()
{
	int num, num1, count=0, rem, sqr, sum=0, i, original;
	printf("Enter number to check armstrong no.: ");
	scanf("%d", &num);
	num1=num;
	original= num;

	for(i=0; num>0; i++)
	{
		num=num/10;
		count++;
	}

	for(i=0; num1>0; i++)
	{
		rem= num1%10;
		sqr= pow(rem, count);
		sum +=sqr;
		num1= num1/10;
	}

	if(original==sum)
		printf("%d is an armstrong number\n", original);
	else
		printf("%d is not an armstrong number\n", original);

	return 0;
}

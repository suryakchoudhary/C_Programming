/*Write a Program to find if a given number is Armstrong number. */

#include<stdio.h>
#include<math.h>
int main()

{
	int num, i=1, sqr, sum = 0, original, num1, rem1,rem, count=0;

	printf("Enter any number to check Armstrong Number: ");
	scanf("%d",&num);

	original = num;
	num1=num;

	while(num >= i)
	{
		{
			while(num1 > 0)
			{
				num1 /=10;
				count +=1;
			}


		}

		rem=num % 10;

		sqr= pow(rem, count);
		sum += sqr;
		num = num / 10;
	}

	if(sum == original)
	{
		printf("%d is an Armstrong Number\n", original);
	}
	else
		printf("%d is not an Armstrong Number\n", original);
	return 0;
}



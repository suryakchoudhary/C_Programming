/*Develop a C program which adds all numbers from 1 to N, except those which are divisible by 5. Implement this using for loop and continue statement.*/

#include<stdio.h>
int main()
{
	int num, i=1, sum=0;
	printf("Enter a number: ");
	scanf("%d",&num);
	while(num>=i)
	{
		if(num % 5!=0)
		{
			sum+=num;
			num--;
			continue;
		}
		else
			num--;

		continue;
	}
	printf("The sum is %d\n",sum);



	return 0;
}



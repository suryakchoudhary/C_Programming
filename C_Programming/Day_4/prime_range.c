/*Write a program in C to find the prime numbers within a range of numbers.*/

#include<stdio.h>
int main()
{
	int min, max, i, j, count; 
	printf("Enter the number range for viewing prime number: ");
	scanf("%d%d", &min, &max);
	for(i=min; i<= max; i++) 
	{
		count = 0;
		for(j=1; j<=i; j++)
		{
			if(i%j==0)
			count++;
		}
	
	if (count==2)
	printf("%d is a prime number\n",i);
	}
	return 0;
}

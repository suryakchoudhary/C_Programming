/*Write a program to calculate the sum of the digits of a given number.*/

#include<stdio.h>
int main()
{
int num, rem, sum=0;
printf("Enter the number: ");
scanf("%d",&num);
while(num>0)
	{
	rem=num%10;
        sum += rem;
	num = num / 10;
	}
printf("The sum is = %d", sum);

return 0;
}

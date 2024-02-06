//Write a program to reverse an integer number. Use recursion

#include<stdio.h>
long int REV(int num)
{
	long int  rem, A;
	static int rev=0;
	rem = num % 10;
	if(num!=0)
	{
		rev = 10 * rev + rem;
		num = num / 10;
//		printf("%d ", rev);
		return(REV(num));
	}
	else
	{
		return(rev);
	}
	

}
int main()
{
	long int fun;
	int num;
	printf("Enter an integer for reversing it: ");
	scanf("%d", &num);
	if(num>9)
	{
		fun= REV(num);
		printf("The reverse if %d is: %ld\n",num, fun);
	}
	else
		printf("Enter num greater than 9 \n");

	return 0;
}


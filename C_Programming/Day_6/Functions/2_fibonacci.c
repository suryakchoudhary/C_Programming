//Write a program to print the prime Fibonacci numbers in a given range.


#include<stdio.h>
long int fib(int num)
{
	static int var;
	if(num==0)
		return(0);
	if(num==1 || num==2)
		return(1);
	else
		//		var = fib(num-1)+fib(num-2);
		return(fib(num-1)+fib(num-2));
}

char prime(int num)
{
	int count1, flag=0;
	for(count1=2; count1<=num/2; ++count1)
	{
		if(num%count1==0)
		{
			flag=1;
			break;
		}
	}
	if(flag==0)

		return 'y';
}

int main()
{
	int num,i,n;
	char res;
	printf("Enter the range for printing prime fibonacci numbers\n");
	scanf("%d", &num);
//	fib(num);
	printf("The range %d fibonacci series prime numbers are:\n",num);
	for(i=1;i<=num;i++)
	{
		n=fib(i);
		res=prime(n);
		if(prime(n)=='y')
			printf("%d ", n);
	}
	return 0;	
}


//Write a recursive function to find factorial of a number. 

#include<stdio.h>
long int fact(int num)
{
	long int f;
	if(num==0||num==1)
		f=1;
	else
		f=(num * (fact(num-1)));

	return(f);
}

int main()
{
	int num; 
	long int fct;
	printf("Enter a number to find its factorial: ");
	scanf("%d", &num);
	fct=fact(num);
	printf("Factorial of %d is: %ld\n", num, fct);
	return 0;
}

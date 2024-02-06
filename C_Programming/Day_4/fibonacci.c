/*Write a C program to display the first n terms of Fibonacci series*/

#include<stdio.h>
int main()
{
	int f=0,s=1,next, num, i;
		printf("Enter the term for fibonacci series: ");
	scanf("%d", &num);
	for(i=0; i<=num; i++)
	{
		if(i<=1)
			next=i;
		else
			next=f+s;
			f=s;
			s=next;
	
	printf("%d ", next);
	}
	printf("\n");
	
return 0;
}

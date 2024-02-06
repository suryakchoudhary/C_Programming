//Write a program to add all the elements in a 1-D array

#include<stdio.h>
int main()
{
	int add[]={1,2,3,4,5,6}, i, sum=0;
	for(i=0;i<=5;i++)
	{
		sum +=add[i];
	}
	printf("The sum of array elements is %d\n", sum);
	return 0;
}

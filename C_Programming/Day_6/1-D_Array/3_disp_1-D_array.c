//Write a c program to display 1-D array elements with addresses

#include<stdio.h>
int main()
{
       	int arr[]={1,2,3,4,5,6}, i;
//	unsigned arr1;
	for(i=0;i<=5;i++)
	{
		printf("arr[%d] = %d and Address= %p\n", i,arr[i], &arr[i]);
	}
		return 0;
	}

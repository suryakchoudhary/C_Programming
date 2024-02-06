//Write a program in C to store n elements(read from standard input) in an array and print the elements using pointer


#include<stdio.h>
int main()
{
	int arr[50], ele, i, j = 0;
	printf("Enter the number of int array element you want.\n");
	scanf("%d", &ele);
	printf("Enter %d elements for the array.\n", ele);
	for(i=0; i<ele;i++)
	{
		scanf("%d", &arr[i]);  
	}
	printf("\n");
	printf("Printing the array element through pointer.\n");
	printf("The elements of the array are:\narr[%d] = {", ele);
	for(i=0; i<ele; i++)
	{
		printf("%d",*(arr+i));  
		if(j<ele-1)
		{
			printf(",  ");
			j++;
		}
	}
	printf("}");
	printf("\n");
	return 0;
}



//Write a C Program to sort elements in 1-D Array

#include<stdio.h>
int main()
{
	int sort[50], i, j, k, temp, ele;
	printf("Enter the number of elements you want to enter in an array: ");
	scanf("%d", & ele);
	printf("Enter %d array elements for sorting:\n", ele);
	printf("\n");

	for(k=0;k< ele;k++)
	{
		printf("Enter sort[%d] element: ", k);
		scanf("%d", & sort[k]);
	}

	for(i=0;i<ele;i++)

	{	for(j=i+1;j<ele;j++)
		{
			if(sort[i] > sort[j])
			{
				temp=sort[i];
				sort[i]=sort[j];
				sort[j]=temp;
			}
		}
	}
	printf("The sorted elements of the entered array are:\n");
	for(i=0;i<ele;i++)
		printf("%d ", sort[i]);
	printf("\n");

	return 0;
}

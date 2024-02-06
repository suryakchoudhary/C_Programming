//Write a C Program to display two-dimensional array elements with addresses

#include<stdio.h>
int main()
{
	int arr[50][50], i, j, row, col;
	printf("THIS PROG. IS FOR PRINTING 2-D ARRAY ELEMENTS WITH ITS ADDRESS.\n");
	printf("Enter number of elements of rows you want: ");
	scanf("%d", &row);
	printf("Enter number of elements of columns you want: ");
	scanf("%d", &col);
	printf("Enter %d array elements for the array.\n",row*col);
	for(i=1;i<=row;i++)
		for(j=1;j<=col;j++)
		{
			//	printf("Enter arr[%d][%d] elements: ", i,j);
			scanf("%d", &arr[i][j]);	
		}
	printf("\n");

	for(i=1;i<=row;i++)
	{
		for(j=1;j<=col;j++)
		{
			printf("Element array[%d][%d]: %d with address: %p\n", i, j,arr[i][j], &arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}



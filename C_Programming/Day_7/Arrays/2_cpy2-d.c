//Write a C program to copy the elements of one 2-D array to another 2-D array.

#include<stdio.h>
int main()
{
	int arr1[50][50], arr2[50][50]={0}, row, col, i, j;
	printf("THIS PROG. IS FOR COPYING THE ARRAY ELEMENTS FROM arr1 to arr2.\n");
	printf("This is for the 1st attay.\n");
	printf("Enter the number of row for the 1st array: ");
	scanf("%d", &row);
	printf("Enter the number of column for the 1st array: ");
        scanf("%d", &col);
	printf("Enter %d elements for the 1st array:\n", row*col);
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			scanf("%d", &arr1[i][j]);
		}
	}

	for(i=0; i<row; i++)
        {
                for(j=0; j<col; j++)
		{
			arr2[i][j] = arr1[i][j];
		}
	}

	printf("Printing the elements that are copied from arr1 to arr2.\n");
	for(i=0; i<row; i++)
        {
                for(j=0; j<col; j++)
		{
			printf("%d\t", arr2[i][j]);
		}
		printf("\n");
	}
	return 0;
}




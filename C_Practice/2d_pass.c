#include<stdio.h>

int fun(int (*arr)[], int *, int *);

int main()
{
	int row, col;

	printf("Enter no. of row: ");
	scanf("%d", &row);

	printf("Enter no. of col: ");
	scanf("%d", &col);

	int i, j;
	int arr[row][col];

	printf("Enter %d elements\n", row*col); 
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
			scanf("%d", *(arr + i)+j);         //&arr[i][j]);
	}

	printf("\nPrinting in main\n");
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
			printf("%d  ", *(*(arr + i)+j));         //arr[i][j]);
		printf("\n");
	}

	fun(arr, &row, &col);
}

int fun(int (*arr)[1], int *row, int *col)
{
	int i, j;

	printf("\n\n");
	printf("Printing inside function\n");
	for(i=0; i<*row; i++)
	{
		for(j=0; j< *col; j++)
			printf("%4d  ", *(*(arr + i)+j));     //arr[i][j]);           //*(*(arr + i)+j));
		printf("\n");
	}
}

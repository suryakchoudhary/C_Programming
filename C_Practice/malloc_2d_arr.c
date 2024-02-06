#include<stdio.h>
#include<stdlib.h>

int main()
{
	int **ptr, row, col, i, j;

	printf("Enter no. of rows: ");
	scanf("%d", &row);
	printf("Enter no. columns: ");
	scanf("%d", &col);
	ptr = (int **)malloc(row * sizeof(int*));

	for(i=0; i<row; i++)
	{
		*(ptr + i) = (int *)malloc(col * sizeof(int));
	}

	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
			scanf("%d", *(ptr + i)+j);
	}
	
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
			printf("%3d", *(*(ptr + i)+j));
		printf("\n");
	}
	free(ptr);
	ptr = NULL;
}


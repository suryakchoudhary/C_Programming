//Write a C program to sum two 2-D matrices


#include<stdio.h>
int main()
{
	int add1[50][50], add2[50][50],sum[50][50], i, j, row, col;
	printf("THIS PROGRAM IS FOR ADDING TWO 2-D ARRAYS.\n");
	printf("Enter the number of rows for the array: ");
	scanf("%d", &row);
	printf("Enter the number of columns for the array: ");
        scanf("%d", &col);

	printf("Enter the %d array element for the 1st array.\n", (row*col));
	for(i=0;i<row;i++)
		for(j=0;j<col;j++)
		{
			scanf("%d",&add1[i][j]);
		}


	printf("Enter the %d array element for the 2nd array.\n",row*col);
        for(i=0;i<row;i++)
	{
                for(j=0;j<col;j++)
		{
                        scanf("%d",&add2[i][j]);
		}
	}
	printf("The sum of 2 arrays: \n");
	for(i=0;i<row;i++)
		{
		for(j=0;j<col;j++)
		{
			sum[i][j]=add1[i][j] +add2[i][j];
			printf("%d\t", sum[i][j]);
		}
		printf("\n");
		}
	return 0;
}


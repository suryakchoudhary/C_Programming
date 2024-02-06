//Write a C Program to display three-dimensional array elements with addresses

#include<stdio.h>
int main()
{
	int arr[50][50][50],row, col, blk,i,j,k;
	printf("This program is for printing 3-D array.\n");
	printf("Enter the number of blocks you want: ");
        scanf("%d",&blk);
	printf("Enter the number of rows you want: ");
	scanf("%d",&row);
	printf("Enter the number of colums you want: ");
        scanf("%d",&col);
	printf("Enter %d elements for 3-D array for printing its address: ",blk*row*col);
	for(i=1;i<=blk;i++)
		for(j=1;j<=row;j++)
			for(k=1;k<=col;k++)
			{
				scanf("%d", &arr[i][j][k]);
			}
	printf("\n");

	for(i=1;i<=blk;i++)
                for(j=1;j<=row;j++)
                        for(k=1;k<=col;k++)
			{
				printf("The array[%d][%d][%d] = %d and Address = %p",i,j,k,arr[i][j][k],&arr[i][j][k]);
				printf("\n");
			}
	return 0;
}





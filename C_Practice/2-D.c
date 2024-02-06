#include<stdio.h> 
int main()
{
	int i, j, r, c;
	int arr[3][3];

	printf("Enter no. of rows\n");
	scanf("%d", &r);
	printf("Enter no. of col\n");
	scanf("%d", &c);
	printf("%d elements\n", r*c);

	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("Enter array[%d][%d]:", i, j);
			scanf("%d", &arr[i][j]);
		}
	}

	for(i=0; i<r; i++)
	{
		for(j=0; j<r; j++)
		{
			printf("array[%d][%d] = %d\n", i, j, arr[i][j]);
		}
	}
	return 0;

}


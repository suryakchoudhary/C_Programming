//Write a C program to print all elements of two dimensional array using pointers.

#include<stdio.h>
int main()
{
	int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}}, i, j;
	printf("PRINTING THE 2-D ARRAY WITH THE USE OF POINTER.\n");
/*	printf("Enter the number of row you want: ");
	scanf("%d", &row);
	printf("Enter the number of column you want: ");
        scanf("%d", &col);
	printf("Enter %d elements for the array.\n", row*col);
*/	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("%d\t",*(*(arr+i)+j));
		}
		printf("\n");
	}
	return 0;
}



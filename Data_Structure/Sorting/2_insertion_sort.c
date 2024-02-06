// Insertion Sort

#include<stdio.h>
int main()
{
	int array[100], num, i, j, temp;
	printf("Enter the numner of elements you want to enter: ");
	scanf("%d", &num);

	printf("Enter %d elements in the array:\n", num);

	for(i=0; i<num; i++)
		scanf("%d", &array[i]);

	printf("\n");

	printf("The elements entered are:\n");
	for(j=0; j<num; j++)
		printf("%d\t", array[j]);

	for(i=1; i<num; i++)
	{
		temp = array[i];
		j=i-1;
		while(j >= 0 && array[j] > temp)
		{
			array[j+1] = array[j];
			j--;
		}
		array[j+1] = temp;
	}
	printf("\n\nAfter Insertion Sort.\n");
	for(i=0; i<num; i++)
		printf("%d\t", array[i]);

	printf("\n");
}



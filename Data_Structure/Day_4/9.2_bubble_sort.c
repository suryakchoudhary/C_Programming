// Bubble Sort

#include<stdio.h>
int main()
{
	int array[100], num, srch, i, j, flag, temp;
	printf("Enter the number of elements you want to insert: ");
	scanf("%d", &num);
	printf("Enter %d elements.\n", num);
	for(i=0; i<num; i++)
		scanf("%d", &array[i]);
	printf("The entered elements are:.\n");
	for(i=0; i<num; i++)
		printf("%d\t", array[i]);
	
//	printf("\nThe Sorted array is:\n");
	for(i=0; i<num-1; i++)
	{
		flag=0;
		for(j=0; j<num-1-i; j++)
		{
			if(array[j] > array[j+1])
			{
				temp = array[j];
				array[j] = array[j+1];
				array[j+1] = temp;
				flag = 1;
			}
		}
		if(flag == 0)
			break;
	}
	printf("\n\nAfter Bubble Sort:\n");
	for(i=0; i<num; i++)
		printf("%d\t", array[i]);

	printf("\n");
	return 0;
}



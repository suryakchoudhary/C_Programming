//C program to search element in array (1-D)using pointers


#include<stdio.h>
int main()
{
	int arr[10]={1,2,3,4,5,6,7,8,9,0}, *ptr = arr, srch, i=0,j;
//	ptr=arr;
	printf("The elements in this array are:\n");
	for(j=0; j<10; j++)
	{
		printf("%d ", *(ptr + j));
	}
	printf("\n");
	printf("Enter the digit element you want to search in from the above array: ");
	scanf("%d", &srch);
	while(i<10)
	{
			if(*(arr+i) == srch)
			{
				printf("Element found\n");
				break;
			}
			else
			{
				i++;
			}
	}
	if(i==10)
	{
		printf("Element not found.\n");
	}
	return 0;
}


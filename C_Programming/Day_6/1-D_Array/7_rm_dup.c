//Write a program to remove the duplicate elements in an integer array.

#include<stdio.h>
int main()

{
	int dup[100],ele,i, j, k;
	printf("Enter the number of element you want to put in an array: ");
	scanf("%d", &ele);
	printf("Enter %d elements for the array:\n",ele);
	for(k=0;k<ele;k++)
	{
		printf("Enter dup[%d] element: ",k);
		scanf("%d", &dup[k]);
	}

	for(i=0; i<ele;i++)
	{
		for(j=i+1;j<ele;j++)
		{
			if(dup[i] == dup[j])
			{
				for(k=j;k<ele;k++)
					dup[k]=dup[k+1];
				ele--;
			}
		}
	}
	printf("After removing duplicate numbers:\n");
	for(i=0;i<ele;i++)
	{
		printf("%d ",dup[i]);
	}
	printf("\n");
	return 0;
}



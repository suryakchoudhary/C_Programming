//Binary Search

#include<stdio.h>
int main()
{
	int l=0, r, mid, num, array[100], srch, i, flag=0;
	printf("Enter the number of elements you want to enter: ");
	scanf("%d", &num);

	printf("Enter %d elements in SORTED ORDER the array.\n", num);
	for(i=0; i < num; i++)
		scanf("%d", &array[i]);

	printf("\nThe array elements entered are:\n");
	for(i=0; i<num; i++)
		printf("%d\t", array[i]);
	printf("\n\nEnter the element you want to search: ");
	scanf("%d", &srch);

	r=num-1;

	while(l <= r)
	{
		mid=(l+r)/2;
		if(srch == array[mid])
		{
			printf("\n%d is at location %d.\n\n", srch, mid+1);
			break;
		}

		else if(srch < array[mid])
			r=mid-1;

		else if(srch > array[mid]) 
			l=mid + 1;
		else
			flag=1;

	}
	if(flag==1)
		printf("%d not found.\n", srch);
}


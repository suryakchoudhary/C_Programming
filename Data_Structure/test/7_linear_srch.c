// Linear Search

#include<stdio.h>
int main()
{
	int array[100], num, i, srch, flag=0;
	printf("Enter the number of elements you want to enter: ");
	scanf("%d", &num);
	
//	for(i=1; i <= num; i++)
	printf("Enter %d elements in the array.\n", num);
	for(i=1; i <= num; i++)
		scanf("%d", &array[i]);

	printf("The elements in the array entered is:\n");
	for(i=1; i<=num; i++)
		printf("%d\t", array[i]);
	printf("\n");

	printf("Enter the number you want to search in the array: ");
	scanf("%d", &srch);

	for(i=1; i<= num; i++)
	{
		if(srch == array[i])
		{
			flag = 1;
			break;
		}
	}

	if(flag == 1)
		printf("%d is present at %d.\n", srch, i);
	else
		printf("%d is not found in the list.\n", srch);

	return 0;
}


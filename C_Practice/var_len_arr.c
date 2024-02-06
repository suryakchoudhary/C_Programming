#include<stdio.h>
int main()
{
	int n;
	printf("Enter no of elements to be entered in array: ");
	scanf("%d", &n);
	int arr[n], i;
//	printf("enter: ");
//	scanf("%d", &num);

	for(i=0; i<n; i++)
	{
		printf("Enter %d element: ", i);
		scanf("%d", &arr[i]);
	}
	for(i=0; i<n; i++)
		printf("Element: %d\tvalue: %d\n", i, arr[i]);
	return 0;
}

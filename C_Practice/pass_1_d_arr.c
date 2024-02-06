#include<stdio.h>
void array_fun(int (*arr), int *);    // (int [], int *)       //in void we can pass(by value/referece), but cannot get return value

int main()
{
	int ele, i;
	printf("Enter the number of element you want to pass: ");
	scanf("%d", &ele);
	int arr[ele];

	int size = 0, calc;
	size = sizeof(arr)/sizeof(arr[0]);

	printf("Enter %d element\n", ele);
	for(i=0; i<ele; i++)
		scanf("%d", (arr + i));           // &arr[i]);

	printf("Printing array in main\n");
	for(i=0; i<ele; i++)
		printf("%d  ", *(arr + i));            //arr[i]);            
	printf("\n\n");

	array_fun(arr , &size);

	return 0;
}

void array_fun(int (*arr), int *size)               //(int arr[], int *size)        
{
	int i;
	printf("Printing inside function\n");
	for(i=0; i<*size; i++)
		printf("Index %d \t Element: %d\n", i, *(arr + i));          // arr[i]);
}


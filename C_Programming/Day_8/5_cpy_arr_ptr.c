/*Write a C program to read through an array of any type using pointers. Copy the elements of the first array to second array using pointers.
Hint: a[i] = *(a+i)
*/
#include<stdio.h>
int main()
{
	int arr1[50], arr2[50], *ptr1, *ptr2, row, col, i, ele;
//	ptr2 = &arr2;
//	ptr1 = &arr1;
	printf("Enter the number of element for the array: ");
	scanf("%d", &ele);
	printf("Enter %d elements for the array.\n",ele);
	for(i=0; i<ele; i++)
	{
		scanf("%d",(arr1 + i));
	}
//	printf("Copying the arr1 to arr2 with use of pointer.\n");
	for(i=0; i<ele; i++)
	{
		*(arr2 + i)= *(arr1+i);
	}
	
	printf("Printing the arr2 copied from arr1 with use of pointer.\n");
		printf("\n");
	for(i=0; i<ele; i++)
        {
                 printf("%d\t",*(arr2+i));
        }
	printf("\n");

	return 0;
}






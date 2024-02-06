// Heap Sort
#include <stdio.h>
void heap();
void heapSort();
void printArr();

int main()
{
	int a[] = {23, 40, 0, 22, 1, 67, 1};
	int n = sizeof(a) / sizeof(a[0]);
	printf("Before sorting:\n");
	printArr(a, n);
	heapSort(a, n);
	printf("\n");
	printf("\nAfter Heap Sort:\n");
	printArr(a, n);
	printf("\n");
	return 0;
}

void heap(int a[], int n, int i)  
{  
	int largest = i;   
	int left = 2 * i + 1; 
	int right = 2 * i + 2; 
	if (left < n && a[left] > a[largest])  
		largest = left;  
	if (right < n && a[right] > a[largest])  
		largest = right;  
	if (largest != i) {  
		int temp = a[i];  
		a[i] = a[largest];  
		a[largest] = temp;  
		heap(a, n, largest);  
	}  
}  
void heapSort(int a[], int n)  
{  
	for (int i = n / 2 - 1; i >= 0; i--)  
		heap(a, n, i);  
	for (int i = n - 1; i >= 0; i--) {  
		int temp = a[0];  
		a[0] = a[i];  
		a[i] = temp;  
		heap(a, i, 0);  
	}  
}  
void printArr(int arr[], int n)  
{  
	for (int i = 0; i < n; ++i)  
	{  
		printf("%d", arr[i]);  
		printf(" ");  
	}  
}  

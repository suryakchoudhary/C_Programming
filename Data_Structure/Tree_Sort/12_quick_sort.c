// Quick Sort


#include <stdio.h>  
int partition();
void quick();
void printArr();

int main()
{
	int a[] = { 67, 32, 9, 34, 29, 9 };
	int n = sizeof(a) / sizeof(a[0]);
	printf("Before sorting array elements are - \n");
	printArr(a, n);
	quick(a, 0, n - 1);
	printf("\n\nAfter sorting array elements are - \n");
	printArr(a, n);
	printf("\n");
	return 0;
}

int partition (int a[], int start, int end)  
{  
    int pivot = a[end]; // pivot element  
    int i = (start - 1);  
  
    for (int j = start; j <= end - 1; j++)  
    {  
        if (a[j] < pivot)  
        {  
            i++; // increment index of smaller element  
            int t = a[i];  
            a[i] = a[j];  
            a[j] = t;  
        }  
    }  
    int t = a[i+1];  
    a[i+1] = a[end];  
    a[end] = t;  
    return (i + 1);  
}  
  
void quick(int a[], int start, int end) /* a[] = array to be sorted, start = Starting index, end = Ending index */  
{  
    if (start < end)  
    {  
        int p = partition(a, start, end); //p is the partitioning index  
        quick(a, start, p - 1);  
        quick(a, p + 1, end);  
    }  
}  
  
void printArr(int a[], int n)  
{  
    int i;  
    for (i = 0; i < n; i++)  
    {
        printf("%d ", a[i]);  
    }
}  
/*int main()  
{  
    int a[] = { 67, 32, 9, 34, 29, 9 };  
    int n = sizeof(a) / sizeof(a[0]);  
    printf("Before sorting array elements are - \n");  
    printArr(a, n);  
    quick(a, 0, n - 1);  
    printf("\n\nAfter sorting array elements are - \n");    
    printArr(a, n);  
      
    return 0;  
}*/

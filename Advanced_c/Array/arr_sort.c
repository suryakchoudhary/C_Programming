#include <stdio.h>

void main()
{
    int arr[] = {5, 8, 4, 6, 2, 5, 9, 2};
    int eleno = sizeof(arr) / sizeof(int);
    printf("No. of elements in array: %d\n", eleno);

    for (int i = 0; i < eleno; i++)
    {
        for (int j = (i + 1); j < eleno; j++)
        {
            if (arr[i] > arr[j])
            {
                int sort = arr[i];
                arr[i] = arr[j];
                arr[j] = sort;
            }
        }
    }
    for (int k = 0; k < eleno; k++)
        printf("%d ", arr[k]);
}

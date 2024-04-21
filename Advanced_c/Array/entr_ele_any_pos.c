#include <stdio.h>

void main()
{
    int arr[50];
    int arrsize, pos, j, ele;

    printf("Enter the size of array: ");
    scanf("%d", &arrsize);

    printf("Enter the array elements:");
    for (int i = 0; i < arrsize; i++)
        scanf("%d", &arr[i]);

    printf("Enter the position between 0 and %d, where you want to enter the element: ", arrsize);
    scanf("%d", &pos);

    printf("Enter the array element: ");
    scanf("%d", &ele);

    j = (arrsize - 1);
    for (j; j >= pos; j--)
    {
        arr[j + 1] = arr[j];
    }
    arr[pos] = ele;

    for (int k = 0; k <= (arrsize); k++)
        printf("%d ", arr[k]);
}
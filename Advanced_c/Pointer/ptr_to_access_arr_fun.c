#include <stdio.h>

int arrSum(int *arr, int rangee) //int arrSum(int arr[], int range)
{
    int sum = 0;
    //int *ptr = NULL;
    int *range = arr + rangee;
    for (/*ptr = arr*/; /*ptr*/ arr < range; arr++ /*ptr++*/) //or i<(arr+range)
    {
        printf("%d ", *arr /**ptr*/); //printf("%d ", arr[i])
        sum += *arr /**ptr*/;         //sum += arr[i]
    }
    printf("\n\v");
    return sum;
}

void main()
{
    int array[] = {1, 2, 3, 4, 5};
    int ele_num = sizeof(array) / sizeof(int);
    int sum = 0;
    sum = arrSum(array, ele_num);
    printf("The sum of all the elements of array = %d\n", sum);
}
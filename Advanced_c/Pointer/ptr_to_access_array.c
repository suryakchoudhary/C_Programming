#include <stdio.h>

void main()
{
    int arr[] = {3, 4, 6, 2, 7};
    int *ptr = NULL;
    ptr = arr;
    printf("Printing array through pointer\narr[] = {");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", *(ptr + i));
    }
    printf("}\n");
}
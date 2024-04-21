#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("In function\na = %d\nb = %d\n\v", *a, *b);
    //return (*a, *b);
}

int main()
{
    int x = 1;
    int y = 9;
    printf("In main before function call\na = %d\nb = %d\n\v", x, y);
    // int *x = &a;
    // int *y = &b;
    swap(&x, &y);
    printf("In main after function call\nx = %d\ny = %d\n", x, y);
    return 0;
}
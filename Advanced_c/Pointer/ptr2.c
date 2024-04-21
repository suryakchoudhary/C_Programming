#include <stdio.h>
void main()
{
    int x = 5;
    int *ptr = NULL;
    int *ptr2 = NULL;
    ptr2 = (void *)&ptr;
    ptr = &x;
    *ptr += 10;
    printf("%p\n", ptr2);
    printf("%p\n", &ptr);
    printf("%d\n", *ptr);
    printf("%d\n", x);
}
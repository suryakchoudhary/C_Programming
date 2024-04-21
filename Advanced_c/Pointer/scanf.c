#include <stdio.h>
void main()
{
    int x = 0;
    int *ptr = NULL;
    ptr = &x;
    printf("Enter a number:");
    scanf("%d", ptr);

    printf("Number entered is: %d\n", x);
    printf("Number entered is: %d\n", *ptr);
}
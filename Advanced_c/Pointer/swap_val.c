#include <stdio.h>

int swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("After swap in fun\nx = %d\ny = %d\n\v", a, b);
    return (a, b);
}

int main()
{
    int a = 1;
    int b = 9;
    printf("\vIn main before call\n a = %d\n b = %d\n\v", a, b);
    swap(a, b);
    printf("In main after call\n a = %d\n b = %d\n", a, b);
}

#include <stdio.h>
void main()
{
    int val = 5;
    int val2 = 7;
    int *const ptr = &val;
    ptr = &val2;

    printf("Value = %d\n", *ptr);
    printf("%p\n", ptr);
    printf("%p\n", &val);
}

// #include <stdio.h>
// void main()
// {
//     int val = 5;
//     const int *ptr = &val;
//     *ptr = 7;
//     printf("Address: %p\n", ptr);
//     printf("Value: %d\n", *ptr);
// }
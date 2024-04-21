#include <stdio.h>

int main()
{
    int a = 23;
    int *ptr = NULL;
    ptr = &a;
    printf("%d\n", ptr);
    printf("%u\n", ptr);
    printf("%p\n", &ptr);
    printf("Address of ptr: %p\n", (void *)&ptr);
    printf("Address of ptr: %p\n", &ptr);
    printf("Correct format specifier for pointer is \"\%%p\": %p\n", ptr);
    printf("%u\n", sizeof(ptr));
    printf("%d\n", *ptr);
}
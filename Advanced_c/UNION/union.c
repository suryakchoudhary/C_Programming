#include <stdio.h>

union un
{
    int num;
    float marks;
    char ch;
};
void main()
{
    union un data;
    printf("Size of union: %d\n", sizeof(union un));
    printf("Size of union: %p\n", &data.num);
    printf("Size of union: %p\n", &data.ch);
}
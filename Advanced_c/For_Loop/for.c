#include <stdio.h>

int main()
{
    int count, sum = 0, serial;
    printf("Enter the number upto which u want to find sum\n");
    scanf("%d", &count);

    for(int i = 1 ; i <= count; i++)
    {
        sum = sum + i;
        serial = i;
        printf("%d. i = %d\n", serial, i);
    }
    printf("Sum = %d\n", sum);
}
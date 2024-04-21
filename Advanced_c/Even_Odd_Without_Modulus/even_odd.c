#include<stdio.h>

int main()
{
    int num;
    printf("Enter a number to check EVEN or ODD\n");
    scanf("%d", &num);
    if(num & 1 == 1)
    {
        printf("%d is an odd number\n", num);
    }
    else
    {
        printf("%d is an even number\n", num);
    }
    return 0;
}
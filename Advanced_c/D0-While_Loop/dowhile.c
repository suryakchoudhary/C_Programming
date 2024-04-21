#include <stdio.h>

int main()
{
    int num = 0, initial = 1, sum = 0;
    printf("Enter a number\n");
    scanf("%d", &num);
    do
    {
        printf("Number = %d\n", initial);
        sum = sum + initial;
        initial++;
    } while (initial <= num);

    printf("SUM = %d\n", sum);

    return 0;
}
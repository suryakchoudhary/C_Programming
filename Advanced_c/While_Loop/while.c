#include <stdio.h>

int main()
{
    int i = 1, sum = 0, num;

    printf("Enter the number\n");
    scanf("%d", &num);
    while (i <= num)
    {
        printf("Serial: %d\n", i);
        sum = sum + i;
        i++;
    }
    printf("SUM = %d\n", sum);

    return 0;
}
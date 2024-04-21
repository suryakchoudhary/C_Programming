#include <stdio.h>

int main()
{
    float arr[10];
    float sum = 0.0, avg = 0.0;
    int count = 0;

    printf("Enter 10 numbers to find its avg\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%f", &arr[i]);
        count++;
        sum += arr[i];
    }
    avg = sum / count;
    printf("SUM = %f\nAVG = %f\n", sum, avg);
}
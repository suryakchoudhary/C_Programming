#include <stdio.h>

int main()
{
    int mins = 0;
    float hour = 0.0;
    float day = 0.0;
    float year = 0.0;
    printf("Enter minutes\n");
    scanf("%d", &mins);

    hour = mins/60;
    day = hour/24;

    year = day/365;

    printf("year - %f : day - %f : minutes - %d\n", year, day, mins);
    return 0;


}
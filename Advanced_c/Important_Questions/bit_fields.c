#include <stdio.h>

struct var
{
    unsigned int hour : 5; //24 will req max 5 bits
    unsigned int min : 6;
    unsigned int sec : 6;
};
void main()
{
    struct var time = {24, 14, 7};
    //time = {.hour = 24, .min = 14, .sec = 7};

    printf("%u:%u:%u\n", time.sec, time.min, time.hour);
    printf("%d\n", sizeof(time));
}
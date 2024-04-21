#include <stdio.h>
#define MONTHS 12

int main()
{
    int days[MONTHS] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    enum month {Jam, Feb, Mar, Apr, May, Jun, July, Aug, Sept, Oct, Nov, Dec};
    enum month names;

    for(int i = 0; i<MONTHS;i++)
    {
        printf("MONTH[%d] has %d days\n", i+1, days[i]);
    }
}
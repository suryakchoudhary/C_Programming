#include <stdio.h>

int main()
{
    enum weekday
    {
        Mon,
        Tue,
        Wed,
        Thu,
        Fri,
        Sat,
        Sun
    };
    enum weekday today = Mon;

    switch (today)
    {
    case (Mon):
        printf("Today is Monday\n");
        break;

    case Tue:
        printf("Today is Tuesday\n");
        break;

    case Wed:
        printf("Today is Wednesday\n");
        break;

    case Thu:
        printf("Today is Thursday\n");
        break;

    default:
        printf("Put the correct keyword\n");
        break;
    }
    return 0;
}
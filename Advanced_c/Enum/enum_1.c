#include <stdio.h>

int main()
{
    enum Company {GOOGLE, FACEBOOK, XEROX, YAHOO, EBAY, MICROSOFT};
    enum Company Comp_1 = XEROX;
    enum Company Comp_2 = GOOGLE;
    enum Company Comp_3 = EBAY;
    printf("%d\n%d\n%d\n", Comp_1, Comp_2, Comp_3);
    return 0;
}
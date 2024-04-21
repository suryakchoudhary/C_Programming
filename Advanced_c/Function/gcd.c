#include <stdio.h>

int smallernum(int x, int y)
{
    int count;
    if (x < y)
    {
        count = x;
    }
    else
    {
        count = y;
    }
    return count;
}

int commondiv(int funcount, int x, int y)
{
    int gcd = 0;
    for (int j = 1; j <= funcount; j++)
    {
        if (x % j == 0 && y % j == 0)
        {
            gcd = j;
            printf("%d and %d has %d as common factors\n", x, y, j);
        }
    }
    return gcd;
}
void main()
{
    int x, y, maincount, comdiv = 0;
    printf("Enter two integer to find Greatest Common Deviser\n");
    scanf("%d%d", &x, &y);

    maincount = smallernum(x, y);
    comdiv = commondiv(maincount, x, y);

    printf("The GCD = %d\n", comdiv);
}
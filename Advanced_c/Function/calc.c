#include <stdio.h>
int multiply(int x, int y)
{
    int mul = x * y;
    printf("X * Y = %d\n", mul);
    return mul;
}

float divide(float x, float y)
{
    float div = x / y;
    printf("X / Y = %f\n", div);
    return div;
}

int add(int x, int y)
{
    int add = x + y;
    printf("X + Y = %d\n", add);
    return add;
}

int sub(int x, int y)
{
    int sub = x - y;
    printf("X -Y = %d\n", sub);
    return sub;
}

int main()
{
    int x, y, ans;
    float ans1;
    printf("Enter two numbers to calculate\n");
    scanf("%d%d", &x, &y);
    ans = add(x, y);
    printf("Addition = %d\n", ans);
    ans = sub(x, y);
    printf("Sub = %d\n", ans);
    ans1 = divide(x, y);
    printf("Div = %f\n", ans1);
    ans = multiply(x, y);
    printf("Mul = %d\n", ans);

    return 0;
}
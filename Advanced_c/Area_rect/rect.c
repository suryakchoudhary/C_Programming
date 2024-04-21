#include<stdio.h>

int main()
{
    float len = 0;
    float width = 0;
    float area = 0;
    printf("Enter the length of REACTANGLE\n");
    scanf("%f", &len);
    printf("ENter the width of the RECTANGLE\n");
    scanf("%f", &width);

    area = len * width;
    printf("Area = %f\n", area);
    return 0;

}
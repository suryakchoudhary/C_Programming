/*Write a program to find the area and the perimeter of a circle.
    Take radius “r” as input.*/
#include<stdio.h>
int main()
{
    float r, Area, Peremeter, pi=3.14;

    printf("Enter the value of Radius");
    scanf("%f",&r);

    Area = pi*r*r;
    printf("Area of the circle with radius %f is: %f\n",r, Area);

    Peremeter = 2*pi*r;
    printf("Peremeter of the circle with radius %f is: %f",r, Peremeter);

    return 0;

}


//Write a program to demonstrate integer, float, character and string constants.


#include<stdio.h>
int main()
{
	const int radius=4;
	const float pi = 3.14;
	const char ch='S';
	const char str[30]="Surya Kant Choudahry";
	float area;

	area= pi*radius*radius;

	printf("\nThe area of circle printed using constant float pi and int radius is: %f\n", area);
	printf("The character printed using constant character is: %c\n", ch);
	printf("My name printed by constant string is: %s\n\n", str);
	return 0;
}




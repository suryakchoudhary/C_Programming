//Define a structure “complex” (use typedef) to read two complex numbers and perform addition, subtraction of these two complex numbers and display the result.



#include<stdio.h>
typedef struct complex
{
	float real;
	float img;
}complex;

complex add(complex n1, complex n2);
complex sub(complex n1, complex n2);
int main()
{
	complex n1, n2, result1, result2;
	printf("Enter real and imaginary for the 1st number: ");
	scanf("%f%f", &n1.real, &n1.img);
	printf("Enter real and imaginary for the 2nd number: ");
        scanf("%f%f", &n2.real, &n2.img);
	result1 = add(n1, n2);
	printf("Sum = %.2f + %.2f\n", result1.real, result1.img);

	result2 = sub(n1, n2);
	printf("Difference = %.2f - %.2f\n", result2.real, result2.img);

	return 0;
}

complex add(complex n1, complex n2)
{
	complex temp1;
	temp1.real = n1.real + n2.real;
	temp1.img = n1.img + n2.img;
	return(temp1);
}


complex sub(complex n1, complex n2)
{
	complex temp2;
        temp2.real = n1.real - n2.real;
        temp2.img = n1.img - n2.img;
        return(temp2);
}







/*A C program contains the following declaration int x[8]= {10,20,30,40,50,60,70,80}; 
	What is the value of x? (and understand)
	What is the value of (x+2)? (and understand)
	What is the value of *x? 
	What is the value of (*x+2)? 
	What is the value of *(x+2)?. 
*/


#include<stdio.h>
int main()
{
	int x[8]= {10,20,30,40,50,60,70,80};
	printf("Printing declared array using pointer.\n");
	printf("x is the base address of x[8] array i.e. address of element x[0] i.e.: %p\n", x);
	printf("(x+2) is the address of x[2] element of array x[8] i.e. address of element 30: %p\n", (x+2));
	printf("*x is the value associated with base address i.e.: %d\n", *x);
	printf("(*x+2) is the value associated with x[0] and adding 2...(10+2) i.e.: %d\n", (*x+2));
	printf("*(x+2) is the value associated with x[2] element i.e.: %d\n", *(x+2));
	return 0;
}


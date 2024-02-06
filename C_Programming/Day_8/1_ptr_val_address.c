/*Write a C program that declares and initializes (to any value you like) a char, an int, a double and a float. Your program should then print the address of, and value stored in, each of the variables. 
  Use the format string "%u" [%p in hex] to print the addresses as unsigned integers. 
Hint: You can use the character “&” to find addresses.
*/

#include<stdio.h>
int main()
{
	int a=10, b=20, *ptr_a, *ptr_b;
	char ch1 = 'A', ch2 = 'B', *ptr_A, *ptr_B;
	ptr_A = &ch1;
	ptr_B = &ch2;

	ptr_a = &a;
	ptr_b = &b;	
	printf("The address of a = %d in binary is %u and address in hex is %p \n", *ptr_a, ptr_a, ptr_a);
	printf("The address of a = %d in binary is %u and address in hex is %p \n", *ptr_b, ptr_b, ptr_b);
	printf("The address of ch1 = %c in binary is %u and address in hex is %p \n", *ptr_A, ptr_A, ptr_A);
	printf("The address of ch2 = %c in binary is %u and address in hex is %p \n", *ptr_B, ptr_B, ptr_B);
	return 0;
}

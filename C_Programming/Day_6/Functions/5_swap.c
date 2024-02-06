//Write a function to swap contents of two variables using functions (call by value and call by reference).

#include<stdio.h>
void swap(int * ptr_A, int * ptr_B)
{
	int temp;
	temp = *ptr_A;
	*ptr_A = *ptr_B;
	*ptr_B = temp;
}

int main()
{
	int A,B;
	printf("Enter two numbers for swapping.\n");
	printf("Enter the value for A: ");
	scanf("%d", &A);
	printf("Enter the value for B: ");
        scanf("%d", &B);
	printf("Before swapping:\n A=%d and B=%d\n",A,B);
	swap(&A,&B);

	printf("After swapping: \n A=%d and B=%d\n", A,B);
	return 0;
}


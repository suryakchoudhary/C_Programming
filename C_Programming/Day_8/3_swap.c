//Write a program to perform the swap operation 

#include<stdio.h>
int main()
{
	int P, Q; 
	printf("Enter two values for swapping\n");
	printf("Enter value for P: ");
	scanf("%d", &P);
	printf("Enter value for Q: ");
        scanf("%d", &Q);
	printf("Before swapping:\nP = %d and Q = %d\n", P, Q);
	P = P+Q;
	Q = P-Q;
	P = P-Q;
	printf("After swapping:\nP = %d and Q = %d\n", P, Q);
	return 0;
}



//Write a C Program to Find Greatest Element in Array in one dimensional array 

#include<stdio.h>
int main()
{
	int greatest[50], j, A, num,i;
	printf("Enter the 7 numbers to check the greatest\n");
	for(i=0;i<=6;i++)
		scanf("%d", & greatest[i]);

	A = greatest[0];
	for(j=1;j<=6;j++)

			if(greatest[j] > A)
				A = greatest[j];
		printf("%d is the greatest element in the array.\n", A);
		
	
	return 0;
}


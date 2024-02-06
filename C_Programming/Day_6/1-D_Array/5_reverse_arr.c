//Write a C Program to Reversing the 1-D Array Elements 

#include<stdio.h>
int main()
{
	int rev[6], i, j; // = {1,2,3,4,5}, i;
	printf("Enter 6 array element for reversing it\n");
	for(j=0;j <= 5;j++)
		scanf("%d", &rev[j]);

	for(i=5;i >= 0;i--)
	{	printf("%d, ",rev[i]);
	}
	printf("is the reverse of entered array element.\n");

	return 0;
}


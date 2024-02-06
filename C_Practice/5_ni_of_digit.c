//no. of digit


#include<stdio.h>
int main()
{
	int num, count=0, i;
	printf("Enter the number to count its digits: ");
	scanf("%d", &num);
	for(i=0; num>0; i++)
	{
		num=num/10;
		count++;
	}
	printf("Number of digits: %d\n", count);
	return 0;
}


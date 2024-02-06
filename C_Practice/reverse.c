#include<stdio.h>
int main()
{
	int num, rem, dig, i, count = 0;
//	printf("Enter no digit u want: ");
//	scanf("%d", &dig);

	printf("Enter number: ");
	scanf("%d", &num);

	while(num)
	{
		rem = num%10;
		printf("%d", rem);
		count++;
		num = num/10;
	}
//	for(i=0; i<=count; i++)
		printf("No. of digits= %d", count);
}

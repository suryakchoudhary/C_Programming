#include<stdio.h>
int main()
{
	int i, j, len=0;
	char str[50]="HYDERABAD";

	for(i=0; str[i] !='\0'; i++)
	{
		len++;
	}
	printf("length = %d\n", len);

	for(j=len; j<=len; j--)
	{
		printf("%c",str[j]);
	}
	printf("\n");

	str[j]='\0';

	return 0;
}

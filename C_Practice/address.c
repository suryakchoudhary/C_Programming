#include<stdio.h>
int main()
{
	int num[]={1,2,3,4}, i;
	for(i=0; i<4; i++)
		printf("num[%d]= %d \t address =  %d\n", i, num[i], &num[i]);
}

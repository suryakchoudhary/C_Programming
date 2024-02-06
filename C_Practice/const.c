#include<stdio.h>
int main()
{
	const int a= 10;  //a is read only
	int i;
	for(i=1; i<4; i++)
		a++;
	printf("%d\n", a);
}


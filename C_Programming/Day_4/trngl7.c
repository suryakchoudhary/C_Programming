/*Write a program in C to display the pattern like right angle triangle as shown pattern below.
  1
  12
  123
  1234
 */

#include<stdio.h>
int main()
{
	int i,j;
	for(i=1; i<=4; i++)
	{
	for(j=1; j<=i; j++)
	{printf("%d",j);
	}
	printf("\n");
	}
return 0;
}


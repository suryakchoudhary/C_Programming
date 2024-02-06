//Not div by 5


#include<stdio.h>
int main()
{
	int num, sum=0, i;
	printf("Enter num to find sum except div by 5: ");
	scanf("%d", &num);

	for(i=0; num>0; i++)
	{
		if(num%5 !=0)
		{
			sum += num;
			num--;
		}
		else
			num--;
	}
	printf("Sum = %d\n", sum);
	return 0;
}

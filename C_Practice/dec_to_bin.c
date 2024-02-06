#include<stdio.h>
int main()
{
	int num, i, j, arr[50];
	printf("Enter number: ");
	scanf("%d", &num);

	while(num)
	{
		int rem = num%2;
		num = num/2;
		arr[i]= rem;
		i++;
	//	printf("%d", rem);
	}
	for(j=i-1; j>=0; j--)
		printf("%d", arr[j]);
}


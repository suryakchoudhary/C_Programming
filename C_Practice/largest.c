#include<stdio.h>
int main()
{
	int n, i;
	float num[10];

	printf("Enter no. of numaric\n");
	scanf("%d", &n);

	for(i=0; i < n; i++)
	{
		printf("%d......:", i+1);
		scanf("%f", &num[i]);
	}

	for(i=1; i<n; i++)
	{
		if(num[0] < num[i])
			num[0] = num[i];
	}
	printf("Largest    %.2f\n", num[0]);
	return 0;
}

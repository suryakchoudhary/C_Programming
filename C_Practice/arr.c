#include <stdio.h>
int main()
{
	int num[10], n, sum=0, i;
	float avg;
	printf("Enter no. of numarics\n");
	scanf("%d", &n);

	for(i = 0; i < n; i++)
	{
		printf("Enter %d no. ", i+1);
		scanf("%d", &num[i]);

		sum += num[i];
	}
	avg = (float)sum/n;
	printf("sum = %d, Avg = %f\n", sum, avg);
	return 0;
}

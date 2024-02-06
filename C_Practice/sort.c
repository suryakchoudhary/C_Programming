#include<stdio.h>
int main()
{
	int i, j, n, num[10], temp;

	printf("Enter num of numeric\n");
	scanf("%d", &n);

	for(i=0; i<n; i++)
		scanf("%d", &num[i]);

	for(i=0; i<n; i++)
	{
		for(j=i+1; j<n; j++)
		{
			if(num[i] > num[j])
			{
				temp = num[i];
				num[i] = num[j];
				num[j] = temp;
			}
		}
	}
	printf("The sorted elements of the entered array are:\n");
	for(i=0; i<n; i++)
		printf("%d ", num[i]);
	printf("\n");
	return 0;
}


#include <stdio.h>
int main()
{
	int i, j, n, num[10], count=0;

	printf("Enter no of num\n");
	scanf("%d", &n);
	for(i=0; i<n; i++)
		scanf("%d", &num[i]);

	for(i=0; i<n; i++)
	{
		count = 0;
		for(j=0; j<n; j++)
		{
			if(num[j] == num[i])
				count++;
		}
		printf("%d is %d times\n", num[i], count);
	}
	return 0;
}


//Write a C program to count the frequency of each number in a 1-D array.

#include<stdio.h>
int main()
{
	int freq[16],i, j, k, count;
	printf("Enter any 16 numbers to check its frequencies\n");
	for(k=0;k<=15;k++)
		scanf("%d", &freq[k]);

	for(i=0;i<=15;i++)

	{
		count=0;
		for(j=0;j<=15;j++)
		{
			if(freq[j] == freq[i])
				count++;

		}		
		printf("%d is %d times\n", freq[i], count);
	}
	return 0;
}


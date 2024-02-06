#include<stdio.h>
int main()
{
	int x;
	char word[][10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
	printf("Enter the neumaric value: ");
	scanf("%d", &x);
	printf("%s\n", word[x]);
}

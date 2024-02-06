//Write a program to print out all rotations of a string typed in. For eg:if the input is “Space”, the output should be: space paces acesp cespa espac.

#include<stdio.h>
#include<string.h>
int main()
{
	char str[50];
	int i, j;
	printf("Enter word for rotation: ");
	gets(str);

	for(i=0; i<strlen(str); i++)
	{
		for(j=i; j<strlen(str); j++)
		{
			printf("%c",str[j]);
		}
		for(j=0; j<i; j++)
		{
			printf("%c", str[j]);
		}
		printf("\n");
	}
	return 0;
}



//Write a C program to remove characters in a given string except alphabets

#include<stdio.h>
#include<string.h>
int main()
{
	char str[50];
	int i,l;
	printf("Enter string to remove characters from alphabets: ");
	gets(str);
	for(i=0; i<strlen(str); i++)
	{
		if(str[i]>='A' && 'Z'>=str[i])
		{
			printf("%c", str[i]);
		}
		else if(str[i]>= 'a' && str[i]<='z')
		{
			printf("%c", str[i]);
		}
		else if(str[i]==' ')
		{
			printf("%c", str[i]);
		}
	}
	printf("\n");
	return 0;
}


//Write a program to convert lower case string to upper case string and vice versa. 

#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	char str[100];
	int i;
	printf("Enter a string for toupper or tolower conversion\n");
	gets(str);
	for(i=0; i < strlen(str); i++)
	{
		if(str[i]>='A' && str[i]<='Z') 
		{
			str[i] = str[i]+32;
		}
		else if(str[i]>='a' && str[i]<='z')
		{
			str[i] = str[i]-32;
		}
	}
	printf("Converted: %s\n",str);
	
	return 0;
}


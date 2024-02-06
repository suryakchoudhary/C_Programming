//Lower case to Uppercase: Convert a string from lower case to uppercase using pointers. Write a separate function to do the conversion. Do not use intrinsic functions.

#include<stdio.h>
#include<string.h>
#include<ctype.h>
char upper(char *s)
{
	int i;
	for(i=0; *(s+i) != '\0'; i++)
	{
		if(*(s+i) >= 'a' && 'z' >= *(s+i))
		{
			*(s+i) = *(s+i) - 32;
		}
	}
	*(s+i) = '\0';
	return *s;
}
int main()
{
	char str[50], *ptr = str;
	printf("Enter the string to find its upper case.\n");
	gets(str);
	upper(str);
	printf("After conversion to upper case: %s\n", &*str);
	return 0;
}


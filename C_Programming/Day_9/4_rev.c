//Write a C program to find reverse of a string using pointers.

#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	char ch[50], rev[50] = {0}, *ptr1, *ptr2, i, j = 0, len=0;
	ptr1 = ch;
	ptr2 = rev;

	printf("Enter the string which you want to reverse using pointers.\n");
	gets(ch);
	for(i=0; *(ch+i) != NULL; i++)
	{
		len+=1;
	}
	for(i=len-1, j=0; i>=0; i--, j++)
	{
		*(ptr2 + j) = *(ptr1 + i);
	}
	printf("The reverse of %s is: %s\n", ch, rev);
	return 0;
}

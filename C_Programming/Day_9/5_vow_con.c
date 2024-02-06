//Write a program in C to count the number of vowels and consonants in a string using a pointer.

#include<stdio.h>
int main()
{
	char str[100], *ptr; 
	int count1=0, count2=0, i;
       	ptr = str;
	printf("Enter the string for counting the number of vowels and consonants:\n");
	gets(str);
	for(i=0; *(ptr+i) != '\0'; i++)
	{
		if(*(ptr +i)=='A'||*(ptr +i)=='E'||*(ptr +i)=='I'||*(ptr +i)=='O'||*(ptr +i)=='U'||*(ptr +i)=='a'||*(ptr +i)=='e'||*(ptr +i)=='i'||*(ptr +i)=='o'||*(ptr +i)=='u')
		{
			count1++;
		}
		else if(*(ptr+i)>='A' && *(ptr+i)<='Z' || *(ptr+i)>='a' && *(ptr+i)<='z')
		{
			count2++;
		}
	}
	printf("The number of vowels in string is: %d\n", count1);
	printf("The number of consonants in string is: %d\n", count2);
	return 0;
}









/*Write a C program to perform the following operations on two strings using intrinsic functions.
	•Concatenate two strings
	•Find the length of each string
	•Compare two strings
	•Copy string
	•Find whether string1 is the subset of the second string or not(strstr)
*/

#include<stdio.h>
#include<string.h>
int main()
{
	char str1[100]="SURYA KANT ";
	char str2[100]="CHOUDHARY";
	char str3[100] = "SURYAKANT";
        char str4[100] = "RYA", * p;
//	char* p;
	int length, compare;
	
	strcat(str1,str2);
	printf("THIS IS NEW str1 AFTER strcat\n");
	puts(str1);
	printf("THIS IS str2\n");
	puts(str2);
	printf("\n");
	
	printf("This is showing the length of %s\n",str1);
	length=strlen(str1);
	printf("Length = %d\n",length);
	printf("\n");
	
	printf("COMPAIRING str1 AND str2\n");
	compare = strcmp(str1,str2);
	if(str1==str2)
	{
		printf("str1 and str2 are same: i.e. %d\n",compare);
	}
	else
	{
		printf("str1 and str2 are not same: i.e. %d\n",compare);
	}
	printf("\n");

	printf("COPYING str2 TO str1\n");
	strcpy(str1, str2);
	printf("THIS IS NEW str1 AFTER strcpy\n");
	puts(str1);
	printf("THIS IS THE str2\n");
	puts(str2);
	printf("\n");

	printf("THIS IS TO FIND WHETHER str4 IS SUBSET OF str3\n");
	p = strstr(str3, str4);
	if(p)
	{
		printf("str4 IS THE SUBSET OF str3 i.e.\n%s IS A SUBSET OF %s AND OCCURABCE IS %s\n",str4, str3, p);
	}
	else
	{
		printf("str4 IS NOT THE SUBSET OF str3\n");
	}


	return 0;
}


	


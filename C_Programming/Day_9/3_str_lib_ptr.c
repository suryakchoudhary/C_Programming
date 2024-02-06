//Implement string library functions strlen, strcpy, strcat, strcmp with same return values and all error handling features using pointers.


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
	char *ptr1 = str1, *ptr2 = str2, *ptr3 = str3, *ptr4 = str4;	

	printf("%s is the 1st string.\n", ptr1);
	printf("%s is the 2st string.\n", ptr2);
	strcat(&*ptr1,ptr2);
	printf("THIS IS NEW str1 AFTER strcat\n");
	puts(ptr1);
	printf("THIS IS str2\n");
	puts(ptr2);
	printf("\n");
	
	printf("This is showing the length of %s\n",str1);
	length=strlen(ptr1);
	printf("Length = %d\n",length);
	printf("\n");
	
	printf("COMPAIRING str1 AND str2\n");
	compare = strcmp(ptr1,ptr2);
	if(ptr1==ptr2)
	{
		printf("str1 and str2 are same: i.e. %d\n",compare);
	}
	else
	{
		printf("str1 and str2 are not same: i.e. %d\n",compare);
	}
	printf("\n");

	printf("COPYING str1 TO str2\n");
	strcpy(ptr1, ptr2);
	printf("THIS IS NEW str1 AFTER strcpy\n");
	puts(ptr1);
	printf("THIS IS THE str2\n");
	puts(ptr2);
	printf("\n");

	printf("THIS IS TO FIND WHETHER str4 IS SUBSET OF str3\n");
	p = strstr(ptr3, ptr4);
	if(p)
	{
		printf("str4 IS THE SUBSET OF str3 i.e.\n%s IS A SUBSET OF %s AND OCCURABCE IS %s\n",ptr4, ptr3, p);
	}
	else
	{
		printf("str4 IS NOT THE SUBSET OF str3\n");
	}


	return 0;
}


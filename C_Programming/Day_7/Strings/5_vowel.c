//Write a C Program to Count the Number of Vowels, Consonants, digits and remaining characters in given string

#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	int i, count1=0, count2=0, count3=0, count4=0, count5=0, count6=0;
	printf("Enter string for counting vowel, consonant, digits and remaining characters:\n");
	gets(str);

	for(i=0; i<strlen(str); i++)
	{
		
		if(str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U' || str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
			count1++;
		else if(str[i]>='A' && str[i]<='Z' || str[i]>='a' && str[i]<='z')
			count2++;
		
		
		else if(str[i]>='0' && '9' >=str[i])
			count3++;

		else if(str[i]==' ')
			count4++;

		else if(str[i]=='\n')
			count5++;

		else if(str[i] == '\t')
			count6++;
	}
	printf("Number of vowels used is: %d\n", count1);
	printf("Number of consonant used is: %d\n", count2);
	printf("Number of digits used is: %d\n", count3);
        printf("Number of white spaces used is: %d\n", count4);
	printf("Number of new lines used is: %d\n", count5);
        printf("Number of tabs used is: %d\n", count6);




	return 0;
}





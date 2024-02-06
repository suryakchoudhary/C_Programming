#include<stdio.h>
#include<string.h>
int main()
{
	char s1[10]="surya";
	char s2[10]="kant";
	char s3[10]="surya";

	strncpy(s1, s2, 1);
	printf("str1 %s\nstr2 %s\n", s1, s2);
	strncat(s3,s2,2);
	printf("str3 %s\nstr2 %s\n", s3, s2);

}

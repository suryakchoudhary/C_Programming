// numeric to string

#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
	char  num;
	int n;
	printf("Enter a number: ");
	scanf("%d", &n);
	num = n;

	printf("%d\n", num);
//	char string[100][100] = {"zero", "one","two","three","four","five","six","seven","eigth","nine"};    //this
	char *string[] = {"zero", "one","two","three","four","five","six","seven","eigth","nine"};    // or this

	printf("%s\n", string[num]);
}


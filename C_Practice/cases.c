#include<stdio.h>
int main()
{
	char x;
	printf("Enter character for identification\n");
	scanf("%c", &x);
//	printf("%c\n", x);
	int y = x;
//	printf("%d kdsj\n", y);

	if(48 <= y && y <= 57)
		printf("%c is a digit\n", x);
	else if(65 <= y && y <= 90)
		printf("%c is a upper case\n", x);
	else if(97 <= y && y <= 122)
		printf("%c is a lower case\n", x);
	return 0;
}

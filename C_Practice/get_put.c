#include<stdio.h>
int main()
{
	char c;
	printf("Enter\n");
//	c = getc(stdin);     //for reading from files
	c=getchar();         //for reading from keyboard
	
	printf("Entered ");
//	putc(c, stdout);     //for writing in file
	putchar(c);          //for writing on screen
	printf("\n");
	return 0;
}

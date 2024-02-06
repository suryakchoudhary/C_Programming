/*Write a menu driven C program to implement “wc” utility of Linux.  
  	  Take file as an input and print the following:
	a)Number of characters
	b)Number of lines
	c)Number of words
*/


#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(int argc, char *argv[])
{
	int c=0, l=0, w=0;
	char ch;
	FILE *fptr;

	if(argc==1)
		printf("Invalid parameter.\n");

	if(argc>3)
		printf("Too many parameters.\n");

	if(argc==3)
	{
		fptr=fopen(argv[2], "r"); //argument vector starts from 0
	       if(strcmp(argv[1], "-c")==0)
	       {
		       while((ch=getc(fptr)) != EOF)
		       {
			       if(ch!='\n' && ch !=' ')
				       c++;
		       }
		       printf("\nNumber of characters in the file is: %d\n\n", c);
	       }
		

	       else if(strcmp(argv[1], "-l")==0)
               {
                       while((ch=getc(fptr))  != EOF)
                       {
                               if(ch=='\n')
                               l++;
                       }
		       printf("\nNumber of lines in the file is: %d\n\n", l);
	       }


	       else if(strcmp(argv[1], "-w")==0)
	       {
		       while((ch=getc(fptr))  != EOF)
		       {
			       if(ch=='\n' || ch==' ')
				       w++;
		       }
		       printf("\nNumber of words in the file is: %d\n\n", w);
	       }

	       else
		       exit(0);
	}
	fclose(fptr);
	return 0;
}




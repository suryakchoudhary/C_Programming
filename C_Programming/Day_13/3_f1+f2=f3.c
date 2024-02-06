//Write a program that will concatenate two files, that is append the contents of one file at the end of another file and write the results into a third file.

#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fptr1, *fptr2, *fptr3;
	char ch;
	fptr1=fopen("file1.txt", "r");
	fptr2=fopen("file2.txt", "r");
	fptr3=fopen("file3.txt", "w");
	if(fptr1 == NULL || fptr2 == NULL || fptr3 == NULL)
	{
		printf("Error!: File not found\n");
		exit(1);
	}
	while(1)
	{
		ch=fgetc(fptr1);
		if(ch == EOF)
			break;
		fputc(ch,fptr3);
	}
	while(1)
        {
                ch=fgetc(fptr2);
                if(ch == EOF)
                        break;
                fputc(ch,fptr3);
        }
	printf("\nfile1.txt copied to file3.txt and file2.txt is appended to file3.txt.\n\n");
	fclose(fptr1);
	fclose(fptr2);
	return 0;
}




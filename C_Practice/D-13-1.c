#include <stdio.h>
#include<stdlib.h>
int main(){
    char Name[50];
    float Height;
    int i, num;
    printf("Enter the number of records you want: ");
    scanf("%d", &num);
    FILE *fptr;
    fptr=fopen("file.txt","a");
    if(fptr == NULL)
    {
	    printf("Error!\n");
	    exit(1);
    }

    fputs("S.No.\tNAME\tHEIGHT\n", fptr);  //This print statement and
    for(i=0;i<num;++i)
    {

	printf("STUDENT: %d\n",i+1);
        printf("Enter name: ");
        scanf("%s",Name);
        printf("Enter height: ");
        scanf("%f",&Height);
	printf("\n");
	fprintf(fptr,"\n%d\t%s\t%f\n",i+1, Name, Height);  //this print both are correct
    }
    fclose(fptr);
  printf("Your file is ready with file name file.txt\n");
  return 0;
}


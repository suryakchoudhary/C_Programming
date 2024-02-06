//Write a program to read the name and marks of a student and store it in a file.
//If the file already exists, add information to it.



#include <stdio.h>
#include<stdlib.h>
int main(){
    char Name[50];
    float Height;
    int i, num;
    printf("Enter the number of records you want: ");
    scanf("%d", &num);
    FILE *fptr;
    fptr=fopen("1_store.txt","a");
    if(fptr == NULL)
    {
	    printf("Error!\n");
	    exit(1);
    }

    fputs("\nS.No.\tNAME\tHEIGHT\n", fptr);  //This print statement and
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
  printf("Your entered data is stored in a file with file name 1_store.txt\n");
  return 0;
}


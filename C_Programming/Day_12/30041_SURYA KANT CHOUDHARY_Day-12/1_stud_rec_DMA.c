/*Write a C program to store ‘n’ student records entered by user.  allocate memory dynamically using malloc()/calloc() function and print the records grade level(based on percentage)
Distinction     : >=75
First Grade    : 60 to 74.99
Second grade : 50 to 59.99
Third grade   :40 to 49.99
Fail                  : below 40

Example structure:
Struct Student
{
	Int ID;
	Char Name[20];
	Float percentage;
}
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
struct student
{
	int ID;
	char Name[20];
	float percentage;
};
int main()
{
	struct student *ptr;
	int i, n;
	printf("Enter number of record you want to input: ");
	scanf("%d", &n);
	ptr=(struct student*)malloc(n*sizeof(struct student));
	for(i=0; i<n; i++)
	{
		printf("Student: %d\n", i+1);
		printf("Enter ID of student: ");
		scanf("%d",&(ptr+i)->ID);
		printf("Enter Name of student: ");
                scanf("%s",(ptr+i)->Name);
		printf("Enter percentage marks of student: ");
                scanf("%f",&(ptr+i)->percentage);
		printf("\n\n");
	}

	printf("S.NO.\tID\tNAME\tPERCENTAGE\n");
	for(i=0; i<n; i++)
	{
		if(((ptr+i)->percentage) >= 75)
		{
			printf("........DISTINSION.........\n");
			printf("%d\t%d\t%s\t%f\n", i+1, (ptr+i)->ID, (ptr+i)->Name, (ptr+i)->percentage);
                	printf("\n\n");
		}

		else if(60 <= ((ptr+i)->percentage) && ((ptr+i)->percentage) <= 74.99)
		{
			printf("........1st GRADE.........\n");
			printf("%d\t%d\t%s\t%f\n", i+1, (ptr+i)->ID, (ptr+i)->Name, (ptr+i)->percentage);
                       printf("\n\n");
		}


		else if(50 <= ((ptr+i)->percentage) && ((ptr+i)->percentage) <= 59.99)
                {
                        printf("........2nd GRADE.........\n");
			printf("%d\t%d\t%s\t%f\n", i+1, (ptr+i)->ID, (ptr+i)->Name, (ptr+i)->percentage);
                        printf("\n\n");
                }

		else if(40 <= ((ptr+i)->percentage) && ((ptr+i)->percentage)<= 49.99)
                {
                        printf("........3rd GRADE.........\n");
			printf("%d\t%d\t%s\t%f\n", i+1, (ptr+i)->ID, (ptr+i)->Name, (ptr+i)->percentage);
                        printf("\n\n");
                }

		else if(((ptr+i)->percentage) < 40)
                {
                        printf("........FAIL.........\n");
			printf("%d\t%d\t%s\t%f\n", i+1, (ptr+i)->ID, (ptr+i)->Name, (ptr+i)->percentage);
                      printf("\n\n");
                }

	}
	free(ptr);
	ptr=NULL;


	return 0;
}





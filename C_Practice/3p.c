#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct student{
	int RollNumber;
	char Name[10];
	char Sex;
	float ExamScore;
};
int main()
{
	struct student stud[10];
	int i=0, j, k, num, count=0; 
	float A , B;
	for(i; i<5; i++)
	{
		printf("Student: %d\n",i+1);
		printf("Enter Student's Roll number: ");
		scanf("%d", &stud[i].RollNumber);

		printf("Enter Student's Name: ");
		scanf("%s", stud[i].Name);

		printf("Enter Student's gender: ");
		scanf("%s", &stud[i].Sex);

		printf("Enter Student's Exam Score: ");
		scanf("%f", &stud[i].ExamScore);
		printf("\n");
	}

		printf("\n\nRoll no..........Name.......Gender............Marks\n");
		for(i=0; i<5; i++)
			printf("%d\t\t%s\t\t%c\t\t%f\n",stud[i].RollNumber, stud[i].Name, stud[i].Sex, stud[i].ExamScore);
	return 0;
}

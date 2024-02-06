/*Student record management System 
  Write a C program to keep records and perform statistical analysis for a class of 5 students.  The information of each student contains: 
  RollNumber
  Name
  Sex
  Exam Score.  
  The program will prompt the user to choose the operation of records from a menu as shown below: 
  Menu
  1. Add student records
  2. View all student records
  3. Show student who gets the maximum score
  4. Show student who gets the minimum score
  */



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
	while(num!=5)
	{
		{
			printf("1. for add student's Record.\n");
			printf("2. for view all student records.\n");
			printf("3. for show student who gets the maximum score.\n");
			printf("4. for show student who gets the minimum score.\n");
			printf("5. to exit.\n\n");
		}
	       	
		scanf("%d", &num);

		
		if(num==1)
		{
			for(i=0; i<5; i++)
			{
				printf("Student:%d\n", count+1);
				printf("Enter Student's Roll number: ");
				scanf("%d", &stud[count].RollNumber);

				printf("Enter Student's Name: ");
				scanf("%s", stud[count].Name);

				printf("Enter Student's gender: ");
				scanf("%s", &stud[count].Sex);

				printf("Enter Student's Exam Score: ");
				scanf("%f", &stud[count].ExamScore);
				count++;
				printf("\n\n");
				break;
			}}

		else if(num==2)
		{
			{
				printf("\n\nRoll no..........Name.......Gender............Marks\n");
				for(i=0; i<count; i++)
					printf("%d\t\t%s\t\t%c\t\t%f\n",stud[i].RollNumber, stud[i].Name, stud[i].Sex, stud[i].ExamScore);
			}
			printf("\n\n");
		}



		else if(num==3)
		{
			A = stud[0].ExamScore;
			for(j=0;j<count;j++)
			{
				if(stud[j].ExamScore > A)
					A = stud[j].ExamScore;
				else
					continue;
			}
			printf("\nMaximum score: %f\n\n", A);
		}


		else if(num==4)
		{
			B = stud[0].ExamScore;
			for(j=0;j<count;j++)
			{
				if(stud[j].ExamScore < B)
					B = stud[j].ExamScore;
				else
					continue;
			}
			printf("\nMinimum score: %f\n\n", B);
		}
//		else if(num==5)
//			exit(0);
	}
	return 0;
}






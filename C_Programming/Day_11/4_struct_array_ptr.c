/*Write a program to read and print an Employee’s details using Structure.
  Use array of structures and pointer to the array of structures concepts.
  */

#include<stdio.h>
#include<string.h>
#include<ctype.h>
struct Employee {
	char Name[10];
	int id;
	float Salary;
	char Gender;
};
int main()
{
	struct Employee emp1[10];
	struct Employee *ptr=emp1; 
	int i=0;
	for(i; i<5; i++)
	{
		printf("Employrr: %d\n", i+1);
		printf("Enter Name: ");
		scanf("%s", (ptr+i)->Name);

		printf("Enter id: ");
		scanf("%d", &(ptr+i)->id);

		printf("Enter Salary: ");
		scanf("%f", &(ptr+i)->Salary);

		printf("Enter Gender: ");
		scanf("%s", &(ptr+i)->Gender);
		printf("\n");
	}

	printf("S.No.\tName\tid\tSalary    \tGender\n");
	for(i=0; i<5; i++)
	{
		printf("%d\t%s\t%d\t%f\t%c\n", i+1,(ptr+i)->Name, (ptr+i)->id, (ptr+i)->Salary, (ptr+i)->Gender);
	}

	return 0;
}








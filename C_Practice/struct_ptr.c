#include <stdio.h>
#include <string.h>
struct stud{
	int roll;
	float marks;
};
struct employee {
	int id;
	char name[20];
	float salary;
	char gender;
	struct stud stud;
}emp, * ptr;

int main()
{
	emp.id = 100000;
	strcpy(emp.name, "SURYA");
	emp.salary = 1324.44;
	emp.gender = 'M';
	emp.stud.roll = 170;

	ptr = &emp;

	printf("ID = %d\n", ptr->id);
	scanf("%d", &ptr->id);
	printf("ID = %d\n", ptr->id);
	printf("Name = %s\n", ptr->name);
	printf("Salary = %f\n", ptr->salary);
	printf("Gender = %c\n", ptr->gender);

	printf("Roll no. = %d\n", ptr->stud.roll);

	printf("Enter marks: ");
	scanf("%f", &ptr->stud.marks);
	printf("Marks = %f\n", ptr->stud.marks);
}



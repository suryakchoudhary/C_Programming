#include<stdio.h>
#include<string.h>
struct stud{ 
	char name[10];
	int roll;
	float marks;
};

struct staff{
	float salary;
	int emp_id;
	struct stud stud;   //struct stud is the datatype of 2nd stud
}det;

int main()
{
	det.salary = 2000.3;
	det.emp_id = 1703031105;

	strcpy(det.stud.name, "surya");
	det.stud.roll = 45;
	det.stud.marks = 85.5;

	printf("Salary = %f\n", det.salary);
	printf("Emp ID = %d\n",det.emp_id);

	printf("name = %s\n", det.stud.name);
	printf("Roll number = %d\n", det.stud.roll);
	printf("Marks = %f\n", det.stud.marks);
}


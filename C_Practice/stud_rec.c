#include<stdio.h>
#include<ctype.h>
#include<string.h>
void add();
struct student{
	int roll;
	char name[10];
	char sex;
	float marks;
}stud[5];

int main()
{
	int menu;
	while(menu!=5)
	{
		printf("1. Add student records\n");
		printf("2. View all student records\n");
		printf("3. Show student who gets the maximum score\n");
		printf("4. Show student who gets the minimum score\n");
		printf("5. EXIT\n");

		scanf("%d", &menu);

		switch(menu)
		{
			case 1: add();
				break;

	/*		case 2: view();
				break;

			case 3: max();
				break;

			case 4: min();
				break;
*/
			default: printf("Enter valid menu.\n");
				 break;
		}
	}
	return 0;
}

void add()
{
	static int i, count=0;
	for(i=0; i<4; i++)
	{
		printf("STUDENT %d\n", count+1);
		printf("Enter roll number: ");
		scanf("%d", &stud[count].roll);

		printf("Enter name: ");
		scanf("%s", stud[count].name);
//		gets(stud[i].name);

		printf("Enter gender: ");
		scanf("%s", &stud[count].sex);

		printf("Enter marks: ");
		scanf("%f", &stud[count].marks);
		break;
	}
}


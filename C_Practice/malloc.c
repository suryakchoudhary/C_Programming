#include<stdio.h>
#include<stdlib.h>
#include<math.h>

struct student{
	int id;
	char name[10];
	float marks;
}*ptr;

int main()
{
	int rec, i;
	printf("Enter no. of record u want to enter\n");
	scanf("%d", &rec);

	ptr = (struct student *)malloc(rec * sizeof(struct student));

	//ptr = (struct student *)calloc(rec, sizeof(struct student));

	for(i=0; i<rec; i++)
	{
		printf("STUDENT %d\n", i+1);
		printf("Enter id: ");
		scanf("%d", &(ptr+i)->id);

		printf("Enter name: ");
		scanf("%s", (ptr+i)->name);

		printf("Enter marks: ");
		scanf("%f", &(ptr+i)->marks);
		printf("\n\n");
	}

	for(i=0; i<rec; i++)
	{
		printf("STUDENT %d", i+1);
		printf("id = %d\n", (ptr+i)->id);
		printf("Name = %s\n", (ptr+i)->name);
		printf("Marks = %f\n", (ptr+i)->marks);
		printf("\n");
	}
	free(ptr);
	ptr = NULL;
}

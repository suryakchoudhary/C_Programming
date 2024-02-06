//Stack using singly linked list

#include<stdio.h>
#include<stdlib.h>
void insert();
void delete();
void display();
int size();
struct node
{
	int data;
	struct node* next;
}*head;

int main()
{
	int num;
	while(num)
	{
		printf("\n==============\n");
		printf("1. Insert.\n");
		printf("2. Delete.\n");
		printf("3. display.\n");
		printf("4. size.\n");
		printf("5. Exit.\n");

		scanf("%d", &num);

		switch(num)
		{
			case 1: insert();
				display();
				break;

			case 2: delete();
				display();
				break;

			case 3: display();
				break;

			case 4: if(head==NULL)
					printf("\nStack is empty.\n");
				else
					printf("\nSize is: %d\n", size());
				break;

			case 5: //exit(1);
				printf("Thank You! Please Come Again.\n");
				exit(1);
				break;

			default: printf("\nEnter a valid option.\n");
				 break;
		}
	}
}

void insert()
{
	int num1;
	struct node* temp, *trav;
	trav=head;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("Enter the element you want to insert the stack: ");
	scanf("%d", &num1);
	temp->data=num1;

	if(trav==NULL)
	{
	//	printf("%d is inserted.\n", temp->data);
		temp->next=NULL;
		head=temp;
	}
	else
	{
		while(trav->next != NULL)
			trav=trav->next;


	//	printf("%d is inserted.\n", temp->data);
		temp->next = NULL;
		trav->next= temp;
	}
	printf("\n");
}

void delete()
{
	struct node* prev, *trav;
	trav= head;
	if(head==NULL)
		printf("Stack is empty.\n");

	else if(size() == 1)
	{
	//	printf("%d is deleted.\n", head->data);
		head=NULL;
		free(trav);
	}

	else
	{
		while(trav->next != NULL)
		{
			prev=trav;
			trav= trav->next;
		}
	//	printf("%d is deleted.\n", trav->data);
		prev->next=NULL;
		free(trav);
	}
	printf("\n");
}

void display()
{
	int count=0;
	struct node* temp;
	temp=head;

	if(head == NULL)
		printf("Stack is empty. So, nothing to display.\n");

	else
	{
		printf("\n");
		while(temp != NULL)
		{
			printf("%d\t", temp->data);
			temp=temp->next;
		}
	}
	printf("\n");
}

int size()
{
	int count=0;
	struct node* trav;
	trav=head;
	while(trav != NULL)
	{
		trav=trav->next;
		count++;
	}
	return count;
}






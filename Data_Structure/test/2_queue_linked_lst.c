// Queue using singly linked list


#include<stdio.h>
#include<stdlib.h>
void enqueue();
void dequeue();
void display();
int size();
struct node
{
	int data;
	struct node* next;
} *head;

int main()
{
	int num;
	while(num!=5)
	{
		printf("\n=========\n");
		printf("1. Enqueue.\n");
		printf("2. Dequeue.\n");
		printf("3. Display.\n");
		printf("4. Size.\n");
		printf("5. Exit.\n");

		scanf("%d", &num);

		switch(num)
		{
			case 1: enqueue();
				printf("\n");
				display();
				break;

			case 2: dequeue();
				printf("\n");
				display();
				break;

			case 3: display();
				break;

			case 4: if(head==NULL)
					printf("Queue is empty.\n");
				else
					printf("\nSize is: %d\n", size());
				break;

			default: printf("Enter the valid option.\n");
				 break;
		}
	}
}

void enqueue()
{
	int num1;
	struct node* temp, *trav;
	trav=head;
	temp= (struct node*)malloc(sizeof(struct node));
	printf("Enter the element you want to insert in queue: ");
	scanf("%d", &num1);
	temp->data = num1;

	if(head==NULL)
	{
		printf("%d is inserted.\n", temp->data);
		temp->next=NULL;
		head=temp;
	}
	else
	{
		while(trav->next != NULL)
			trav=trav->next;
		printf("%d is inserted.\n", temp->data);
		temp->next=NULL;
		trav->next=temp;
	}
}


void dequeue()
{
	struct node* temp;
	temp = head;

	if(temp==NULL)
		printf("Queue is empty.\n");

	else if(size() == 1)
	{
		printf("%d is deleted.\n", head->data);
		head=NULL;
		free(temp);
	}

	else
	{
		printf("%d is deleted.\n", head->data);
		head= temp->next;
		free(temp);
	}
}

void display()
{
	struct node* temp;
	temp=head;
	if(head==NULL)
		printf("Queue is empty.\n");

	else
	{
		while(temp != NULL)
		{
			printf("%d\t", temp->data);
			temp=temp->next;
		}
	}
}



int size()
{
	int count=0;
	struct node* temp;
	temp=head;

	while(temp != NULL)
	{
		temp=temp->next;
		count++;
	}
	return count;
}


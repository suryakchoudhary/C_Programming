#include<stdio.h>
void enqueue();

struct node{
	int data;
	struct node * next;
}* head=NULL;

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
	struct node * temp, * trav;
	temp = (struct node *)malloc(sizeof(struct node));
	printf("Enter element: ");
	scanf("%d", &temp->data);

	if(head == NULL)
	{
		temp->next = NULL;
		head = temp;
		printf("%d is inserted\n", head->data);
	}
	else
	{
		trav = head;
		while(trav->next != NULL)
			trav=trav->next;
		temp->next = NULL;
		trav->next = temp;
	}
}



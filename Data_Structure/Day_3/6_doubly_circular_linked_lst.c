// Doubly circular linked list


#include<stdio.h>
#include<stdlib.h>
void insrt_beg();
void insrt_end();
void insrt_loc();
void delete_beg();
void delete_end();
void delete_loc();
void display();
int size();


struct node
{
	struct node* prev;
	int data;
	struct node* next;
}*head=NULL, *last=NULL;

//struct node* temp;
//temp = (struct node*)malloc(sizeof(struct node));

int main()
{
	int num=0;
	while(num < 10)
	{
		printf("\n==============\n");
		printf("1. Insert at begining.\n");
		printf("2. Insert at end.\n");
		printf("3. Insert at specific location.\n");
		printf("4. Delete from begining.\n");
		printf("5. Delete from end.\n");
		printf("6. Delete from specific location.\n");
		printf("7. Display.\n");
		printf("8. Size.\n");
		printf("9. Exit.\n");

		scanf("%d", &num);

		switch(num)
		{
			case 1: insrt_beg();
				display();
				break;

			case 2: insrt_end();
				display();
				break;

			case 3: insrt_loc();
				display();
				break;

			case 4: delete_beg();
				display();
				break;

			case 5: delete_end();
				display();
				break;

			case 6: delete_loc();
				display();
				break;

			case 7: display();
				break;

			case 8: if(head == NULL)
					printf("\nCircular linked list is empty.\n");
				else
					printf("\nSize: %d.\n", size());
				break;

			case 9: printf("Thank You! Please Come Again.\n");
				exit(1);
				break;
		}
	}
}

void insrt_beg()
{
	int num1;
	struct node* trav, *temp;
	printf("Enter the element you want to insert: ");
	scanf("%d", &num1);
	temp = (struct node*)malloc(sizeof(struct node));
	temp->data = num1;

	if(head == NULL)
	{
		temp->next = temp;
		temp->prev = temp;
		head=temp;
//		head->next = temp;
//		head->prev = temp;
		last = head;
	}

	else
	{
		temp->next = head;
		temp->prev = last;
		last->next = temp;
		head=temp;
	}
}

void insrt_end()
{
	int num1;
	struct node* temp;
	temp = (struct node*)malloc(sizeof(struct node));
	printf("Enter the element you want to insert at the end.\n");
	scanf("%d", &num1);
	temp->data= num1;

	if(head == NULL)
	{
		head = temp;
		head->next = temp;
		head->prev = temp;
		last = head;
	}
	else
	{
		last->next = temp;
		temp->prev = last;
		temp->next = head;
		head->prev = temp;
		last = temp;
	}
}

void insrt_loc()
{
	int loc, i;
	struct node* trav, *temp, *stor;
	temp = (struct node*)malloc(sizeof(struct node));
	trav=head;
	printf("Enter the location to insert the element: ");
	scanf("%d", &loc);

	if(loc < 1 || loc > (size()+1))
		printf("Insertion not possible.\n");

	else if(head == NULL && loc > 1)
		printf("Insertion not possible.\n");

	else if(loc == 1)
		insrt_beg();

	else if(loc == (size() +1))
		insrt_end();

	else
	{
		printf("Enter the element you want to insert: ");
		scanf("%d", &temp->data);

		for(i=1; i < (loc-1); i++)
		{
			trav = trav->next;
		}

		temp->next = trav->next;
		temp->prev = trav;
		stor=trav->next;
		stor->prev=temp;
		trav->next = temp;
	}
}

void delete_beg()
{
	int i;
	struct node* trav;
	trav = head;
	if(head == NULL)
		printf("Doubly circular linked list is empty.\n");

	else if(size() == 1)
	{
		head = NULL;
		free(trav);
	}
	else
	{
		head=head->next;
		head->prev=last;
		last->next = head;
		free(trav);
	}
}

void delete_end()
{
	int i;
	struct node* trav, *stor, *stor2;
	trav = head;
	if(head == NULL)
		printf("Doubly circular linked list is empty.\n");

	else if(size() == 1)
	{
		head = NULL;
		free(trav);
	}
	else 
	{
		for(i=1; i < size(); i++)
		{
			stor=trav;
			trav=trav->next;
		}
		stor->next = head;
		head->prev = stor;
		free(trav);/*
		stor = last->prev;
		stor->next = head;
		head->prev = stor;
		stor2 = last;
		free(stor2);*/
	}
}

void delete_loc()
{
	int i, loc;
	struct node* trav, *stor1, *stor2;
	trav=head;
	printf("Enter the location to free it: ");
	scanf("%d", &loc);

	if(head == NULL)
		printf("Doubly circular linked list is empty.\n");

	else if(loc < 1 || loc > (size() + 1))
		printf("Deletion not possible.\n");

	else if(loc == 1)
		delete_beg();

	else if(loc == size())
		delete_end();

	else 
	{
		for(i=1; i < loc; i++)
			trav=trav->next;

//		trav->prev = trav->next;
		stor1 = trav->prev;
		stor1->next = trav->next;
		stor2 = trav->next;
		stor2->prev = trav->prev;
		free(trav);
	}
}

void display()
{
	int i;
	struct node* trav;
	trav=head;
	if(head == NULL)
		printf("Doubly circular linked list is empty. So nothing to print in display.\n");

	else
	{
		for(i=1; i <= size(); i++)
		{
			printf("%d\t", trav->data);
			trav=trav->next;
		}
	}
}

int size()
{
	int count=0;
	struct node* trav;
	trav = head;
	while(trav->next != head)
	{
		count++;
		trav =trav->next;
	}
	count++;
	return count;
}








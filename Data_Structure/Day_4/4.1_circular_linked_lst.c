// Circulat linked list

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
	int data;
	struct node* next;
}*head=NULL;

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
	struct node* temp, *trav;
	trav = head;
	temp = (struct node*)malloc(sizeof(struct node));
	printf("Enter the element you want to enter: ");
	scanf("%d", &num1);
	temp->data = num1;

	if(head == NULL)
	{
		temp->next = temp;
		head=temp;
	}

	else
	{
		while(trav->next != head)
			trav=trav->next;

		temp->next = head;
		trav->next=temp;
		head=temp;
	}
}

void insrt_end()
{
	int num1;
	struct node* temp, *trav, *start;
	trav=head;
//	temp= (struct node*)malloc(sizeof(struct node));
//	temp->data = num1;
	
	if(head==NULL)
		insrt_beg();

	else
	{
		printf("Enter the element you want to insert at the end: ");
	        scanf("%d", &num1);
		trav=head;
                temp= (struct node*)malloc(sizeof(struct node));
                temp->data = num1;
		while(trav->next != head)
			trav=trav->next;

		trav->next = temp;
		temp->next= head;
	}
}

void insrt_loc()
{
	int num1, loc, i;
	struct node* temp, *trav;
	trav = head;
	temp= (struct node*)malloc(sizeof(struct node));
	printf("Enter the location for entering the element: ");
	scanf("%d", &loc);
	
	if(head == NULL && loc > 1)
		printf("\nInsertion not possible.\n");

	else if(loc > (size()+1) || loc < 1 )
		printf("\nInsertion not possible, please enter in range %d.\n", size());

	else if(loc == (size()+1))
		insrt_end();

	else if(loc == 1)
		insrt_beg();

	else
	{
		printf("Enter the element: ");
		scanf("%d", &num1);
		temp->data = num1;
		for(i=1; i < loc-1; i++)
			trav=trav->next;

		temp->next = trav->next;
		trav->next = temp;
	}
}

void delete_beg()
{
	int i;
	struct node* trav, *temp;
	trav = head;
	temp = head;
	if(head == NULL)
		printf("\nCircular linked list is empty.\n");

	else if(size() == 1)
	{
		head=NULL;
		free(temp);
	}
	else
	{
		for(i=1; i < size(); i++)
			trav=trav->next;

		head=head->next;
		trav->next = head;
		free(temp);
	}
}

void delete_end()
{
	int i;
	struct node* trav, *temp;
	trav=head;

	if(head== NULL)
		printf("\nCircular linked list is empty.\n");

	else if(size() == 1)
		head = NULL;

	else
	{
		for(i=1; i < size(); i++)
		{
			temp=trav;
			trav=trav->next;
		}

		temp->next = head;
		free(trav);
	}
}

void delete_loc()
{
	int loc, i;
	struct node* trav, *stor;
	trav=head;
	printf("Enter the location you want to free: ");
	scanf("%d", &loc);

	if(head==NULL)
		printf("\nCircular linked list is empty.\n");

	else if(loc < 1 || loc > (size()+1))
		printf("\nDeletion not possible.\n");

	else if(size() == 1)
		head == NULL;

	else if(loc == size())
		delete_end();

	else if(loc == 1)
		delete_beg();

	else
	{
		for(i=1; i < loc; i++)
		{
			stor = trav;
			trav=trav->next;
		}
		stor->next= trav->next;
		free(trav);
	}

}


void display()
{
	struct node* trav;
	trav=head;
	if(head == NULL)
		printf("\nCircular linked list is empty. So, nothing to display.\n");

	else
	{
		printf("\n");
		while(trav->next != head)
		{
			printf("%d\t", trav->data);
			trav=trav->next;
		}
		printf("%d\t", trav->data);
	}
	printf("\n");
}

int size()
{
	int count=0;
	struct node* trav;
	trav=head;
	while(trav->next != head)
	{
		count++;
		trav=trav->next;
	}
	count++;
	return count;
}

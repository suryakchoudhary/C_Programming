// Singly Linked List Operations



#include<stdio.h>
#include<stdlib.h>
void insrt_begin();
void insrt_end();
void insrt_loc();
void delete_begin();
void delete_end();
void delete_loc();
void delete_data();
void display();
int size();
struct node
{
	int data;
	struct node* next;
} *head= NULL, *last;

int main()
{
	int num;

	while(num!=10 )
	{
		printf("=====================\n");
		printf("1. Insert data at beginning.\n");
		printf("2. Insert data at the end.\n");
		printf("3. Insert data at a specific location.\n");
		printf("4. Delete data from benining.\n");
		printf("5. Delete data from end.\n");
		printf("6. Delete data at specific location.\n");
		printf("7. Delete data.\n");
		printf("8. Display.\n");
		printf("9. Size\n");
		printf("10. Exit.\n");

		printf("Enter your choice: ");
		scanf("%d", &num);


		switch(num)
		{
			case 1: insrt_begin();
				display();
				break;

			case 2: insrt_end();
				display();
				break;

			case 3: insrt_loc();
				display();
				break;

			case 4: delete_begin();
				display();
				break;

			case 5: delete_end();
				display();
				break;

			case 6: delete_loc();
				display();
				break;

			case 7: delete_data();
				display();
				break;

			case 8: display();
				break;

			case 9: printf("\nSize of singly linked list is: %d.\n", size());
				break;

			case 10: printf("Thank You ! Please Come Again.\n");
				 exit(1);
				 break;

			default: printf("\nEnter the valid option.\n");
				 break;

		}
	}
}

void insrt_begin()
{
	int num1;
	struct node* temp;
	temp= (struct node*) malloc(sizeof(struct node));
	printf("\nEnter the element you want to insert at the beginning: ");
	scanf("%d", &num1);
	temp->data= num1;

	if(head == NULL)
	{
		temp->next=0;
		head=temp;
	}

	else
	{
		temp->next=head;
		head=temp;
	}
	printf("\n%d is inserted.\n", temp->data);
	//	printf("\n\n");
}

void insrt_end()
{
	int num1;
	struct node* temp, *trav;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("\nEnter the element you want to insert at the end: ");
	scanf("%d", &num1);
	temp->data=num1;
	trav = head;

	if(head==NULL)
	{
		temp->next=0;
		head=temp;
	}

	else
	{
		//traversing to last element
		while(trav->next != NULL)
			trav=trav->next;

		//inserting at the end
		temp->next = 0;
		trav->next = temp;
	}
	printf("\n%d is inserted.\n", temp->data);
	//	printf("\n");
}

void insrt_loc()
{
	int num1, i, loc;
	struct node *temp, *prev, *fwd;
	temp= (struct node*)malloc(sizeof(struct node));
	printf("\nEnter the location where you want to insert the element: ");
	scanf("%d", &loc);
	temp->data= num1;
	fwd = head;

	if(loc > (size()+1) || loc<=0)
		printf("\nIncertion is not possible.\n");

	else if(head==NULL && loc > 1)
		printf("\nIncertion is not possible.\n");

	else if(loc== 1)
		insrt_begin();

	else if(loc== (size()+1))
		insrt_end();

	else
	{

		printf("Enter the element you want to insert: ");
		scanf("%d", &num1);
		temp->data= num1;
		for(i=1; i<loc; i++)
		{
			prev=fwd;
			fwd=fwd->next;
		}
		prev->next=temp;
		temp->next=fwd;
		printf("\n%d is inserted.\n", temp->data);

	}
}

void delete_begin()
{
	struct node* temp;
	temp=head;
	if(head == NULL)
		printf("\nSingly linked list is empty.\n");

	else
	{
		printf("\n%d is deleted.\n", head->data);
		head = temp->next;
	}

	free(temp);
}

void delete_end()
{
	int i;
	struct node* prev, *temp;
	temp=head;

	if(head==NULL)
		printf("\nSingly linked list is empty.\n");

	else if(temp->next == NULL)
	{
		printf("\n%d is deleted.\n", temp->data);
		head=NULL;
	}

	else
	{
		for(i=1; i< size(); i++)
		{
			prev= temp;
			temp=temp->next;
		}

		prev->next = NULL;

		printf("\n%d is deleted.\n", temp->data);
	}
	free(temp);
}

void delete_data()
{
	int num1, flag=0;
	struct node* trav, *stor1, *prev;
	trav=head;
	printf("Enter the data you want to delete: ");
	scanf("%d", &num1);
	if(head == NULL)
		printf("Linked list is empty.\n");

	else if(num1 == head->data)
	{
		head=head->next;
		free(trav);
	}

	else
	{
		{
			while(trav->next != NULL)
			{
				if(num1 == trav->data)
				{
					flag = 1;
					break;
				}
				else
				{
					prev=trav;
					trav=trav->next;
				}
			}

			prev->next = trav->next;
			free(trav);
		}


		if(flag == 0)
			printf("Data not found, please a valid number.\n");
	}

}


void delete_loc()
{
	int i, loc;
	struct node* prev, *temp;
	temp= head;
	if(head==NULL)
		printf("\nSingly linked list is empty.\n");

	else
	{

		printf("\nEnter the location of the element you want to delete: ");
		scanf("%d", &loc);
		if(loc == 1)
			delete_begin();

		else if(loc== size())
			delete_end();

		else
		{
			for(i=1; i<loc; i++)
			{
				prev= temp;
				temp=temp->next;
			}
			prev->next=temp->next;
		}
		printf("\n%d is deleted.\n", temp->data);
		free(temp);
	}
}
void display()
{
	struct node* trav;
	trav=head;

	if(head==NULL)
		printf("\nSingly linked list is empty.\n");

	else
	{
		printf("\n");
		while(trav != NULL)
		{
			printf("%d\t", trav->data);
			trav=trav->next;
		}
	}
	printf("\n\n");
}



int size()
{
	int count=0;
	struct node* trav;
	trav = head;
	while(trav != NULL)
	{
		trav= trav->next;
		count++;
	}
	printf("\n");
	return(count);
	//printf("Size of singly linked list is: %d.\n", count);
}















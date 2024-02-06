// Doubly linked list


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
void delete_data();

struct node
{
	int data;
	struct node* prev;
	struct node* next;
}*head= NULL;

int main()
{
	int num=0;
	while(num < 11)
	{
		printf("\n===============\n");
		printf("1. Insert at begining.\n");
		printf("2. Insert at end.\n");
		printf("3. Insert at specific location.\n");
		printf("4. Delete from begining.\n");
		printf("5. Delete from end.\n");
		printf("6. Delete from specific location.\n");
		printf("7. Display.\n");
		printf("8. Size.\n");
		printf("9. Delete data.\n");
		printf("10. Exit.\n");

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

			case 8: if(head==NULL)
					printf("\nDoubly linked list is empty.\n");
				else
					printf("\nSize: %d.\n", size());
				break;

			case 9: delete_data();
				display();
				break;

			case 10: printf("Thank You! Please Come Again.\n");
				exit(1);
				break;

			default: printf("Please Enter The Valid Option.\n");
				 break;

		}
	}
}

void insrt_beg()
{
	int num1;
	struct node *temp;
	temp= (struct node*)malloc(sizeof(struct node));
	printf("Enter the element you want to insert: ");
	scanf("%d", &num1);
	temp->data=num1;
	
	if(head==NULL)
	{
		temp->next= NULL;
		temp->prev= NULL;
		head=temp;
	}
	else
	{
		temp->next = head;
		head->prev = temp;
		temp->prev = NULL;
		head = temp;

	}
}

void insrt_end()
{
	int num1;
	struct node* trav, *temp;
	trav=head;
	temp = (struct node*)malloc(sizeof(struct node));
	printf("Enter the element you want to insert at the end: ");
	scanf("%d", &num1);
	temp->data = num1;
	if(head==NULL)
          {
	 	temp->next=NULL;
                temp->prev=NULL;
                head=temp;
          }

	else
	{
		while(trav->next != NULL)
			trav=trav->next;

		temp->next = NULL;
		temp->prev = trav;
		trav->next = temp;
	}
}

void insrt_loc()
{
	int num1, loc, i;
	struct node* temp, *trav, *stor;
	trav=head;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("\nEnter the location to enter element.\n");
	scanf("%d", &loc); 
//	printf("Enter the element you want to insert at the end: ");
//        scanf("%d", &num1);
 //       temp->data=num1;

	if(head == NULL && loc > 1)
		printf("Insertion not possible.\n");

	else if(loc > (size()+1) || loc < 1)
		printf("Insertion not possible.\n");

	else if(loc == (size()+1))
		insrt_end();

	else if(loc == 1)
		insrt_beg();

	else
	{
		printf("\nEnter the element you want to insert at the end: ");
	        scanf("%d", &num1);
		temp->data= num1;
		for(i=1; i< loc-1; i++)
				trav=trav->next;

		temp->next = trav->next;
		temp->prev = trav;
		stor=trav->next;
		stor->prev=temp;
		trav->next= temp;
	}
}

void delete_beg()
{
	struct node* temp;
	temp = head;
	if(head==NULL)
		printf("\nDoubly linked list is empty.\n");

	else if(size() == 1)
	{
		head=NULL;
		free(temp);
	}

	else
	{
		head = head->next;
		head->prev = NULL;
		free(temp);
	}
}

void delete_end()
{
	struct node* temp, *trav;
	temp=head;

	if(head==NULL)
		printf("\nDoubly linked list is empty.\n");

	else if(size()==1)
	{
		head=NULL;
		free(temp);
	}

	else
	{
		while(temp->next != NULL)
		{
			trav=temp;
			temp=temp->next;
		}
		trav->next= NULL;
		free(temp);
	}


}

void delete_loc()
{
	int loc, i;
	struct node* temp, *trav, *stor;
	temp=head;
	printf("Enter the location which you want to delete.\n");
	scanf("%d", &loc);

	if(head==NULL)
		printf("Doubly linked list is empty.\n");

	else if(loc > size() || loc < 1)
		printf("Please enter location in range i.e. %d.\n", size());
	else if(loc == size())
		delete_end();

	else if(loc == 1)
		delete_beg();

	else
	{
		for(i=1; i < loc; i++)
		{
			trav=temp;
			temp= temp->next;
		}

		trav->next=temp->next;
		stor=temp->next;
		stor->prev= trav;
		free(temp);
	}
}

void display()
{
	struct node* trav;
	trav=head;
	if(head==NULL)
		printf("Doubly linked list is empty.\n");
	else
	{
		printf("\n");
		while(trav != NULL)
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
	trav=head;
	while(trav != NULL)
	{
		count++;
		trav=trav->next;
	}
	return count;
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

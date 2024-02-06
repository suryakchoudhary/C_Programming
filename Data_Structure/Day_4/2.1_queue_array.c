//Write a C Program to implement queue using Arrays.

#include<stdio.h>
#define N 5
void enqueue();
void dequeue();
void peek();
void display();
int queue[N];
int front=-1;
int rear =-1;
int main()
{
	int num;
	while(num!=5)
	{
		printf("\n\n1. Enqueue.\n");
		printf("2. Dequeue.\n");
		printf("3. peek.\n");
		printf("4. Display.\n");
		printf("5. Exit.\n");
		scanf("%d", &num);

		switch(num)
		{
			case 1: enqueue();
				break;

			case 2: dequeue();
				break;

			case 3: peek();
				break;

			case 4: display();
				break;

			default: printf("Enter valid number.\n");

		}
	}
}

void enqueue()
{
	int num1;
	if(rear== N-1)
		printf("Overflow.\n");

	else if(front == -1 && rear == -1)
	{
		printf("Enter the value for enqueue: ");
		scanf("%d", &num1);
		rear =0;
		front =0;
		queue[rear] = num1;
		printf("%d is inserted in the empty queue.\n", num1);
	}
	else
	{
		rear++;
		printf("Enter the value for enqueue: ");
                scanf("%d", &num1);
		queue[rear]= num1;
		printf("%d is inserted in the queue.\n", num1);
	}
	printf("\n\n");
}

void dequeue()
{
	if(front ==-1 && rear ==-1)
		printf("Underflow.\n");

	else if(front == rear)
	{
		printf("%d is deleted.\n", queue[rear]);
		front = rear = -1;
	}

	else
	{
		printf("%d is deleted.\n", queue[front]);
		front++;
	}
	printf("\n\n");
}

void peek()
{
	if(front ==-1 && rear == -1)
		printf("Queue is empty.\n");

	else
		printf("%d is the front element.\n", queue[front]);
	printf("\n\n");
}

void display()
{
	int i;
	if(front ==-1 && rear == -1)
                printf("Queue is empty.\n");
	
	else 
	{
		for(i=front; i<=rear; i++)
			printf("%d\t",queue[i]);
	}
	printf("\n");
}	












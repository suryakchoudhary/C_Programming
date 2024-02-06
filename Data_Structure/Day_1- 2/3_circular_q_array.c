//Write a C Program to implement circular queue using Arrays.

#include<stdio.h>
#define N 5
void enqueue();
void dequeue();
void peek();
void display();
int circular[N];
int front =-1;
int rear = -1;
int main()
{
	int num;
	while(num !=5)
	{
		printf("\n\n1. Enqueue.\n");
		printf("2. Dequeue.\n");
		printf("3. peek.\n");
		printf("4. Display.\n");
		printf("5. Exit.\n");
		printf("\n");
		scanf("%d", &num);
		printf("\n");


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

			default: printf("Enter correct option.\n");
				 break;

		}
	}
}

void enqueue()
{
	int num1;
	if((rear+1)%N==front)
		printf("Overflow.\n");

	else if(front ==-1 && rear == -1)
	{
		printf("Enter the element: ");
		scanf("%d", &num1);
		front =0;
		rear =0;
		circular[rear] = num1;
		printf("%d is inserted.\n", num1);
	}

	else
	{
		printf("Enter the element: ");
                scanf("%d", &num1);
		rear= (rear+1)%N;
		circular[rear]= num1;
		printf("%d is inserted.\n", num1);
	}
}

void dequeue()
{
	if(front==-1 && rear==-1)
		printf("Circular queue is empty.\n");

	else if(front==rear)
	{
		printf("%d is deleted.\n", circular[front]);
		front=-1;
		rear=-1;
	}
	else
	{
		printf("%d is deleted.\n", circular[front]);
		front = (front+1)%N;
	}
}

void peek()
{
	if(front==-1 && rear==-1)
		printf("Circular queue is empty.\n");

	else
		printf("%d is the front element.\n", circular[front]);
}

void display()
{
	int i;                                               //=front;
	if(front==-1 && rear==-1)
		printf("Circular queue is empty.\n");

	else
	{
		for(i=front; i!=rear; i=(i+1)%N)
	                                                     //	while(i!=rear)
		{
			printf("%d\t", circular[i]);
	                                                     //		i=(i+1)%N;
		}
		printf("%d", circular[rear]);
	}
}







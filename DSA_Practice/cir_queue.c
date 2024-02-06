#include<stdio.h>
#define N 5
void enqueue();
void dequeue();
void peek();
void display();
int front = -1;
int rear = -1;
int queue[N];

int main()
{
	int num;
	while(num != 5)
	{
		printf("\n1. ENQUEUE\n");
		printf("2. DEQUEUE\n");
		printf("3. PEEK\n");
		printf("4. DISPLAY\n");
		printf("5. EXIT\n");
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

			default: printf("Enter valid option\n");
				 break;
		}
	}
	return 0;
}

void enqueue()
{
	int ele;
	if((rear + 1)%N == front)
		printf("Queue is full\n");
	else if(rear == -1 && front == -1)
	{
		printf("Enter the element: ");
		scanf("%d", &ele);
		rear = 0;
		front = 0;
		queue[rear] = ele;
		printf("%d is entered into queue\n", ele);
	}
	else
	{
		printf("Enter the element: ");
		scanf("%d", &ele);
		rear = (rear+1)%N;
		queue[rear] = ele;
		printf("%d is entered into queue\n", ele);
	}
}

void dequeue()
{
	int del;
	if(rear == -1 && front == -1)
		printf("queue is empty\n");
	else if(rear == front)
	{
		del = queue[front];
		rear = -1;
		front = -1;
		printf("%d is deleted\n", del);
	}
	else
	{
		del = queue[front];
		front = (front+1)%N;
		printf("%d is deleted\n", del);
	}
}

void peek()
{
	if(rear == -1 && front == -1)
		printf("queue is empty\n");
	else
		printf("Top element is %d\n", queue[front]);
}

void display()
{
	int i;
	if(rear == -1 && front == -1)
		printf("queue is empty\n");
	else
	{
		for(i=front; i!=rear; i=(i+1)%N)
			printf("%d\t", queue[i]);
		printf("%d", queue[rear]);
	}
}
	




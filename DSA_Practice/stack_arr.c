#include<stdio.h>
#define N 5
void push();
void pop();
void peek();
void display();
int stack[N];
int top = -1;

int main()
{
	int num;
//	while(num != 5)
	do
	{
		printf("\n1. PUSH\n");
		printf("2. POP\n");
		printf("3. PEEK\n");
		printf("4. DISPLAY\n");
		printf("5. EXIT\n");
		scanf("%d", &num);
		printf("\n");

		switch(num)
		{
			case 1: push();
				break;

			case 2: pop();
				break;

			case 3: peek();
				break;

			case 4: display();
				break;

			default: printf("Enter valid option\n");
				 break;
		}
	}while(num !=5);
	return 0;
}

void push()
{
	int ele;
	if(top == N-1)
		printf("Stack is full\n");
	else
	{
		printf("Enter element: ");
		scanf("%d", &ele);
		top++;
		stack[top] = ele;
		printf("%d is inserted into stack\n", ele);
	}
}

void pop()
{
	int del;
	if(top == -1)
		printf("Stack is empty\n");
	else
	{
		del = stack[top];
		top--;
		printf("%d is deleted from stack\n", del);
	}
}

void peek()
{
	if(top == -1)
		printf("Stack is empty\n");
	else
		printf("Top element is %d\n", stack[top]);
}

void display()
{
	int i;
	if(top == -1)
		printf("Stack is empty\n");
	else
	{
		for(i=0; i<=top; i++)
			printf("%d ", stack[i]);
	}
}

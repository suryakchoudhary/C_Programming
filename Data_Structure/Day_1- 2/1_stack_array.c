//Write a C Program to implement stack using Arrays.

#include<stdio.h>
#define N 5
void push();
void pop();
void peek();
void display();
int stack[N];
int top= -1;
int main()
{

	int num;
	while(num!= 5)
	{
		printf("\n1. Push\n");
		printf("2. Pop\n");
		printf("3. Top\n");
		printf("4. Display\n");
		printf("5. Exit\n");
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

			default: printf("Enter the valid number.\n");
				 break;

		}
	}
	return 0;
}

void push()
{
	int num1;
	if(top == N-1)
		printf("The stack is overflow.\n");
	else
	{
		printf("Enter the number you want to insert: ");
        	scanf("%d", &num1);
		top++;
		stack[top]=num1;
		printf("%d is inserted in the stack.\n", num1);
	}
}

void pop()
{
	int item;
	if(top==-1)
		printf("The stack is underflow.\n");
	else
	{
		item= stack[top];
		top--;
		printf("%d is poped from the stack.\n", item);
	}
}

void peek()
{
	if(top==-1)
		printf("Stack is empty.\n");
	else
		printf("The top most element is %d\n", stack[top]);
}

void display()
{
	int i;
	if(top==-1)
		printf("Stack is empty.\n");
	else
	{
		for(i=0; i<=top; i++)
			printf("%d\t",stack[i]);
	}
}





	




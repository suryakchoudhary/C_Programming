#include<stdio.h>
#include<stdlib.h>
#define N 5
void push();
void pop();
void peek();
void display();
int top=-1;
int stack[N];
int main()
{
	int num;


	while(num!=5)
	{
		printf("\n1. push.\n");
		printf("2. pop.\n");
		printf("3. top.\n");
		printf("4. display.\n");
		printf("5. exit.\n");
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

			case 5: exit(0);
				break;

			default: printf("Enter a valid menu option.\n");
				 break;
		}
	}
	return 0;
}

void push()
{
	int num1;
	if(top == N-1) // when it was "if(stack[top]==N-1)" , it was never showing voerflow
		printf("Stack us overflow.\n");
	else
	{
		printf("Enter the number you want to enter: ");
		scanf("%d", &num1);
		top++;
		stack[top]= num1;
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
		item=stack[top];
		top--;
		printf("%d is deleted from the stack.\n", item);
	}
}


void peek()
{
	if(top==-1)
		printf("The stack is empty.\n");
	else
	{
		printf("The top element is %d\n", stack[top]);
	}
}

void display()
{
	int i;
	if(top==-1)
		printf("The stack is empty.\n");
	else
	{
		for(i=0; i<=top; i++)
			printf("%d\t", stack[i]);
	}
}


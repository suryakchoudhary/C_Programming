#include<stdio.h>
#include<stdlib.h>
#include<semaphore.h>
int producer();
int consumer();
int full = 0, empty=5, sema = 1, n, choice;
//	printf("Enter the size of buffer: ");
//	scanf("%d", &n);
//	empty = n;
	int arr[5];
int main()
{
/*	int full = 0, empty=0, sema = 1, n, choice;

	printf("Enter the size of buffer: ");
	scanf("%d", &n);
	empty = n;
	int arr[n];*/

	printf("1. Produce\n");
	printf("2. Consume\n");
	printf("3. Exit\n");
	scanf("%d", &choice);

	while(choice != 3)
	{
		switch(choice)
		{
			case 1: if(sema == 1 && empty == 0)
					printf("Buffer is full\n");

				else
					producer();
				break;

			case 2: if(sema == 1 && full != 0)
					consumer();
				else
				{
					printf("Buffer is empty\n");
					break;
				}
				break;

			case 3: exit(0);
				break;

			default: printf("Enter the correct option\n");
				 break;
		}
	}
}

int producer()
{
	wait(sema);
	{
		int i;
	//	*empty=(*empty-1)%*n;
	//	*full=(*full+1)%*n;
		arr[i]=arr[i+1];
	//	for(i=0; i<5; i++)
		printf("Element in buffer %d\n", i);
//		printf("Empty spaces %d\n", *empty);
	}
	signal(sema);
}

int consumer()
{
	wait(sema);
	{
		int i;
		arr[i]=arr[i-1];
	//	*empty=(*empty+1)%*n;
	//	*full=(*full - 1)%*n;
		for(i=0; i<5; i++)
			printf("Element in buffer %d\n", arr[i]);
	//	printf("Empty spaces %d\n", *empty);
	}
	signal(sema);
}


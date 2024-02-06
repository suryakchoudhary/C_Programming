//Write c programs to demonstrate various storages classes. 

X=100;
#include<stdio.h>
void incr(int count1);
void decr();
void reg(int count3);

int main()
{
	auto int count1=10;
	register int count3 = 15;
	int extern X;
	printf(".......................AUTO (INTREMENTING)................\n");
	printf("Initial count1 in main function: %d\n", count1);
	incr(count1);
	incr(count1);
	printf("Final count1 in main function: %d\n", count1);

	printf("\n\n");

	printf(".....................STATIC (DECREMENTING)................\n");
	decr();
        decr();

	printf("\n\n");
	printf("...................REGISTER (INCREMENTING)................\n");
	printf("Initial count3 in main function: %d\n", count3);
	reg(count3);
	reg(count3);
	printf("Final count3 in main function: %d\n", count3);

	printf("\n\n");

        printf("...................EXTERN................\n");
	printf("The value of X is: %d.\n", X);



	return 0;
}

void incr(int count1)
{
	count1++;
	printf("Count value in function: %d\n", count1);
}

void decr()
{
	static int count2 = 20;
	count2--;
	printf("Count value in function: %d\n", count2);
}

void reg(int count3)
{
	count3++;
	printf("Count3 value in function: %d\n",count3);
}

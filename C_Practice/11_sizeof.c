#include<stdio.h>
struct stud {
	int roll;
	char name;
}Detail;
int main()
{
	printf("side is: %d\n", sizeof(Detail)); //size is multiple of 4 due to structure padding
	return 0;
}

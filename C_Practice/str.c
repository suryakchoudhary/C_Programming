#include <stdio.h>
int main ()
{
	char name[6] = {'A', 'C', '\0', 'T', 'S', '\0'}, my[10], * mnptr="su"; 
	printf("message: %s\n", name ); 
	printf("size %d\n", sizeof(name));
	scanf("%s", my);
	printf("name-- %s\n", my);
	printf("size %d\n", sizeof(my));
	printf("name-- %s\n", mnptr);
	printf("size %d\n", sizeof(mnptr));

	return 0;
}


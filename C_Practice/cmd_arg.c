#include<stdio.h>
int main(int argc, int * rgv[])
{
	int i;
	printf("Prog name = %s\n", rgv[0]);
	printf("Count     = %d\n", argc);

	for(i=1; i<argc; i++)
	{
		printf("Arg count: %d\tArg Value = %s\n", i, rgv[i]);
	}
	printf("\n");

	for(i=1; i<argc; i++)
	{
		if((atoi(rgv[1])) < (atoi(rgv[i])))
			rgv[1] = rgv[i];
	}
	printf("Greatest = %d\n\n", atoi(rgv[1]));

	for(i=1; i<argc; i++)
	{
		if((atoi(rgv[1])) > (atoi(rgv[i])))
			rgv[1] = rgv[i];
	}
	printf("Smallest = %d\n", atoi(rgv[1]));
}



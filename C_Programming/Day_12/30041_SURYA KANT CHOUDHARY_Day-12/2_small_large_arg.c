//Write a program to find the smallest and greatest integers among all integers, which are provided through the command line.


#include<stdio.h>
int main(int argc, char *argv[])
{
	int i;
	printf("Program name: %s\n",argv[0]);
	printf("Argument count: %d\n", argc);

	for(i=1; i<argc; i++)
	{
		printf("Argument count: %d and Argument value: %s\n", i, argv[i]);
	}
	printf("\n\n");

	//For greatest integer
	for(i=1; i<argc; i++)
	{
		if((atoi(argv[1])) < (atoi(argv[i])))
			argv[1] = argv[i];
	}
	printf("Greatest integer: %d\n\n", (atoi(argv[1])));
	
	//For smallest integer
	for(i=1; i<argc; i++)
        {
                if((atoi(argv[1])) > (atoi(argv[i])))
                        argv[1] = argv[i];
	}
        printf("Smallest integer: %d\n", (atoi(argv[1])));
	return 0;
}




//Write a program to find the smallest and greatest integers among all integers, which are provided through the command line.



#include<stdio.h>
//#include<stdlib.h>
int main(int argc, int *argv[])
{
	int i;
	printf("Program name: %s\n", argv[0]);
	printf("Argument count: %d\n", argc);
	for(i=1; i<argc; i++)
	{
		printf("argument %d  supplied is %s\n", i, argv[i]);
	}


	for(i=1; i<argc; i++)
		if((atoi(argv[1])) < (atoi(argv[i])))
			argv[1] = argv[i];
	printf("\nGreatest integer is: %d\n\n",(atoi(argv[1])));



	for(i=1; i<argc; i++)
                if((atoi(argv[1])) > (atoi(argv[i])))
                        argv[1] = argv[i];
	printf("Smallest integer is: %d\n",atoi(argv[1]));


	return 0;
}


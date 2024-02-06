//sizeof


#include<stdio.h>
int main()
{
        printf("size of long double: %ld\n", sizeof(long double));        //16
        printf("size: %ld\n", sizeof(long));                    //8
        printf("size long long : %ld\n", sizeof(long long));                    //8
        printf("size of double: %ld\n", sizeof(double));        //8
	printf("Size of int = %ld\n",sizeof(int));              //4
	printf("Size of long int = %ld\n",sizeof(long int));              //8
	printf("Size of unsigned long int = %ld\n",sizeof(unsigned long int));              //8
	printf("Size of short int = %ld\n",sizeof(short int));              //2
	printf("Size of float = %ld\n",sizeof(float));          //4
	printf("Size of char = %ld\n",sizeof(char));            //1
        return 0;
}


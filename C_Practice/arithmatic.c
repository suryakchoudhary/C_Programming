//Arithmatic


#include<stdio.h>
#include<stdlib.h>
int main()
{
	int A,B;
	char ch;
	printf("Enter 1st_operand operator 2nd_operand for calculation: \n");
	scanf("%d %c%d", &A,&ch, &B);
//	fflush(stdin);  //it flushes or cleans the input buffer as we entered enter which is also a character. So enter needs to be cleaned from the input buffer and it is not wirking in this

//	printf("Enter operator: ");

//        scanf("%c", &ch);
//	printf("Enter 2nd number: ");
  //      scanf("%d", &B);

	if(ch=='+')
		printf("Sum = %d\n", A+B);
	else if(ch=='-')
                printf("Difference = %d\n", A-B);
	else if(ch=='*')
                printf("Multiplication = %d\n", A*B);
	else if(ch=='/')
                printf("Div = %d\n", A/B);
	else if(ch=='%')
                printf("Rem = %d\n", A%B);
	return 0;
}


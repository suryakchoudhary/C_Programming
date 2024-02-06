/*Write a program to create a simple calculator to perform Addition, Subtraction,   Multiplication and Division using switch statement.
Take the required operation as input from the user.*/

#include<stdio.h>
int main()
{
	float A, B;
	char operatorr;
	printf("Enter the operand_1 operator and operand_2: ");
	scanf("%f%c%f",&A,&operatorr,&B);

	switch(operatorr)
	{
		case '+':
			printf("%.2f%c%.2f = %.2f\n",A, operatorr, B, A + B);
			break;

		case '-':
                        printf("%.2f%c%.2f = %.2f\n",A, operatorr, B, A - B);
                        break;

		case '*':
                        printf("%.2f%c%.2f = %.2f\n",A, operatorr, B, A * B);
                        break;

		case '/':
			{	if(B==0)
					printf("Second operand is zero\n");
				else		
                     	   		printf("%.2f%c%.2f = %.2f\n",A, operatorr, B, A / B);
                        		break;
			}


		default:
			printf("Not a number\n");
			break;
	}
	return 0;
}


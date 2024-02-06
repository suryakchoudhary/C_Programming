/*Write a program to find whether given number is palindrome or not.*/ 

#include<stdio.h>
int main()
{
	int num, i=1, cal =0, rem, num1;
	
	printf("Enter a number to check palindrome: ");
	scanf("%d", &num);
	num1= num;

	while(num>=i)
	{
		rem= num % 10;
		cal = cal * 10 + rem;
		num= num / 10;
	}
	if(cal == num1) 
		printf("%d is a pamlindrome\n", num1);
	else
		printf("%d is not a palindrome\n", num1);
	return 0;
}


/*Write a C program to perform the following operations on two strings without using intrinsic functions.
	•Concatenate two strings
	•Find the length of each string
	•Compare two strings
	•Copy string
	•Reverse the string
*/

#include<stdio.h>
int main()
{
	char ch1[50], ch2[50], ch3[50], ch4[50], ch5[50];
	int len1=1, len2=1, l=1, i, j, k, comp;
	printf("Enter the 1st string for concatenation: ");
	gets(ch1);
	printf("Enter the 2st string for concatenation: ");
        gets(ch2);
	printf("\n");
	
	//Concatenate
	for(i=0;ch1[i] !='\0'; i++)
		ch3[i] = ch1[i];
	for(j=0; ch2[j] != '\0'; j++, i++)
	{
		ch3[i] = ch2[j];
	}
	ch3[i]='\0';
	printf("After concatenetion: %s\n", ch3);
	printf("\n");

	//string lengths
	for(i=1;ch1[i] != '\0'; i++)
		len1++;
	for(j=1;ch2[j] != '\0'; j++)
                len2++;
	printf("The lenth of %s is: %d\n", ch1, len1);
	printf("The lenth of %s is: %d\n", ch2, len2);
	printf("\n");

	//Compare
	for(i=0; ch1[i] != '\0'; i++)
	{
		if(ch1[i] != ch2[i])
		{
			comp=1;
			break;
		}
	}
	if(comp==1)
		printf("Both the entered ch1[] = %s and ch2[] = %s string arrays are different.\n", ch1, ch2);
	else
		printf("Both the strings are same i.e. %s == %s.\n", ch1, ch2);
	printf("\n");

	//Copy
	printf("Copying the array elements of ch3[] = %s to ch4[i].\n",ch3); 
	for(i=0; ch3[i] != '\0'; i++)
	{
		ch4[i] = ch3[i];
	}
	ch4[i] = '\0';
	printf("The array ch4[i] becomes: ch4[] = %s. \n", ch4);
	printf("\n");

	//Reverse
	printf("Printing the reverse of the ch4[] = %s array.\n", ch4);
	printf("After reversing ch4[] becomes: ");
	for(j=1; ch4[j] != '\0'; j++)
		l++;
	for(j=l, k=0; j>=0; j--, k++)
	{
		ch5[k] = ch4[j];
		printf("%c",ch5[k]);
	}
	ch4[k]='\0';
	printf("\n");
	return 0;
}





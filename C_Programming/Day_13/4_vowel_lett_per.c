/*Write a program to count the vowels and letters from text file. Read text a character at a time until you encounter end-of-data. Then print out the number of occurrences of each of the vowels a, e, i, o and u in the text, the total number of letters, and each of the vowels as an integer percentage of the letter total. 

  Suggested output format is: 
  Numbers of characters: 
  a 3 ; e 2 ; i 0 ; o 1 ; u 0 ; rest 17 
  Percentages of total: 
  a 13%; e 8%; i 0%; o 4%; u 0%; rest 73% 
  */

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int count_a=0, count_e=0, count_i=0, count_o=0, count_u=0, count_digit=0, count_rst=0, count_ttl=0;
	FILE *fptr;
	char ch;
	fptr=fopen("vowel.txt", "r");
	if(fptr == NULL)
	{
		printf("Error!\n");
		exit(1);
	}
	while(1)
	{
		count_ttl++;
		ch= fgetc(fptr);
		if(ch == EOF)
			break;


			if(ch=='a')
				count_a++;
			else if(ch=='e')
				count_e++;
			else if(ch == 'i')
				count_i++;
			else if(ch=='o')
				count_o++;
			else if(ch=='u')
				count_u++;
			else
				count_rst++;	
	}
	printf("Numbers of characters: \n");
	printf("a %d%ce %d%ci %d%co %d%cu %d%crest %d%c\n",count_a,59, count_e,59, count_i,59, count_o,59, count_u,59, count_rst,59);
 	
	printf("\n");	
	printf("Percentages of total: \n");
	printf("a %d%c%ce %d%c%ci %d%c%co %d%c%cu %d%c%crest %d%c%c\n",((count_a*100)/(count_ttl)),37,59, ((count_e*100)/(count_ttl)),37,59, ((count_i*100)/(count_ttl)),37,59, ((count_o*100)/(count_ttl)),37,59, ((count_u*100)/(count_ttl)),37,59, ((count_rst*100)/(count_ttl)),37,59);

	fclose(fptr);
	return 0;
}


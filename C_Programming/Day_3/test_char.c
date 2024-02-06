/*Write a program to test given character.*/

#include<stdio.h>
int main ()
{
  char ch; 
  printf ("Enter any number or alphabet: ");
  scanf ("%c", &ch);

  if (ch >= 65 && 90 >= ch)
    printf ("%c is upper case letter\n", ch);

  else if (ch >= 97 && 122 >= ch)
    printf ("%c is lower case letter\n", ch);

  else if (ch >= 48 && 57  >= ch)
    printf ("%c is a digit\n", ch);

  else if (ch == 32)
    printf ("' ' is white space\n");

  else if (ch == 9)
    printf ("\\t is tab\n");

  else if (ch == 10)
    printf ("\\n is new line\n");

  else
    printf("Invalid input\n");


  return 0;
}

/*Determine the value of each of the following expressions.*/

#include<stdio.h>
int
main ()
{
  int i = 8, j = 5;
  float x = 0.005, y = 0.01, exp1, exp2, exp3, exp4, exp5;
  char c = 'c', d = 'd';

  exp1 = (3 * i * j) % (2 * d);
  printf ("exp1 = %.2f\n", exp1);

  exp2 = (i * j) % (c + 2 * d) / (x * y);
  printf ("exp2 = %.2f\n", exp2);

  exp3 = 5 * (i + j) > 'c';
  printf ("exp3 = %.2f\n", exp3);

  exp4 = 2 * x + (y == 0);
  printf ("exp4 = %.2f\n", exp4);

  exp5 = (x > y) && (i > 0) || (j < 5);
  printf ("exp5 = %.2f\n", exp5);

  return 0;

}

#include <stdio.h>

int main ()
{
  int a, b, c;
  printf ("Enter first number: ");
  scanf ("%i", &a);
  printf ("Enter second number: ");
  scanf ("%i", &b);
  printf ("Enter third number: ");
  scanf ("%i", &c);
  if (a > b && a > c)
    {
      printf ("%i is greatest", a);
    }
  else if (b > c && b > c)
    {
      printf ("%i is greatest", b);
    }
  else
    {
      printf ("%i is greatest", c);
    }
  return 0;
}

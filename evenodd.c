#include <stdio.h>

int main ()
{
  int a;
  printf ("Enter number: ");
  scanf ("%i", &a);
  if (a%2 == 0)
  {
      printf("%i is even!", a);
  }
  else
  {
     printf("%i is odd!", a);
  }
  
  return 0;
}

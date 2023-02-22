#include <stdio.h>

int main (){
  float a, b, c, d, e, max, per;
  printf ("Enter maximum marks: ");
  scanf ("%f", &max);
  printf ("Enter marks of 5 subject: ");
  scanf ("%f %f %f %f %f", &a, &b, &c, &d, &e);
  per = ((a + b + c + d + e) / max) * 100;
  printf ("Percentage is:");
  printf ("%f", per);
  printf ("\n");
  if (per>=90){
        printf("Grade: A");
  }
  else if (per < 90 && per >= 80){
        printf("Grade: B");
  }
  else if (per < 80 && per >= 70){
      printf("Grade: B");
  }
  else if (per < 70 && per >= 60){
      printf("Grade: C");
  }
  else{
      printf("Grade: D");
  }
  return 0;
}

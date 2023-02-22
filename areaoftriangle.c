//program to calculate area of triangle.
#include <stdio.h>
#include <math.h>

int main()
{float a, b, c, s, area;
    printf("Enter first side: ");
    scanf("%f", &a);
    printf("Enter second side: ");
    scanf("%f", &b);
    printf("Enter third side: ");
    scanf("%f", &c);
    s = (a+b+c)/2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area of triangle is %f sq. units", area);

    return 0;
}

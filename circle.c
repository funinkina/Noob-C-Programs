//program to calculate area and circumference of a circle.
#include <stdio.h>

int main()
{float r, area, circum, pi=3.14;
    printf("Enter radius of circle: ");
    scanf("%f", &r);
    area = pi*r*r;
    circum = 2*pi*r;
    printf("The area is %f sq. units", area);
    printf("\n");
    printf("The circumference is %f units", circum);

    return 0;
}

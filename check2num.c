#include <stdio.h>

int main()
{
    int a,b;
    printf("Enter first number: ");
    scanf("%i", &a);
    printf("Enter second number: ");
    scanf("%i", &b);
    if(a==b)
    {
        printf("Numbers are equal!");
    }
    else
    {
        printf("Numbers are not equal!");
    }
    return 0;
}

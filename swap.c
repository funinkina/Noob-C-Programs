//program to convert celsius into farenheit.
#include <stdio.h>

int main()
{int a, b, c;
    printf("Enter value for first variable 'a': ");
    scanf("%i", &a);
    printf("Enter value for first variable 'b': ");
    scanf("%i", &b);
    printf("Swaping variables...\n");
    c = a;
    a = b;
    b = c;
    printf("Value of 'a' is %i \n", a);
    printf("Value of 'b' is %i ", b);

    return 0;
}

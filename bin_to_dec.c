//binary to decimal
#include <stdio.h>
#include <math.h>

int main(){
    int b, d=0, c, len, rem=0, i;
    printf("Enter a binary value: ");
    scanf("%d", &b);
    len = printf("%d", b);
    printf("\n");
    for(i=0; i<=len; i++){
        rem = b%10;
        d += rem * pow(2, i);
        b /=10;
    }
    printf("Decimal is %d", d);
    return 0;
}

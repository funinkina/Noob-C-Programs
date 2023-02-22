//decimal to binary
#include <stdio.h>
#include <math.h>

int main(){
    int a, b, i=0, t=0;
    printf("Enter the decimal number: ");
    scanf("%d", &a);
    while(a!=0){
        b = a%2;
        a = a/2;
        t = t + b*pow(10,i);
        i++;
    }
    printf("Binary is %d", t);
    return 0;
}

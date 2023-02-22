//program to print sum of digits
#include<stdio.h>

int main(){
    int n, sum=0, i, x;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(i=0; i<=n; ++i){
        x = n%10;
        sum += x;
        n /= 10;
    }
    printf("sum of digits is %d", sum);
    printf("\nChinmay Nanda");
}
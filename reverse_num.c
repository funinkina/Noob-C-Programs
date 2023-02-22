//program to reverse a number
#include<stdio.h>

int main(){
    int rev, r, n;
    printf("Enter a number: ");
    scanf("%d", &n);
    while(n>0){
        rev = (rev * 10) + (n %10);
        n = n /10;
    }
    printf("%d", rev);
}
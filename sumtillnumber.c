#include <stdio.h>

int main(){
    int num, sum=0;
    printf("Enter a number: ");
    scanf("%d", &num);
    int n = num;
    while(num>0){
        sum += num;
        num -= 1;
    }
    printf("The sum of numbers till %d is %d",n, sum);
    return 0;
}
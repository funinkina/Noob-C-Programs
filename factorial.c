#include <stdio.h>

int main(){
    int s = 1, num;
    printf("Enter a number: ");
    scanf("%d", &num);
    while(num>=1){
        s *= num;
        num -= 1;
    }

}
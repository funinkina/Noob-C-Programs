//program to print fibonacci sequence upto entered number
#include<stdio.h>

int main(){
    int n, f=0, s=1, x, t;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("%d\n", f);
    for(x=1; x<=n; ++x){
        t = f+s;
        printf("%d\n", t);
        f = s;
        s = t;

    }
}
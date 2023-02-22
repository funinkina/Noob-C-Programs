#include <stdio.h>
#include <math.h>

int main(){
    int i, n, m, c=0, s=0, d;
    for(i=1; i<=1000;i++){
        n=i, m=i, c=0, s=0;
        while(n!=0){
            c++;
            n/=10;
        }
        while(m!=0){
            d = m%10;
            s = s + pow(d,c);
            m/=10;
        }
        if(s==i){
            printf("%d is a armstrong number!\n", i);
        }
    }
    return 0;
}

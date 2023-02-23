#include <stdio.h>
 
 void main(){
    int a[5], i, sum=0;
    for(i=0; i<5; i++){
        printf("enter %dth value: ", i+1);
        scanf("%d", &a[i]);
        sum += a[i];
    }
    printf("Sum of all the elements of array is %d", sum);
 }

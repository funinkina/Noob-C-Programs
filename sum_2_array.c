#include<stdio.h>

void main(){
    int a[5], b[5], c[5], i;
    for(i=0; i<5; i++){
        printf("Enter %dth value of array A: ", i+1);
        scanf("%d", &a[i]);
    }
    printf("\n");
    for(i=0; i<5; i++){
        printf("Enter %dth value of array B: ", i+1);
        scanf("%d", &b[i]);
    }
    for(i=0; i<5; i++){
        c[i] = a[i]+b[i];
    }
    printf("Sum of 2 array in 3rd array is:\n[");
    for(i=0; i<5; i++){
        printf("%d ", c[i]);
    }
    printf("]");
}

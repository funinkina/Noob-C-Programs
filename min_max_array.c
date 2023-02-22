#include<stdio.h>

void main(){
    int a[5], min, max, i, c=0;
    for(i=0; i<5; i++){
        printf("Enter %dth value: ", i+1);
        scanf("%d", &a[i]);
    }
    max = a[0];
    min = a[0];
    for(i=0; i<5; i++){
        if(max<a[i]){
            max = a[i];
        }
    }
    for(i=0; i<5; i++){
        if(min>a[i]){
            min = a[i];
        }
    }
    printf("\n");
    printf("Highest value in array is %d\n", max);
    printf("Lowest value in array is %d", min);
}

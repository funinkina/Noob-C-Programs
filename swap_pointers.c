#include <stdio.h>

void swap(int *a, int *b);

void main(){
    int x, y;
    printf("Enter value for 'X': ");
    scanf("%d", &x);
    printf("Enter valur for 'Y': ");
    scanf("%d", &y);
    printf("\nValue of X = %d\nValue of Y = %d\n", x,y);
    swap(&x, &y);
    printf("\nAfter swapping\nX = %d\nY = %d", x, y);
}

void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

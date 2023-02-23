#include <stdio.h>

void main(){
    int len, i, j, r=0, x[10][10];
    printf("Enter the number of rows: ");
    scanf("%d", &len);
    printf("Enter values of matrix:\n");
    for(i=0; i<len; i++){
        for(j=0; j<len; j++){
            printf("Enter value a[%d][%d]: ", i+1, j+1);
            scanf("%d", &x[i][j]);
        }
    }
    printf("The matrix is:\n");
    for(i=0; i<len; i++){
        printf("[");
        for(j=0; j<len; j++){
            printf("%d ", x[i][j]);
        }
        printf("]\n");
    }
    for(i=0; i<len; i++){
        r+= x[i][i];
    }
    printf("Sum of diagonal elements is %d", r);
}

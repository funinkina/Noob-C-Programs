#include <stdio.h>

void main(){
    int a, b, i, j, k, x[10][10], y[10][10], rmul[10][10], radd[10][10];
    printf("Enter the number of rows: ");
    scanf("%d", &a);
    printf("Enter values of first matrix:\n");
    for(i=0; i<a; i++){
        for(j=0; j<a;j++){
            printf("Enter value a[%d][%d]: ", i+1, j+1);
            scanf("%d", &x[i][j]);
        }
    }
    printf("\n");
    printf("Enter values of second matrix:\n");
    for(i=0; i<a; i++){
        for(j=0; j<a;j++){
            printf("Enter value b[%d][%d]: ", i+1, j+1);
            scanf("%d", &y[i][j]);
        }
    }
    for(i=0; i<a; i++){
        for(j=0; j<a; j++){
            rmul[i][j]=0;
            for(k=0; k<a; k++){
                rmul[i][j] += x[i][k] * y[k][j];
            }
        }
    }
    printf("\n");
    printf("The multipilied matrix is:\n");
    for(i=0; i<a; i++){
        printf("[");
        for(j=0; j<a; j++){
            printf("%d ", rmul[i][j]);
        }
        printf("]\n");
    }
}

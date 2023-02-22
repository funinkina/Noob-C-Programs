#include <stdio.h>

void main(){
    int a[50], s, len, i, c=0;
    printf("Enter length of array: ");
    scanf("%d", &len);
    for(i=0; i<len; i++){
        printf("Enter %dth value: ", i+1);
        scanf("%d", &a[i]);
    }
    printf("The array is [");
    for(i=0; i<len; i++){
        printf("%d, ", a[i]);
    }
    printf("]\n\n");
    printf("Enter the value for searching: ");
    scanf("%d", &s);
    for(i=0; i<len; i++){
        if(a[i]==s){
            printf("The index of '%d' is %d!", s, i);
            ++c;
        }
    }
    if(c==0){
        printf("'%d' does not exist in this array", s);
    }
    printf("\nChinmay Nanda");
}

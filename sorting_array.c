#include <stdio.h>

void main(){
    int a[50], len, i, j, temp;    
    printf("Please Enter the Number of Elements: ");
    scanf("%d", &len);    
    for(i=0; i<len; i++){
        printf("Enter %dth value: ", i+1);
        scanf("%d", &a[i]);
    }
    printf("The array is {");
    for(i=0; i<len; i++){
        printf("%d ", a[i]);
    }
    printf("}\n\n");
    printf("Sorting array...\n");
    for(i = 0; i < len - 1; i++){       
        for(j = 0; j < len - i - 1; j++){          
            if(a[j] > a[j + 1]){               
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
printf("The array is {");
    for(i=0; i<len; i++){
        printf("%d, ", a[i]);
    }
    printf("}\n");
    printf("\nChinmay Nanda");
}
#include <stdio.h>
#include <stdlib.h>

void main(){
    char f1, f2;
    FILE *file1, *file2;
    file1 = fopen("file1.txt", "r");
    file2 = fopen("file2.txt", "r");
    if(file1 == NULL || file2 == NULL){
        printf("Error opening files!");
        exit(1);
    }

    f1=getc(file1);
    f2=getc(file2);

    while(f1 != EOF && f2 != EOF){
        if(f1 != f2){
            printf("Both files are different!\n");
            exit(0);
        }
        f1 = getc(file1);
        f2 = getc(file2);
    }

    if(f1 == EOF && f2 == EOF){
        printf("Both files are same!\n");
    }
    else{
        printf("Both files are different!\n");
    }

    fclose(file1);
    fclose(file2);
}
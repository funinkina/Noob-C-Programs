#include <stdio.h>
#include <string.h>

void main(){
    char str1[50], str2[50], res[100];
    printf("Enter a string: ");
    scanf("%s", &str1);
    printf("The length of the string is %d\n", strlen(str1));
    printf("Enter another string to concatenate: ");
    scanf("%s", &str2);
    printf("The concatenated strings are %s\n", strcat(str1, str2));
    printf("Now copying...\n");
    printf("First string is now %s", strcpy(str1, str2));
    printf("\nChinmay Nanda");
}
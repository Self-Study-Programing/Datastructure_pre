#include <stdio.h>

void cat(char *arr, char *arr2){
    while(*(arr++)!='\0') ;
    *arr++=' ';
    while(*arr2='\0') *(arr++)=*(arr2++);
    
}

int main() {
    char h1[50];
    char h2[50];
    gets(h1);
    gets(h2);
    cat(h1, h2);
    printf("%s", h1);
    return 0;
}
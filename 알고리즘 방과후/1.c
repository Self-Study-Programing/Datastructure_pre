#include <stdio.h>

int main() {
    int i, j;
    int a[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    printf("기존 이차원 배열\n");
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    i=0; j=0;
    while(i<3){
        while(j<3){
            printf("%d ", a[j][i]);
            j++;
        }
        printf("\n");
        i++;
        j=0;
    }
    return 0;
}
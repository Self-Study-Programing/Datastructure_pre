#include <stdio.h>
#include <stdlib.h>

// 소수구하기
int fun1(int n) {
    int j;
    for(j=2; j<n; j++){
        if(n%j == 0){
            return 0;
        }
    }
    return 1;
}

int main() {
    int num[100] = {0,};
    for(int i=0;;i++){
        scanf("%d", &num[i]);
        if(num[i] == 0){
            break;
        }
    }
    int z=0;
    int result[2] = {100,100};
    int g=0;
    for(int i=0; num[i] != 0; i++){
        for(int p=3; num[i]-p>0; p+=2){
            int k = num[i] - p;
            g=0;
            g = fun1(k);
            if(g==1){
                z=1;
                if(result[0] > p){
                    result[0] = p;
                }
            }
        }
        if(z==1){
            printf("%d = %d + %d\n", num[i], result[0], num[i]-result[0]);
            z=0;
        }
        result[0] = 100;
    }
    if(z==0){
        printf("GoldBach's conjecture is wrong.");
    }
    return 0;
}
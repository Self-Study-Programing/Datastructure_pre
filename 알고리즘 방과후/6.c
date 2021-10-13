#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    
    while(1){
        printf("%d - ", num);
        if(num%2 == 1){
           num=num*3+1; 
        }else if(num%2==0){
            num/=2;
        }
        if(num==1){
            printf("%d", num);
            return;
        }
    }
    return 0;
}
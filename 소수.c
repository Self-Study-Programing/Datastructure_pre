#include<stdio.h>

bool isPrimeNumber(int a){
    for(int i=0; i*i<a; i++){
        if(a%i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    if(isPrimeNumber(10)){
        printf("소수 O");
    }else{
        printf("소수 X");
    }
}
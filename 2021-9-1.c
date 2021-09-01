#include<stdio.h>

int main(){
    int* p; // 1차원 포인터
    int (*ptr)[5]; // 
    int arr[5];
    p = arr;
    ptr = &arr;
    printf("p=%p, ptr=%p", p, ptr);
    printf("p=%p, ptr=%p", ++p, ++ptr);
    return 0;
}
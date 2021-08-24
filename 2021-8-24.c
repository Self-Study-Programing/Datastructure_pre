// #include<stdio.h>

// int main() {
//     char str[] = "Hello";
//     char* p;
//     p = str;
//     // p = &str[0];
//     while(*p){
//         putchar(*p++); // 문자 출력 후 주소 증가
//     }
//     return 0;
// }

// #include<stdio.h>

// void swap1(int a, int b){
//     int t = a;
//     a = b;
//     b = t;
// }

// void swap2(int* a, int* b){
//     int t =  *a;
//     *a = *b;
//     *b = t;
// }

// int main() {
//     int n1 = 5, n2 = 7;
//     printf("%d %d", n1, n2);
//     swap1(n1, n2);
//     printf("%d %d", n1, n2);
//     swap2(&n1, &n2);
//     printf("%d %d", n1, n2);
//     return 0;
// }

#include<stdio.h>

void input(int a[], int cnt){
    for(int i=0; i<cnt; i++){
        scanf("%d", &a[i]);
    }
}

void output(int a[], int cnt){
    for(int i=0; i<cnt; i++){
        pritnf("%d ", a[i]);
    }
}

void swap(int* x, int* y) {
    int t = *x;
    *x = *y;
    *y = t;
}

void selectionSort(int a[], int cnt) {
    for(int i=0; i<cnt-1; i++){
        for(int j=i+1; j<cnt; j++){
            if(a[i]>a[j]){
                swap(&a[i],&a[j]);
            }
        }
    }
}

int main() {
    int n;
    int a[100];
    scanf("%d", &n);
    input(a, n);
    selectionSort(a,n);
    output(a, n);
    return 0;
}
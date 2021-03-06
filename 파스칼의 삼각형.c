#include<stdio.h>
#define N 10

long combi(int, int); // 수학에서 조합(combination)
// 수학 확률과 통계 단원 순열(permutation)과 조합(combination)

int main() {
    int n, r, t; // nPr 순열 공식, nCr 조합 공식
    for(n = 0; n <= N; n++) {
        for(t=0; t<(N-n)*3; t++){
            printf(" "); // 삼각형 모양을 만들기 위한 for문
        }
        for(r=0; r<n; r++){
            printf("%3d   ", combi(n,r));
        }
        printf("\n");
    }
    return 0;
}

long combi(int n, int r) {
    int i;
    long c = 1;
    for(i=1; i<=r; i++){
        c = c*(n-i+1)/i; // 값을 구하기 위한 공식
    }
    return c;
}
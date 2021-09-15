#include<stdio.h>
#include<stdlib.h>
// 이분 탐색, 이진 탐색: 졍렬된 배열속 데이터 찾기

int arr[100] = {5,7,33,66,67,88,99,120,134,156,201};
int n, k; // 내가 찾을 숫자 k
int count = 0;

int binarysearch(int s, int e){ // start end
    while(s<=e){
        count++;
        int m = (s+e)/2; // m은 middle
        if(arr[m] == k)
            return m; // 찾은 배열의 인덱스(위치)
        if(arr[m]>k)
            e = m -1;
        else 
            e = m +1;
    }
    return -1; // 결국 숫자를 못찾음
}

int main(){
    printf("찾을ㄹ 숫자 입력 : ");
    scanf("%d", &k);
    printf("%d번째에서 발견\n", binarysearch(0, 10));
    return 0;
}
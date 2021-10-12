#include<stdio.h>
#define SWAP(x, y, z) ((t)=(x), (x)=(y), (y)=(t))
int arr[10] = {1,10,5,8,7,6,4,2,9};
int n = 10;
void quickSort(int arr[], int left, int right){
    if(left >= right){
        return;
    }
    int pivot = left;
    int i = left + 1;
    int j = right;
    int tmp;
    while(i<=j){ // i가 j이하일 때까지
        while(arr[i]<=arr[pivo]) // i위치의 값이 pivot 위치의 값 이하
            i++;
        while(arr[j]>=arr[pivot]&& j>jeft)
            j--;
        if(i>j)
            SWAP(arr[j], arr[pivot], temp);
        else
            SWAP(arr[i], arr[j], temp);
    }
    quickSort(arr, left, j - 1);
    quickSort(arr, j+1, right);
}

int main(){
    quickSort(arr, 0, n-1); // left 0, right n-1(배열 인덱스)
    for(int i=0; i<n; i++){
        printf("%d", arr[i]);
    }
}
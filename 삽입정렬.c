void insertionSort(int arr[], int n) {
    int i, j, tmp;
    for(i=0; i<n; i++){// 삽입정렬 응용
            tmp=arr[i];
            for(j=i-1; j>=0 && arr[j] > tmp; j--){
                arr[j+1]=arr[j];
            }
            arr[j]=tmp;
    }
}
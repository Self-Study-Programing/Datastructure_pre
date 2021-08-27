#include<stdio.h>

int Bsearch(int ar[], int len, int target) {
	int first = 0; // 시작 인덱스
	int last = len - 1; // 마지막 인덱스
	int mid;

	while (first <= last) {
		mid = (first + last) / 2; // 탐색 대상의 중앙
		if (target == ar[mid]) { // 중앙에 저장된 것이 타겟이라면
			return mid; // 탐색 끝
		}
		else {
			if (target < ar[mid]) { // 작다면
				last = mid - 1; // 라스트값 변경
			}
			else {
				first = mid + 1; // 퍼스트값 변경
			}
		}
	}
	return -1; // 못 찾았다면 반환 값이 -1
}

int main(void) {
	int arr[] = {1, 3, 5, 7, 9};
	int idx;
	idx = Bsearch(arr, sizeof(arr) / sizeof(int), 7);
	if (idx == -1) {
		printf("탐색 실패 \n");
	}
	else {
		printf("타겟 저장 인덱스: %d \n", idx);
	}
	idx = Bsearch(arr, sizeof(arr) / sizeof(int), 4);
	if (idx == -1) {
		printf("탐색 실패 \n");
	}
	else {
		printf("타겟 저장 인덱스: %d \n", idx);
	}

	return 0;
}
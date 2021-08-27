#include<stdio.h>

int Bsearch(int ar[], int len, int target) {
	int first = 0; // ���� �ε���
	int last = len - 1; // ������ �ε���
	int mid;

	while (first <= last) {
		mid = (first + last) / 2; // Ž�� ����� �߾�
		if (target == ar[mid]) { // �߾ӿ� ����� ���� Ÿ���̶��
			return mid; // Ž�� ��
		}
		else {
			if (target < ar[mid]) { // �۴ٸ�
				last = mid - 1; // ��Ʈ�� ����
			}
			else {
				first = mid + 1; // �۽�Ʈ�� ����
			}
		}
	}
	return -1; // �� ã�Ҵٸ� ��ȯ ���� -1
}

int main(void) {
	int arr[] = {1, 3, 5, 7, 9};
	int idx;
	idx = Bsearch(arr, sizeof(arr) / sizeof(int), 7);
	if (idx == -1) {
		printf("Ž�� ���� \n");
	}
	else {
		printf("Ÿ�� ���� �ε���: %d \n", idx);
	}
	idx = Bsearch(arr, sizeof(arr) / sizeof(int), 4);
	if (idx == -1) {
		printf("Ž�� ���� \n");
	}
	else {
		printf("Ÿ�� ���� �ε���: %d \n", idx);
	}

	return 0;
}
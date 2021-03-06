#include<stdio.h>
#include<stdlib.h> // malloc, free 함수

typedef struct NODE ND;
struct NODE{ // 연결 리스트의 노드 구조체
	struct NODE* next; // 다음 노드의 주소를 저장할 포인터
	int data; // 데이터를 저장할 멤버
};

int main() {
	struct NODE* head = malloc(sizeof(struct NODE)); // 머리 노드 생성
	// ND* head = malloc(sizeof(ND));

	struct NODE* node1 = malloc(sizeof(struct NODE)); // 첫 번째 노드 생성
	head->next = node1; // 머리 노드 다음은 첫 번쨰 노드
	node1->data = 10; // 첫 번째 노드의 값

	struct NODE* node2 = malloc(sizeof(struct NODE)); // 두 번째 노드 생성
	node1->next = node2; // 첫 번째 노드 다음은 두 번째 노드
	node2->data = 20; // 두 번째 노드 값
	
	node2->next = NULL; // 두 번째 노드 다음은 노드가 없다.

	struct NODE* curr = head->next; // 첫 번쨰 노드를 가리킴
	while (curr != NULL) { // NULL이 아닐 때 계속 반복
		printf("%d\n", curr->data); // 현재 노드의 데이터 출력
		curr = curr->next; // 포인터에 다음 노드의 주소 저장
	}

	free(node2);
	free(node1);
	free(head);

	return 0;
}
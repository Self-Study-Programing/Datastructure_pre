#include<stdio.h>
#include<stdlib.h> // malloc, free �Լ�

typedef struct NODE ND;
struct NODE{ // ���� ����Ʈ�� ��� ����ü
	struct NODE* next; // ���� ����� �ּҸ� ������ ������
	int data; // �����͸� ������ ���
};

int main() {
	struct NODE* head = malloc(sizeof(struct NODE)); // �Ӹ� ��� ����
	// ND* head = malloc(sizeof(ND));

	struct NODE* node1 = malloc(sizeof(struct NODE)); // ù ��° ��� ����
	head->next = node1; // �Ӹ� ��� ������ ù ���� ���
	node1->data = 10; // ù ��° ����� ��

	struct NODE* node2 = malloc(sizeof(struct NODE)); // �� ��° ��� ����
	node1->next = node2; // ù ��° ��� ������ �� ��° ���
	node2->data = 20; // �� ��° ��� ��
	
	node2->next = NULL; // �� ��° ��� ������ ��尡 ����.

	struct NODE* curr = head->next; // ù ���� ��带 ����Ŵ
	while (curr != NULL) { // NULL�� �ƴ� �� ��� �ݺ�
		printf("%d\n", curr->data); // ���� ����� ������ ���
		curr = curr->next; // �����Ϳ� ���� ����� �ּ� ����
	}

	free(node2);
	free(node1);
	free(head);

	return 0;
}
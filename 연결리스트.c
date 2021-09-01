#include <stdio.h>
#include <stdlib.h>
#include "연결리스트.h"


void ListInit(List* plist) {
//리스트 초기화, Dummy Node 생성
plist->head = (Node*)malloc(sizeof(Node));
plist->head->next = NULL;
plist->comp = NULL;
plist->numOfData = 0;
}


void FInsert(List* plist, LData data) {
//Front Insert
Node* newNode = (Node*)malloc(sizeof(Node));
newNode->data = data;
newNode->next = plist->head->next;
//plist->head 더미 노드
plist->head->next = newNode;
(plist->numOfData)++;
}


void SInsert(List* plist, LData data) {
//predecessor, successor
Node* newNode = (Node*)malloc(sizeof(Node));
Node* pred = plist->head;
newNode->data = data;
while (pred->next != NULL &&
plist->comp(data, pred->next->data) != 0) {
//함수포인터 리턴값은 0 또는 1, 
pred = pred->next;
}
newNode->next = pred->next;
pred->next = newNode;
(plist->numOfData)++;
}


void LInsert(List* plist, LData data) {
if (plist->comp == NULL)
FInsert(plist, data);
else
SInsert(plist, data);
}


int LFirst(List* plist, LData* pdata) {
if (plist->head->next == NULL)
return FALSE;
plist->before = plist->head;
plist->cur = plist->head->next;


*pdata = plist->cur->data;
return TRUE;
}


int LNext(List* plist, LData* pdata) {
if (plist->cur->next == NULL)
return FALSE;
plist->before = plist->cur;
plist->cur = plist->cur->next;
*pdata = plist->cur->data;
return TRUE;
}


LData LRemove(List* plist){
Node* rpos = plist->cur;
LData rdata = rpos->data;


plist->before->next = plist->cur->next;
plist->cur = plist->before;


free(rpos);
(plist->numOfData)--;
return rdata;
}


int LCount(List* plist){
return plist->numOfData;
}


void SetSortRule(List* plist, int (*comp)(LData d1, LData d2)){
plist->comp = comp;
}
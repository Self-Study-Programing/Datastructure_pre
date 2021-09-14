#include<stdio.h>

int queue[5]; // 큐 

void menuf(){
    printf("\n1.큐에 삽입 2.큐에서 삭제");
    printf("3.내용보기 4.종료");
}

void Enqueue(int* back, int item){
    if(*back == 4){ // 큐가 배열이므로 0,1,2,3,4 4라면 가득찬 것
        printf("큐가 가득참\n");
        return;
    }
    queue[++ *back] = item; // 찬 공간 다음 공간에 삽입
}

int Dequeue(int* front, int back){
    if(*front == back) { // front == back은 empty
        return -1;
    }
    return queue[++ * front];
}

void Display(int front, int back){
    if(front == back){
        printf("큐가 비었음\n");
    }
    for(int i=front; i<back;){
        printf("%4d", queue[++i]);
    }
}

int main() {
    int front = -1, back = -1;
    int menu, item;
    while(1) {
        menuf();
        scanf("%d", &menu);
        switch(menu){
            case 1:
                scanf("%d", &item);
                Enqueue(&back, item);
                break;
            case 2: 
                item = Dequeue(&front, back);
                if(item == -1){
                    printf("큐가 비었음");
                }else{
                    printf("%d가 삭제됨\n", item);
                }
                break;
            case 3:
                Display(front, back);
                break;
            case 4:
                return 0;
            default:
                printf("다시 입력하세요");
        }
    }
    return 0;
}
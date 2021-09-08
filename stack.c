#include<stdio.h>
#define SIZE 5
void push(int);
void pop();
void display();

int stack[SIZE];
int top = -1;
int main() {
    int val, choice;
    printf("\n----Menu----\n");
    while(1){
        printf("1.push  2.pop   3.display   4.exit\n");
        printf("Choice : ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: // 스택에 push
                printf("데이터를 입력하세요 : "):
                scanf("%d", &val);
                push(val);
                break;
            case 2: // 스택에서 pop
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                return 0;
            default:
                printf("다시 입력하세요.");
        }
    }
    return 0;
}

void push(int val){// 쪽지시험, 암기 필요
    if(top == SIZE -1)// top >= SIZE-1
        printf("스택이 가득참\n");
    else
        stack[++top] = val;
}

void pop(){ // 쪽지 시험, 임기 필요
    if(top == -1)
        printf("스택이 비었음\n");
    else
        printf("%d가 삭제됨\n", stack[top--]);
}

void display(){
    if(top == -1)
        printf("스택이 비었음\n");
    else
        for(int i=top; i>=0; i--)
        printf("%4d", stack[i]);
    printf("\n");
}
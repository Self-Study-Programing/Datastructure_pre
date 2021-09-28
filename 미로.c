#include <stdio.h>

int m[15][15] = { 
             {2,2,2,2,2,2,2,2,2,2,2,2,2,2,2},
             {2,0,0,0,0,0,0,0,0,0,0,0,0,0,2},
             {2,0,2,0,2,2,2,0,2,0,0,0,2,0,2},
             {2,0,2,0,0,2,2,2,0,0,2,0,0,0,2},
             {2,0,2,0,2,0,2,0,0,2,2,2,0,0,2},
             {2,0,0,0,0,0,2,0,0,0,0,0,0,0,2},
             {2,2,0,2,2,0,2,0,2,2,2,2,2,2,2},
             {2,0,0,0,0,0,0,0,0,0,0,2,2,2,2},
             {2,2,2,2,2,2,2,2,2,2,2,2,2,2,2} };


int Si, Sj, Ei, Ej; // 출발 행렬, 도착 행렬
int success, top, Path_i[100], Path_j[100];
// succes : 미로탐색 성공여부
// top : 시스템 스택에 저장되는 위치
// Path_i, Path_j : 미로 탐색한 경로 저장

int visit(int, int);

int main() {
    top = 0;
    success = 0; // 미로 탐색을 시작하지 않음. 실패
    printf("====미로 탈출 경로 찾기 게임====\n");
    Si = 1, Sj = 1;
    Ei = 7, Ej = 7;
    if (visit(Si, Sj) == 0)
        printf("미로의 출구를 찾을 수 없음\n");
    else
        printf("미로의 모든 경로를 찾았음\n");
    return 0;
}

void printPath() {
    for (int i = 0; i < top; i++)
        printf("[%d,%d]", Path_i[i], Path_j[i]);
    printf("\n");
}

int visit(int i, int j) { // i, j 형과열, 행열(row, column)
    static int pathCount = 1; // 찾은 경로의 개수를 저장
    m[i][j] = 1;
    Path_i[top] = i;
    Path_j[top++] = j;
    // top++;
    if (i == Ei && j == Ej) {
        printf("찾은 경로 %d번\n", pathCount++);
        printPath();
        success = 1;
    }
    // 미로 탐색 알고리즘
    if (m[i][j + 1] == 0) // 오른쪽 이동
        visit(i, j + 1);
    if (m[i + 1][j] == 0) // 아래행 이동
        visit(i + 1, j);
    if (m[i][j - 1] == 0) // 왼쪽 이동
        visit(i, j - 1);
    if (m[i - 1][j] == 0) // 위로 이동
        visit(i - 1, j);
    top--;
    m[i][j] = 0;
    return success;
}
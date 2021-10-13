#include <stdio.h>

void geometric(){
    static int k=1;
    k*=2;
    printf("%d ", k);
}

int main() {
    int i, n;
    scanf("%d", &n);
    for(i=0; i<n; i++){
        geometric();
    }
    return 0;
}
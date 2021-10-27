#include<stdio.h>

int main() {
   int a, b, c;
   scanf("%d %d %d", &a, &b, &c);
   printf("%d", (c % a / b * b * (12000 / a)) + (c / a * b) + (c % b));
   return 0;
}
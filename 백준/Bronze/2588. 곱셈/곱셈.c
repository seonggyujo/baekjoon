#include <stdio.h>

int main() {
    int a, b;
    scanf("%d", &a);            // 첫 번째 수 (472)
    scanf("%d", &b);            // 두 번째 수 (385)

    int b1 = b % 10;            // 1의 자리 = 5
    int b2 = (b / 10) % 10;     // 10의 자리 = 8
    int b3 = b / 100;           // 100의 자리 = 3

    printf("%d\n", a * b1);     //(3) 출력
    printf("%d\n", a * b2);     //(4) 출력  
    printf("%d\n", a * b3);     //(5) 출력
    printf("%d\n", a * b);      //(6) 출력
    
    return 0;
}

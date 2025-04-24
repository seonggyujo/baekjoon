#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int prize = 0;

    if (a == b && b == c) {
        // 3개의 주사위 눈이 모두 같은 경우
        prize = 10000 + a * 1000;
    } else if (a == b || a == c) {
        // 2개의 주사위 눈이 같은 경우 (a와 다른 하나가 같음)
        prize = 1000 + a * 100;
    } else if (b == c) {
        // 2개의 주사위 눈이 같은 경우 (b와 c가 같음)
        prize = 1000 + b * 100;
    } else {
        // 모두 다른 경우
        int max = a;
        if (b > max) max = b;
        if (c > max) max = c;
        prize = max * 100;
    }

    printf("%d\n", prize);
    return 0;
}

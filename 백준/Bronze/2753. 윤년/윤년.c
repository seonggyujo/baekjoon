#include <stdio.h>

int main()
{
    int y;
    scanf("%d", &y);
    if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0) printf("1\n"); // 윤년
    else printf("0\n");                                              // 평년
    return 0;
}

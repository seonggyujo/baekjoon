#include <stdio.h>

int main()
{
    int y;
    scanf("%d", &y);
    int a1,a2,a3;
    a1=y%4;            //a1 4의 배수이면 값이 0
    a2=y%400;          //a2 400의 배수이면 값이 0
    a3=y%100;          //a3 100의 배수이면 값이 0
    
    if(a1==0 && a2==0) printf("1");           // 4의 배수이면서 400의 배수일때 윤년
    else if(a1 == 0 && a3 != 0) printf("1");  // 4의 배수이면서 100의 배수가 아닐때 윤년
    else printf("0");                         // 그 외 윤년이 아니다
    
    return 0;
}
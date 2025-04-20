#include <stdio.h>

int main()
{
    int H,M;
    scanf("%d %d", &H,&M);
    
    M = M-45;
    
    if(M<0)                    //M 분이 마이너스일때
    {                          
        M = 60 + M;            //마이너스(분)를 양수로 변경
        H = H -1;              //마이너스일때는 시간을 -1

        if(H<0) H=23;          //시간이 음수일때 23으로 설정
        
        printf("%d %d", H,M);
    }
    else if(M>=0)              //M 분이 양수일때는 그냥 출력하면 됨
    {
        printf("%d %d", H,M);
    }
    
    return 0;
}
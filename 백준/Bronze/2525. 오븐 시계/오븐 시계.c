#include<stdio.h>

int main()
{
    int H,M,M2,Total_M;
    
    scanf("%d %d", &H, &M);
    scanf("%d", &M2);
    
    Total_M= H * 60 + M + M2;
    H = (Total_M / 60)%24;
    M = Total_M % 60;
    
    
    
    printf("%d %d", H, M);
}
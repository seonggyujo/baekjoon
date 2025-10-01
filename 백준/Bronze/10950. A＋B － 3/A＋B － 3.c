#include <stdio.h>

int main(){
    int A=0,B=0;
    int i;
    scanf("%d",&i);
    for(int N=0;N<i;N++){
        scanf("%d %d",&A,&B);
        printf("%d\n",A+B);
    }
    
}
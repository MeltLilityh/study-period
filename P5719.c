#include <stdio.h>

int main(void){
    int n,k;
    int A=0,B=0; //不赋值的变量直接做计算会报错。
    int sum_A=0,sum_B=0;
    scanf("%d %d",&n,&k);
    for(int i=1;i<=n;i++){
        if(i%k==0){
            A=A+1;
            sum_A=sum_A+i;
            
        }else{
            B=B+1;
            sum_B=sum_B+i;
        }
    }
    printf("%.1f %.1f\n",(float)sum_A/A,(float)sum_B/B);
    return 0;
}
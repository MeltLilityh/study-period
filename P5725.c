#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n*n;i++){
        printf("%02d",i);
        if(i%n==0)printf("\n");
    }
    printf("\n");
    int num=1;//数字递增
        int step=0;//打完空格之后剩下的格子来填数字
        for(int j=n-1;j>=0;j--){
            printf("%*s",2*j,"");//打印n-1个空格
            step=n-j;//剩下的可以放数字的位置;
            for(int h=1;h<=step;h++){//循环放入数字
                printf("%02d",num);
                num++;
            }printf("\n");//循环结束换行.

        }
    
    return 0;
}
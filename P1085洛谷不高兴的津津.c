#include <stdio.h>

/* 连续输入 7 天，每天两个整数：课内时间 class、课外时间 outclass
   统计出学习时间最长的那一天；如果 7 天都不超过 8 小时，输出 0 */
int main(void) {
    int class, outclass;      
    int wholetime;            
    int bestday = 0;          
    int i = 1;                

    while (i <= 7) {
        scanf("%d %d", &class, &outclass);   
        wholetime = class + outclass;        

        if (wholetime > bestday) {
            bestday = wholetime;
        }

        i++;                  
    }

    if (bestday <= 8) {
        printf("0\n");
    } else {
        printf("%d\n", bestday);
    }

    return 0;
}

#include <stdio.h>

int main(void){
    int n;
    scanf("%d", &n);

    int mini;
    for (int i=0; i <n ;i++){
        int x;
        scanf("%d", &x); //边读边比较 输入是一次给的，但是程序是一个一个取的。

        if (i==0 || x < mini){ //让最小的存在mini里面
            mini = x;
        }
    }
    printf("%d\n", mini); //条件 ? 值A : 值B 条件成立么？成立就取A，否则就取B。
    return 0;
}
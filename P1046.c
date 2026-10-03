#include <stdio.h> //数组的应用！

int main(void){
    int a[10];
    for(int i=0; i<10; i++){
        scanf("%d",&a[i]);
    }

    int h;
    scanf("%d",&h);
    int reach=h+30;

    int t=0;
    for(int i=0; i<10; i++){
        if(a[i] <= reach){
            t++;
        }
    }

    printf("%d\n",t);
    return 0;
}

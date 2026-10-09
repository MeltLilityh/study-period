#include <stdio.h>

int main(){
    int a;
    scanf("%d",&a);
    int i=1;
    while(a!=1){
        a=a/2;
        i=i+1;
    }
    printf("%d\n",i);
    return 0;
}
#include <stdio.h>

int gcd(int a,int b){
    while(b!=0){
        int t=a%b;
        a=b;
        b=t;
    }
    return a;
}

int main(void){
    int a,b,c;
    int t=0;
    scanf("%d%d%d",&a,&b,&c);
    if(a>b){
        t=a;a=b;b=t;
    }
    if(a>c){
        t=a;a=c;c=t;
    }
    if(b>c){
        t=b;b=c;c=t;
    }

    int g=gcd(a,c);
    printf("%d/%d\n",a/g,c/g);
    return 0;
} 

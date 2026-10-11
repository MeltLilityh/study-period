#include <stdio.h>

int isPrime(int n){
    if(n<=1){
        return 0;
    }
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return 0;
        }
        
    }
    return 1;
}

int main(){
    unsigned int L;
    scanf("%u",&L);
    int sum=0;
    int j=2;
    int temp=0;
    while(1){
        if(isPrime(j)){
            if (sum+j>L)break;
        sum=sum+j;
        temp++;
        printf("%d\n",j);
        
    }
    j++;
    }
    
    printf("%d",temp);
    return 0;
}

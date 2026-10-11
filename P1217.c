#include <stdio.h>

int isPrime(int n){
    if(n<=1){
        return 0;
    }
    for(int i=2;i<=n/i;i++){
        if(n%i==0){
            return 0;
        }
        
    }
    return 1;
}

int isPalindrome(int x){
    if(x<0)return 0;

    long long reserved=x;
    long long turned=0;
    while (x >0){
        turned=turned*10 + x%10;
        x /=10;
    }
    return reserved==turned;

}

int main(){
    unsigned int  a,b;
    scanf("%u %u",&a,&b);
    for(unsigned int i=a;i<=b;i++){
        if (i%2==0 && i!=2)continue;
        if(isPalindrome(i) && isPrime(i)){
            printf("%u\n",i);
        }
        i++;
    }
    return 0;
}
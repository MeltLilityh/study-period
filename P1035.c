#include <stdio.h>



int main(){
    int k;
    scanf("%d",&k);
    double sum=0;
    int i=1;
    
    while(sum<=k){
        sum=sum+1.0/i;
        i++;
    }
    
    printf("%d",i-1);
    
    return 0;

}
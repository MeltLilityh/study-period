#include <stdio.h>

int main(){
    int a[100005];
    int n;
    scanf("%d",&n);
    int temp=1;
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int j=n-1;
    int maxlen=1;
    while(j!=0){
        if(a[j]-1==a[j-1]){
            temp+=1;
        }else{
            if(temp>maxlen)maxlen=temp;
            temp=1;
        }
        j--;
    }
    if (temp>maxlen)maxlen=temp;
    printf("%d",maxlen);
    return 0;
}
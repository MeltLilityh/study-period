#include <stdio.h>

int main(){
    int k;//天数
    scanf("%d",&k);
    int sum=0;//金币总和
    int day=0;//连续第day天。
    int used=0;
    while(used<k){
        day=day+1;
        int cnt=day;
        if(used+cnt>k){
            cnt=k-used;
        }
        sum=sum+cnt*day;
        used=used+cnt;
    }
    printf("%d\n",sum);
    return 0;

}
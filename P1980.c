#include <stdio.h>

int main(){
    int n,x;
    scanf("%d %d",&n,&x);
    int count=0;
    for(int i=1;i<=n;i++){
        int temp=i;
        while (temp>0){
            int digit=temp%10;  //看末位是不是和x相同
            if(digit==x){
                count++;
            }
            temp=temp/10;  //取得首位，使得首位回到while循环，判断首位和x是否相同。
        }
    }
    printf("%d",count);
    return 0;
}
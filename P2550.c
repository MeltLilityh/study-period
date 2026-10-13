#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int ticket[7];
    for(int i=0;i<7;i++){
        scanf("%d",&ticket[i]);
    }
    int ming_ticket[1005][7];
    for(int i=0;i<n;i++){
        for(int j=0;j<7;j++){
            scanf("%d",&ming_ticket[i][j]);
        }
    }
    int a[8]={0};
    for(int i=0;i<n;i++){
        int temp=0;
        for(int j=0;j<7;j++){
            for(int k=0;k<7;k++){
                if(ticket[k]==ming_ticket[i][j]){
                    temp++;
                    break;
                }
            }
        }
        a[temp]=a[temp]+1;
    }
    for(int x=7;x>=1;x--){
        if(x!=7)printf(" ");
        printf("%d",a[x]);

    }
    printf("\n");
    return 0;
    

}
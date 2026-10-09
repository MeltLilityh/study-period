#include <stdio.h>

int main(){
    int n; //直角边的长度，竖着有几个，第一行到几。
    scanf("%d",&n);
    int i=1;
    int row=n;
    while(row>=1){
        int j=0;
        while(j<row){
            printf("%02d",i);
            i++;
            j++;
        }
        printf("\n");
        row--;

    }
    return 0;
    
}

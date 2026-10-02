#include <stdio.h>
#include <math.h>
int main(void){
    int people;
    int numble,price;
    double total=-1;
    scanf("%d",&people);
    for ( int i=1; i<=3;i++){
        scanf("%d %d",&numble,&price);
        if ((ceil((double)people/numble))*price<total||total<0){
            total =(ceil((double)people/numble))*price;
        }

    }
    printf("%d\n", (int)total);
    return 0;
} 
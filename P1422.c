#include <stdio.h>

int main(void){
    int kwh;
    double price;
    scanf("%d",&kwh);
    if(kwh <= 150){
        price=kwh*0.4463;
    }else if(kwh <= 400&&kwh>=150){
        price=150*0.4463+(kwh-150)*0.4663;}
    else if (kwh>400){
        price=150*0.4463+250*0.4663+(kwh-400)*0.5663;
    }
    printf("%.1f\n",price);
    return 0;
}
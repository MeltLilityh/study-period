#include <stdio.h>

int main(void){
    char a[14];  //数组记得留出一个位置给\0
    scanf("%s", a);
    int shibie_1,shibie_2;
    shibie_1=(a[0]-'0')*1+(a[2]-'0')*2+(a[3]-'0')*3+(a[4]-'0')*4+(a[6]-'0')*5+(a[7]-'0')*6+(a[8]-'0')*7+(a[9]-'0')*8+(a[10]-'0')*9;
    //直接读取的a[0]是字符型的，用的是ASCII码，所以要减去'0'，才能得到对应的数字
    shibie_2=shibie_1%11;
    char check;
    if(shibie_2==10){
        check='X';
    }else{
        check=(char)(shibie_2+'0');//转化成字符型。
    }
    if (check==a[12]){
        printf("Right\n");
    }else {
        a[12]=check;
        printf("%s\n",a);
    }
    return 0;
}
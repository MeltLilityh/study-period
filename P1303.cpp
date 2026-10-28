#include <iostream>
#include <string>
#include <cstdio>
#include <vector>
#include <utility>

using namespace std;
 
int main(){
    string s1,s2;
    cin >> s1 >> s2;      // 用 >> 读：自动跳过空格和换行
    vector<int>a1;
    vector<int>a2;
    if(s1.size()>s2.size())swap(s1,s2);
    for(int i=s1.size()-1;i>=0;i--){
        a1.push_back(s1[i]-'0');
    }
    for(int j=s2.size()-1;j>=0;j--){
        a2.push_back(s2[j]-'0');
    }
    int len1=a1.size();
    int len2=a2.size();
    int lenmin,lenmax;
    vector<int>a3(len1+len2,0);
    for(int i=0;i<=a1.size()-1;i++){
       for(int j=0;j<=s2.size()-1;j++){
        a3[i+j]+=a1[i]*a2[j];
       }
    }
    for(int i=0;i<a3.size()-1;i++){
        a3[i+1]=a3[i+1]+a3[i]/10;
        a3[i] %= 10;
    }
    int j=(int)a3.size()-1;
    while(j>0 && a3[j]==0)j--; //只是移动下标但是不删除，后续循环条件还要改。
    for(;j>=0;j--){
        printf("%d",a3[j]);
    }
    printf("\n");
    return 0;
}

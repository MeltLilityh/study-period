#include <iostream>
#include <string>
#include <cstdio>
#include <vector>
 
using namespace std;

int main(){
    string s1,s2;
    vector<int>a1;
    vector<int>a2;
    getline(cin,s1);
    getline(cin,s2);
    for(int i=(int)s1.size()-1;i>=0;i--){
        a1.push_back(s1[i]-'0');
    }
    for(int j=(int)s2.size()-1;j>=0;j--){
        a2.push_back(s2[j]-'0');
    }
    int len=s1.size();
    if(s1.size() < s2.size()){
        len=s2.size();
    }
    while((int)a1.size()<(int)a2.size())a1.push_back(0);
    while((int)a2.size()<(int)a1.size())a2.push_back(0);//将少的那个数组补齐，使得可以访问的下标数相同。

    vector<int>a3(len+1,0);//因为最高位可能会进位，所以要多开一位防止越位;
    for(int k=0;k < len; k++){
        a3[k]=a1[k]+a2[k];
    }
    for(int i=0;i<len;i++){
        if(a3[i]>=10){
            a3[i+1]=a3[i+1]+a3[i]/10;
            a3[i]=a3[i]%10;
        }
    }
    int j = (int)a3.size() - 1;
    while (j > 0 && a3[j] == 0) j--;   // 找到第一个非 0 的最高位
    for (; j >= 0; j--) cout << a3[j];
    cout <<'\n';
    return 0;
}
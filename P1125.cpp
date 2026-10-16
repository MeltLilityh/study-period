#include <iostream>
#include <string>

using namespace std;

int isPrime(int a){
    if(a<2)return 0;
    for(int i=2;i<=a/i;i++){
        if(a%i==0)return 0;
    }
    return 1;
    
}

int main(){
    string s;
    getline(cin,s);
    int maxn=0,minn=9999;
    int num[26]={0};
    for(char c :s)num[c-'a']++;
    for(int j=0;j<26;j++){
        if(num[j]==0)continue;
        if(num[j]>maxn)maxn=num[j];
        if(num[j]<minn)minn=num[j];
    }
    if(isPrime(maxn-minn)==1){
        cout << "Lucky Word"<<"\n";
        cout << maxn-minn <<"\n";
    }
    else{
        cout << "No Answer" <<"\n";
        cout << "0" <<"\n";
    }
    return 0;
}
//巧妙的思想，通过遍历数组，将相同acsii码的字母存到对应下标的格子里，字母相同格子就相同，就可以做到计数
//=0要注意，会让代码minn恒为0.素数的判断还是要加强呀。
    
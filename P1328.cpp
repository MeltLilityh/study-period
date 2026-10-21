#include <iostream>
#include <vector>
#include <string>
#include <cstdio>
 
using namespace std;

int main(){
    int N,Na,Nb;
    scanf("%d %d %d",&N,&Na,&Nb);
    cin.ignore();
    string s_a;
    getline(cin,s_a);
    string s_b;
    getline(cin,s_b);
    string A;
    string B;
    for(char c : s_a){
        if(c==' ')continue;
        else{
            A += c;
        }
    }
    for(char d : s_b){
        if(d==' ')continue;
        else{
             B +=d;
        }
    }
    int T_a=A.size();
    int T_b=B.size();
    
    string extA,extB;

    int qa=N/T_a,ra=N%T_a;
    for (int k = 0; k < qa; k++) extA += A;
    extA +=A.substr(0,ra);
    int qb = N / T_b, rb = N % T_b;//能装下几个完整的周期（qa），剩下几个字符（ra）
    for(int k=0;k<qb;k++)extB +=B;
    extB +=B.substr(0,rb);

    int scoreA=0,scoreB=0;
    int win[5][2]={{2,3}, {0,3}, {1,4}, {2,4}, {0,1}};//克制名单
    for(int j=0;j<N;j++){
        int a=extA[j]-'0';
        int b=extB[j]-'0';
        if(b==win[a][0]||b==win[a][1])  scoreA++;
        else if(a==win[b][0]||a==win[b][1])scoreB++;
    }

    cout << scoreA <<' '<<scoreB<<'\n';
    return 0;



}
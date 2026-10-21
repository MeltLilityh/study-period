#include <iostream> 
#include <vector>
#include <string>
#include <cstdio>

using namespace std;
int dx[8]={-1,-1,-1,0,0,1,1,1};
int dy[8]={-1,0,1,-1,1,-1,0,1};
int countMines(const vector<vector<char>>&p,int i,int j){
    int n=(int)p.size();
    int m=(int)p[0].size();

    int cnt=0;
    for(int d=0;d<8;d++){
        int ni=i+dx[d];
        int nj=j+dy[d];

        if(ni>=0 && ni<n && nj>=0 && nj<m && p[ni][nj]=='*')cnt++;
    }
    return cnt;
}


int main(){
    int n,k;
    scanf("%d %d",&n,&k);
    cin.ignore();
    vector<vector<char>>p(n,vector<char>(k));
    string s;
    for(int i=0;i<n;i++){
        getline(cin,s);
        for(int j=0;j<k;j++){
            if ((int)s.length()<k)break;
            p[i][j]=s[j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<k;j++){
            if(p[i][j]=='*')printf("*");
            else            printf("%d",countMines(p,i,j));
            if(j==k-1)printf("\n");
        }
    }
    return 0;
}
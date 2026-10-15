#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<string> g(n,string(n,'0'));
    int cnt,digit=0,pos=0;
    while(cin >> cnt){
        for(int j=0;j<cnt;j++){
            g[pos/n][cnt/%n]='0'+digit;
            digit=digit-1;
        }
        ++pos;
    }
    for(int i=0;i<n;i++)cout << g[i] << '\n';
    return 0;
} 
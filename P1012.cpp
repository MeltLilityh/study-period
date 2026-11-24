#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

bool cmp(const string&a,const string&b){
    return a+b>b+a;
}

int main(){
    int n;
    cin >> n;
    vector<string>a(n);
    for(int i=0;i<n;i++){
        cin >>a[i];
    }
    sort(a.begin(),a.end(),cmp);
    for(int i=0;i<n;i++){
        cout << a[i];
}
    cout <<'\n';
    return 0;

} 
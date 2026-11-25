#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;



int main(){
    int n;
    cin >> n;
    vector<string>a(n);
    for(int i=0;i<n;i++){
        cin >>a[i];
    }
    string max=" ";
    int length=0;
    int num=0;
    for(int i=0;i<n;i++){
        if(a[i].size()>length){
            length=a[i].size();
            max=a[i];
            num=i;
        }
        else if(a[i].size()==length){
            if(max<a[i]){
            max=a[i];
            num=i;}
            
        }
    }
    cout << num+1 <<endl;
    cout << max << endl;
    return 0;

} 
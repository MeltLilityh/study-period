#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int>num;


bool cmp(int a,int b){
    if(a !=b)return a<b;
    else return a==b;
}

int main(){
    int n;
    cin >> n;
    num.resize(n);
    for(int i=0;i<n;i++){
        cin >> num[i];
    }

    sort(num.begin(),num.end(),cmp);

    num.erase(unique(num.begin(),num.end()),num.end());

    cout <<  num.size() <<endl;
    for(int i=0;i<(int)num.size();i++){
        cout <<num[i] <<' ';
    }
    cout << endl;
    return 0;

}
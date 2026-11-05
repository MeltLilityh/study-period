#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

struct Classmate{
    string s;
    int y,m,d;
    int id;
};

bool cmp(const Classmate&a, const Classmate&b){
    if(a.y != b.y) return a.y < b.y;
    if(a.m != b.m) return a.m < b.m;
    if(a.d !=b.d)return a.d < b.d;
    return a.id > b.id;
}


int main(){
    int n;
    cin >> n;

    vector<Classmate> v(n);

    for(int i=0;i<n;i++){
        cin >> v[i].s >> v[i].y >> v[i].m >> v[i].d;
        v[i].id=i;
    }

    sort(v.begin(),v.end(),cmp);

    for(int i=0;i<n;i++){
        cout << v[i].s <<'\n';
    }

    return 0;
}

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int m,n;
    cin >> m >> n;
    vector<int> a(m),b(n);
    for(int i=0;i<m;i++){
        cin >> a[i];
    }
    for(int i=0;i<n;i++){
        cin >> b[i];
    }
    long long sum=0;
    sort(a.begin(),a.end());
    for(int score : b){
        auto it=lower_bound(a.begin(),a.end(),score);

        long long  best=1LL<<60;

        if(it != a.end()){
            best=min(best,(long long)(*it-score));
        }
        if(it != a.begin()){
            best=min(best,(long long )(score-*(it-1)));
        }
        sum+=best;
    }
    cout << sum <<endl;
    return 0;

}
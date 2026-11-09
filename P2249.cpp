#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n,t;
    cin >> n >> t;
    vector<int>a(n,0);
    for(int j=0;j<n;j++){
        cin >> a[j];
    }
    for(int i=0;i<t;i++){
        int need;
        cin >> need;
        int ans=-1;
        int l=0,r=a.size()-1;
        while(l<=r){
            int mid=(l+r)/2;
            if(a[mid]==need){
                ans=mid;
                r=mid-1;
            }else if(a[mid]<need){
                l=mid+1;
        }else{
                r=mid-1;
            }
        }
        if(ans==-1){
            cout << -1 << ' ';
    }else{
        cout << ans+1 << ' ';
    }
}
    cout << endl;
    return 0;

}
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int N,C;
    cin >> N >> C;
    vector<int> a(N);
    for(int i=0;i<N;i++){
        cin>> a[i];
    }
    sort(a.begin(),a.end());
    int *l =a.data();
    int *r=a.data()+1;
    int *end = a.data()+N;
    long long count=0;
    while(r<=end){
        int diff = *r-*l;
        if(diff<C){
            r++;
        }else if(diff>C){
            l++;
            if(l==r){
                r++;
            }
        }
        else{
            long long  lcount=1;
            long long  rcount=1;
            while(l+1<end&& *(l+1)==*l){
                lcount++;
                l++;
            }
            while(r+1<end&& *(r+1)==*r){
                rcount++;
                r++;
            }
            count += lcount*rcount;
            l++;
            r++;
        }

    }
    cout << count << endl;
    return 0;
} 
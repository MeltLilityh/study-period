#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    long long N,C;
    cin >> N >> C;
    vector<long long>list(N);
    for(int i=0;i<N;i++){
        cin >> list[i];
    }
    sort(list.begin(),list.end());
    long long  count =0;
    for(long long x :list){
        long long target = x-C;

        auto left = lower_bound(list.begin(),list.end(),target);
        auto right = upper_bound(list.begin(),list.end(),target);

        count += right - left;

    }
    cout << count << endl;
    return 0;

}
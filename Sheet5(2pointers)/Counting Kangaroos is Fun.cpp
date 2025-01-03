#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    int l=0 , r=l/2 , pairs=0;

    while(r<n && l<n/2){
        if(arr[r]>=2*arr[l]){
            pairs++;
            r++;
            l++;
        }

        else{
            r++;
        }
    }
    cout<<n-pairs;
}

int main() {
    solve();
    return 0;
}

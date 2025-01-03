#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int l=0, r=n-1 , s=0, d=0;
    bool turn=true;

    while(l<=r){
        if(arr[l]>arr[r]){
            if(turn){
                s+=arr[l];
            }
            else{
                d+=arr[l];
            }
            l++;
        }
        else{
            if(turn){
                s+=arr[r];
            }
            else{
                d+=arr[r];
            }
            r--;
        }
    turn=!turn;
    }
        cout << s << " " << d<< endl;

}

int main() {
    solve();
    return 0;
}

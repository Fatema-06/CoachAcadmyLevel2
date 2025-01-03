#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n;
const int N = 3e5 + 1;
int arr[N];
int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin>>n;
    for(int i = 0;i < n;i++) {
        cin>>arr[i];
    }
    sort(arr , arr + n);
    ll res = 0;
    for(int i = 0;i < n; i++) {
        res += abs(i + 1 - arr[i]);
    }
    cout<<res<<'\n';
}
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n , k;
int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin>>n>>k;
    ll sum = 0;
    vector<int>v(n);
    for(int i = 0;i < n;i++)cin>>v[i];
    sort(v.rbegin() , v.rend());
    // sort(v.begin() , v.end() , greater<>());
    for(int i = 0;i < n;i++) {
        sum += (i / k + 1) * v[i];
    }
    cout<<sum<<'\n';
}
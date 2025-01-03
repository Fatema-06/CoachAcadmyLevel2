#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n , m , v[51];
int res = 100000;
int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin>>n>>m;
    for(int i = 0;i < m;i++)cin>>v[i];
    sort(v , v + m);
    for(int i = 0;i + n <= m;i++) {
        res = min(res , v[n + i - 1] - v[i]);
    }
    cout<<res<<'\n';
}
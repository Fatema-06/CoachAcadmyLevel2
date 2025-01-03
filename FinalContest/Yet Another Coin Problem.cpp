#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define el '\n'
#define fastio ios::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define all(v) v.begin(), v.end()
#define fixed(n) fixed << setprecision(n)

void solve() {
    ll n, cnt = 0; cin >> n;
    map<ll, ll> mp;

    mp[0] = 0;
    mp[1] = 1;
    mp[2] = 2;
    mp[3] = 1;
    mp[4] = 2;

    mp[5] = 3;
    mp[6] = 1;
    mp[7] = 2;
    mp[8] = 3;
    mp[9] = 2;
    mp[10] = 1;
    mp[11] = 2;
    mp[12] = 2;
    mp[13] = 2;
    mp[14] = 3;

    ll num_15 = n / 15;

    n %= 15;
    if (num_15) {
        cnt = num_15 + mp[n];
        if (n >= 5)
cnt = min(num_15 + mp[n], num_15 + 1 + mp[n-5]);
        cout << cnt << el;
    } else {
        cout << mp[n] << el;
    }


}
int main() {
    fastio;
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}

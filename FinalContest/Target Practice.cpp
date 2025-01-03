#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int n = 10;
    ll t; 
    cin >> t;

    while(t--) {
        vector<string> v(n);
        for(ll i = 0; i < n; i++) {
            cin >> v[i];
        }

        ll total = 0;
        for(ll row = 0; row < n; row++) {
            for(ll col = 0; col < n; col++) {
                if(v[row][col] == '.') {
                    continue;
                }

                ll xrow = min(row, n - 1 - row);
                ll xcol = min(col, n - 1 - col);
                ll ans = 1 + min(xrow, xcol);
                total += ans;
            }
        }

        cout << total << endl;
    }

    return 0;
}

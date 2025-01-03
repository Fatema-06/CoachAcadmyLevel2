#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define el '\n'
#define fastio ios::sync_with_stdio(false), cin.tie(0), cout.tie(0)
 
vector<ll> sieve (1000001, 1);
void isPrime() {
    sieve[0] = 0;
    sieve[1] = 0;
    for (ll i = 2; i*i <= 1000000; ++i)
        if (sieve[i])
            for (ll j = i*i; j <= 1000000; j+=i)
                sieve[j]= 0;
 
 
}
bool isPerfectSquare(ll x) {
    ll y = sqrt(x);
    return y * y == x;
}
 
int main() {
    fastio;
    isPrime();
    
    int t; cin >> t;
    while (t--) {
        ll x; cin >> x;
 
        if (x==4)
            cout << "YES" << el;
 
        else if (x%2==0)
            cout << "NO" << el;
 
        else if (sieve[(int)sqrt(x)] && isPerfectSquare(x))
            cout << "YES" << el;
 
        else
            cout << "NO" << el;
    }
    }
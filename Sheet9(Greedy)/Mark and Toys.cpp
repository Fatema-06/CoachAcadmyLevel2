#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n , arr[100001] , price = 0;
int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin>>n>>price;
    for(int i = 0;i < n;i++)cin>>arr[i];
    sort(arr , arr + n);
    ll sum = 0;
    int res = 0;
    for(int i = 0;i < n;i++) {
        sum += arr[i];
        if(sum <= price)res = i + 1;
        else break;
    }
    cout<<res<<'\n';
}
#include <bits/stdc++.h>
using namespace std;
 void solve(){
    int x, n;
    cin>>n>>x;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int l=0, r=0 , ans=INT_MAX , sum=0;

    while(r<n && sum<x){
        sum+=arr[r];
        r++;
        
        while(sum>=x){
            ans=min(ans,r-l);
            sum-=arr[l];
            l++;
        }
    }

    if(ans==INT_MAX){
        cout<<-1;
    }
    else{
        cout<<ans;
    }
 }

int main() {
    int t=1;
    while (t--){
        solve();
    }
    return 0;
}

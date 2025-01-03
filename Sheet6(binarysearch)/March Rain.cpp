#include <iostream>
using namespace std;
#define FastInput ios_base::sync_with_stdio(false); cin.tie(NULL);
#include <bits/stdc++.h>
#define ll long long
 
ll arry[100005];
ll n,k;
 
bool can(ll v){
     int last=-1,cnt=0;
     for(int i=0;i<n;i++){
        if(last<arry[i]){  
            last=arry[i]+v-1;
            cnt++;
        }
     }
     return cnt<=k;
}
 
int main() {
    FastInput
    int test;
    cin>>test;
 
    while(test--){
       cin>>n>>k;
 
       for(int i=0;i<n;i++)
            cin>>arry[i];
 
       ll low=1,high=2e9,ans=0,mid=0;
 
       while(low<=high){
        mid=(low+high)/2;
        if(can(mid)){
            high=mid-1;
            ans=mid;
        }else
          low=mid+1;
       }
 
       cout<<ans<<endl;
 
    }
}
 
#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    
    while(t--){
         int n;
         cin>>n;
         ll cnt;
         cin>> cnt;

    vector<int>v(n), height(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    for(int i=0; i<n; i++){
        cin>>height[i];
    }
    
    ll head=0, tail= 0, fruit=0, ans=0;
    for(head= 0; head<n; head++){
        fruit+=v[head];
        
        while(tail<= head && fruit > cnt){
            fruit-=v[tail];
            tail++;
        }
        
        if(head > 0){
            if( tail < head && (height[head-1] % height[head]) != 0){
                tail= head;
                fruit= v[head];
            }
        }
        
        ans= max(ans, head-tail+1);
    }
    
    cout<<ans<<endl;
    }
   
}
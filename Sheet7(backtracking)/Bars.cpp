#include<bits/stdc++.h>
using namespace std;

int n,p, a[21];

bool solve(int bar,int sum){
    if(sum==n){
        return true;
    }
    if(p==bar){
        return false;
    }
    bool take=solve(bar+1 , sum+ a[bar]);
    bool leave=solve(bar+1,sum);
    return take || leave;
}

int main(){
int t;
cin>>t;

while(t--){
cin>>n>>p;

for(int i=0;i<p;i++){
    cin>>a[i];
}
    cout<<(solve(0,0)?"YES":"NO")<<endl;

}
   return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    vector<int>a(n);
    int count=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    sort(a.begin(),a.end());

    for(int i=0;i<m;i++){
    if(a[i]<0){
        count+=abs(a[i]);
    }
    else{
    break;
    }
    }
    cout<<count;
}
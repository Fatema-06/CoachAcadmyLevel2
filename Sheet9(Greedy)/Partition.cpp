#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;cin>>n;
    vector<int>positive , negative;
    for(int i = 0;i < n;i++) {
        int x;cin>>x;
        if(x > 0)positive.emplace_back(x);
        else if(x < 0) negative.emplace_back(x);
        else positive.emplace_back(x) , negative.emplace_back(x);
    }
    sort(positive.begin() , positive.end());
    sort(negative.begin() , negative.end());
    if(positive.empty()) {
        // all negative
        cout<<-accumulate(negative.begin() , negative.end() , 0) ;
    }else if(negative.empty()) {
        // all positive
        cout<<accumulate(positive.begin() , positive.end() , 0);
    }else {
        // general case
        cout<<accumulate(positive.begin() , positive.end() , 0) - accumulate(negative.begin() , negative.end() , 0)<<'\n';
    }
}
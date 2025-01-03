#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,l,r,x;
    cin>>n>>l>>r>>x;
    
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int count=0; 

    for(int bitmask=0; bitmask<(1<<n);bitmask++) {
        vector<int>subset;
        int difficulty=0;

        for(int i=0;i<n;i++){
            if(bitmask & (1<<i)){
                subset.push_back(arr[i]);
                difficulty+=arr[i];
            }
        }

        if(subset.size()>=2){
            int min_difficulty=*min_element(subset.begin(), subset.end());
            int max_difficulty=*max_element(subset.begin(), subset.end());

            if(difficulty >= l && difficulty <= r && (max_difficulty - min_difficulty) >= x) {
                count++;
            }
        }
    }
    
    cout<<count<<endl;
    return 0;
}

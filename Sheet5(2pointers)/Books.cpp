#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, t;
    cin >> n >> t;
    
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int l = 0, sum = 0, r=0, max_books = 0;
    while(r<n){
        sum+=arr[r];
        r++;

        while(sum>t){
            sum-=arr[l];
            l++;
        }
            max_books=max(max_books,r-l);

    }
   cout<< max_books;
    
}

int main() {
    int t=1;
    while (t--) {
        solve();
    }
    return 0;
}

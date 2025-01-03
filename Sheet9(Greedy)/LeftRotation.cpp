#include<bits/stdc++.h>
using namespace std;

deque<int> rotLeft(deque<int>& a, int d) {
    int n=a.size();
    d=d%n; 
    rotate(a.begin(), a.begin() + d, a.end());
    return a;
}

int main(){
    int n,d;
    cin>>n>>d; 
    
    deque<int> a(n); 
    for(int i=0;i<n;i++){
        cin>>a[i]; 
    }
    
    deque<int> result=rotLeft(a,d);
    
    for (int i=0;i<n;i++){
        cout<<result[i]<< " "; 
    }
    cout<<endl;
    
    return 0;
}

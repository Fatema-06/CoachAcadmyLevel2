#include <iostream>
using namespace std;

void solve()
{
    long long n, k;
    cin>>n>>k;

    string s;
    cin>>s;

    long long ans=0;

    for(long long i=0;i<n;i++)
    {
        if(s[i]=='B')
        {
            ans++;
            i+=k-1;  
        }
    }
    cout<<ans<<endl;
}

int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}

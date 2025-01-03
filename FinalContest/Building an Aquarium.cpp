#include<bits/stdc++.h>
using namespace std;

bool valid(long long arr[], long long n, long long height, long long maxWater)
{
    long long currentWater = 0;

    for(int i = 0; i < n; i++)
    {
        if(arr[i]<height)
        {
            currentWater+=(height-arr[i]);
        }
    }

    if(currentWater>maxWater)
        return false;
    return true;
}

void solve()
{
    long long n, x;
    cin>>n>>x;

    long long arr[n];
    long long low= 1, high = INT_MAX;

    for(int i=0; i < n; i++) {
        cin >> arr[i];
    }

    long long bestHeight = -1;

    while(low<=high)
    {
        long long mid= low + (high - low) / 2;

        if(valid(arr, n, mid, x))
        {
            bestHeight=mid;
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }

    cout<< bestHeight<< endl;
}

int main()
{
    long long t = 1;
    cin>>t;
    while (t--)
    {
        solve();
    }
}